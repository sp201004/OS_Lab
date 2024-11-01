#include <iostream>
#include <vector>

using namespace std;

bool isSafeState(vector<vector<int> > &allocation, vector<vector<int> > &need, vector<int> &available, int n, int m) {
    vector<bool> finish(n, false);
    vector<int> work = available;

    for (int count = 0; count < n; count++) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (!finish[i]) {
                bool canAllocate = true;
                for (int j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        canAllocate = false;
                        break;
                    }
                }
                if (canAllocate) {
                    for (int k = 0; k < m; k++) {
                        work[k] += allocation[i][k];
                    }
                    finish[i] = true;
                    found = true;
                }
            }
        }
        if (!found) {
            return false; // system is not in a safe state
        }
    }
    return true; // system is in a safe state
}

bool requestResources(vector<vector<int> > &allocation, vector<vector<int> > &need, vector<int> &available, int n, int m, int process, vector<int> &request) {
    for (int i = 0; i < m; i++) {
        if (request[i] > need[process][i]) {
            cout << "Error: Process has exceeded its maximum claim." << endl;
            return false;
        }
    }

    for (int i = 0; i < m; i++) {
        if (request[i] > available[i]) {
            cout << "Process must wait as resources are not available." << endl;
            return false;
        }
    }

    for (int i = 0; i < m; i++) {
        available[i] -= request[i];
        allocation[process][i] += request[i];
        need[process][i] -= request[i];
    }

    if (isSafeState(allocation, need, available, n, m)) {
        cout << "Resources allocated successfully; system is in a safe state." << endl;
        return true;
    } else {
        for (int i = 0; i < m; i++) {
            available[i] += request[i];
            allocation[process][i] -= request[i];
            need[process][i] += request[i];
        }
        cout << "Request denied to keep system in a safe state." << endl;
        return false;
    }
}

int main() {
    int n, m;
    cout << "Enter number of processes and resources: ";
    cin >> n >> m;

    vector<vector<int> > max(n, vector<int>(m)), allocation(n, vector<int>(m)), need(n, vector<int>(m));
    vector<int> available(m);

    cout << "Enter allocation matrix:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> allocation[i][j];

    cout << "Enter max matrix:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> max[i][j];

    cout << "Enter available resources:" << endl;
    for (int i = 0; i < m; i++)
        cin >> available[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            need[i][j] = max[i][j] - allocation[i][j];

    if (isSafeState(allocation, need, available, n, m)) {
        cout << "Initial state is safe." << endl;
    } else {
        cout << "Initial state is not safe." << endl;
    }

    int process;
    cout << "Enter process number for request: ";
    cin >> process;
    vector<int> request(m);
    cout << "Enter resource request for process " << process << ": ";
    for (int i = 0; i < m; i++)
        cin >> request[i];

    requestResources(allocation, need, available, n, m, process, request);

    return 0;
}
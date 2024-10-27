#include <stdio.h>

struct Process {
    int burstTime, priority;
};

void sortProcesses(struct Process proc[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (proc[i].priority > proc[j].priority) {
                struct Process temp = proc[i];
                proc[i] = proc[j];
                proc[j] = temp;
            }
}

void findavgTime(struct Process proc[], int n) {
    int wt = 0, totalWT = 0, totalTAT = 0;
    for (int i = 0; i < n; i++) {
        totalWT += wt;
        totalTAT += wt + proc[i].burstTime;
        wt += proc[i].burstTime;
    }
    printf("Average Waiting Time: %.2f\n", (float)totalWT / n);
    printf("Average Turnaround Time: %.2f\n", (float)totalTAT / n);
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    struct Process proc[n];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &proc[i].burstTime, &proc[i].priority);
    sortProcesses(proc, n);
    findavgTime(proc, n);
    return 0;
}
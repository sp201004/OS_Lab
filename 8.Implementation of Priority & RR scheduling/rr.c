#include <stdio.h>

struct Process {
    int burstTime, remainingTime;
};

void findAvgTime(struct Process proc[], int n, int quantum) {
    int wt[n], tat[n], time = 0, totalWT = 0, totalTAT = 0, done;
    for (int i = 0; i < n; i++) proc[i].remainingTime = proc[i].burstTime;

    do {
        done = 1;
        for (int i = 0; i < n; i++) {
            if (proc[i].remainingTime > 0) {
                done = 0;
                if (proc[i].remainingTime > quantum) {
                    time += quantum;
                    proc[i].remainingTime -= quantum;
                } else {
                    time += proc[i].remainingTime;
                    wt[i] = time - proc[i].burstTime;
                    tat[i] = time;
                    proc[i].remainingTime = 0;
                    totalWT += wt[i];
                    totalTAT += tat[i];
                }
            }
        }
    } while (!done);

    printf("Average Waiting Time: %.2f\n", (float)totalWT / n);
    printf("Average Turnaround Time: %.2f\n", (float)totalTAT / n);
}

int main() {
    int n, quantum;
    printf("Enter number of processes and quantum: ");
    scanf("%d %d", &n, &quantum);
    struct Process proc[n];
    printf("Enter burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &proc[i].burstTime);
    }
    findAvgTime(proc, n, quantum);
    return 0;
}
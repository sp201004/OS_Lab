#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int i;
    system("clear");
    pid_t pid;
    
    printf("Enter your choice 0/1: ");
    scanf("%d", &i);
    
    printf("I'm the original process with PID %d and PPID %d.\n\n", getpid(), getppid());
    
    switch(i) {
        case 0: {
            pid = fork();
            if (pid == 0) {
                printf("Child process created with PID = %d and PPID = %d\n", getpid(), getppid());
            } else if (pid > 0) {
                printf("Parent process continues with PID = %d and PPID = %d\n", getpid(), getppid());
            } else {
                printf("Fork failed. Unable to create process.\n");
            }
            break;
        }
        
        case 1: {
            pid = fork();
            if (pid == 0) {
                printf("Child process created with PID = %d and PPID = %d\n", getpid(), getppid());
            } else if (pid > 0) {
                printf("Parent process continues with PID = %d and PPID = %d\n", getpid(), getppid());
            } else {
                printf("Fork failed. Unable to create process.\n");
            }
            break;
        }

        default: {
            printf("Invalid choice. Please choose either 0 or 1.\n");
            break;
        }
    }

    return 0;
}
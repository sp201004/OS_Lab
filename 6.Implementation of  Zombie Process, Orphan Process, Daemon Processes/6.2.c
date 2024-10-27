#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid > 0) {
        // Parent process finishes execution immediately
        printf("Parent process (PID: %d) is done and exits.\n", getpid());
    } else if (child_pid == 0) {
        // Child process sleeps and becomes an orphan
        printf("Child process (PID: %d) becomes an orphan.\n", getpid());
        sleep(10);  // Sleep to keep the process alive
        printf("Orphan process (PID: %d) adopted by init process.\n", getpid());
    }

    return 0;
}
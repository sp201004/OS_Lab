#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid > 0) {
        printf("This is the parent process, with id: %d\n", getpid());
        sleep(10);
        printf("Parent process ends without calling wait(), leaving child as zombie.\n");
    } else if (child_pid == 0) {
        printf("This is the child process, with id: %d\n", getpid());
        exit(0);
    }

    return 0;
}
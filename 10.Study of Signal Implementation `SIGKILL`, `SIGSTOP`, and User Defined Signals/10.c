#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_handler(int signo) {
    if (signo == SIGUSR1) {
        printf("Received SIGUSR1\n");
    } else if (signo == SIGKILL) {
        printf("Received SIGKILL\n");
    } else if (signo == SIGSTOP) {
        printf("Received SIGSTOP\n");
    }
}

int main(void) {
    if (signal(SIGUSR1, sig_handler) == SIG_ERR) {
        printf("Can't catch SIGUSR1\n");
    }
    
    if (signal(SIGKILL, sig_handler) == SIG_ERR) {
        printf("Can't catch SIGKILL (as expected)\n");
    }
    if (signal(SIGSTOP, sig_handler) == SIG_ERR) {
        printf("Can't catch SIGSTOP (as expected)\n");
    }

    
    while (1) {
        printf("Running... Send SIGUSR1 to process, or try SIGKILL/SIGSTOP.\n");
        sleep(1);

    return 0;
}
}
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handle_signal(int sig) {
    printf("Child received signal %d\n", sig);
}

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        signal(SIGUSR1, handle_signal);
        pause();
    } else {
        sleep(1);
        kill(pid, SIGUSR1);
    }

    return 0;
}

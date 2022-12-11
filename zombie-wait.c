#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    printf("Ayam Dobhal | Section C | University Roll Number 2016685\n");

    pid_t pid = fork();

    if (pid == 0) {
        for (int i = 0; i < 5; i++)
            printf("Child Process.\n");
    } else {
        wait(NULL);
        printf("Child process ended.\nParent Process exiting.\n");
    }
    return 0;
}

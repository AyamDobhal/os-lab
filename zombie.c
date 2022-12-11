#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    printf("Ayam Dobhal | Section C | University Roll Number 2016685\n");

    pid_t pid = fork();

    if (pid > 0) {
        sleep(360);
    } else {
        printf("Parent process ended.");
        exit(0);
    }
    return 0;
}

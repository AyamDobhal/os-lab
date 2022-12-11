#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    printf("Ayam Dobhal | Section C | University Roll Number 2016685\n");

    pid_t pid = fork();

    if (pid == 0) {
        sleep(20);
        printf("Child process.\n");
    } else {
        printf("Parent Process.\n");
        sleep(5);
        printf("Parent Process Ended\n");
    }
    return 0;
}

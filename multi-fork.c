#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Ayam Dobhal | Section C | University Roll Number 2016685\n");
    fork();
    printf("FORK\n");
    fork();
    printf("FORK2\n");

    return 0;
}

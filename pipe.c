#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
int main() {
    printf("Ayam Dobhal | Section C | University Roll Number 2016685\n");
    printf("PIPE IMPLEMENTATION\n");
    int Pipe[2];
    char string[100];
    if (pipe(Pipe) == -1) {
        perror("Failed to create pipe");
        exit(1);
    }
    printf("Enter the string: ");
    scanf("%s", string);
    write(Pipe[1], string, strlen(string) + 1);
    read(Pipe[0], string, 5);
    printf("Final output : %s\n", string);
}

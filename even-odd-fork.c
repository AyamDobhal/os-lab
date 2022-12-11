#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    printf("Ayam Dobhal | Section C | University Roll Number 2016685\n");

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    pid_t pid = fork();

    if (pid > 0) {
        int sum = 0;
        for (int i = 2; i <= n; i += 2) {
            sum += i;
        }
        printf("Sum of even terms: %d\n", sum);
    } else {
        int sum = 0;
        for (int i = 1; i <= n; i += 2) {
            sum += i;
        }
        printf("Sum of odd terms: %d\n", sum);
    }
    return 0;
}

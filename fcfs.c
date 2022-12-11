#include <stdio.h>

void findWaitingTime(int *, int, int *, int *);
void findTurnAroundTime(int *, int, int *, int *, int *);
void findAverageTime(int *, int, int *);
int main() {
    printf("Ayam Dobhal | Section C | University Roll Number 2016685\n");
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int processes[n];
    printf("Enter the Process ID: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &processes[i]);
    printf("Enter the Burst Time: ");
    int burst_time[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &burst_time[i]);
    findAverageTime(processes, n, burst_time);
    return 0;
}
void findWaitingTime(int *processes, int n, int *bt, int *wt) {
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}
void findTurnAroundTime(int *processes, int n, int *bt, int *wt, int *tat) {
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}
void findAverageTime(int *processes, int n, int *bt) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    findWaitingTime(processes, n, bt, wt);
    findTurnAroundTime(processes, n, bt, wt, tat);
    printf("Processes \t Burst time \t  Waiting time \t  Turn around time\n");
    for (int i = 0; i < n; i++) {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("%d \t\t %d \t\t %d \t\t %d\n", i + 1, bt[i], wt[i], tat[i]);
    }
    float k = (float)total_wt / (float)n;
    float l = (float)total_tat / (float)n;
    printf("Average waiting time = %f\n", k);
    printf("Average turn around time = %f\n", l);
}

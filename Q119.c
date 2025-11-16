#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Maximum value in array won't exceed n (based on given pattern)
    int visited[n+1];
    for (int i = 0; i <= n; i++)
        visited[i] = 0;

    int repeated = -1;

    // One single iteration
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (visited[arr[i]] == 1) {
            repeated = arr[i];
        }

        visited[arr[i]] = 1;
    }

    printf("%d", repeated);

    return 0;
}


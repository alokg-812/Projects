#include <stdio.h>
char* is_ready_for_battle(int N, int weapons[]) {
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < N; i++) {
        if (weapons[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    if (even_count > odd_count)
        return "READY FOR BATTLE";
    else
        return "NOT READY";
}
int main() {
    int N;
    scanf("%d", &N);
    int weapons[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &weapons[i]);
    }
    char* result = is_ready_for_battle(N, weapons);
    printf("%s\n", result);
    return 0;
}
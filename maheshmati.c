#include <stdio.h>
int is_ready(int x, int y) {
    int lucky = 0, unlucky = 0;
    if (y % 2 == 0) {
        printf("lucky");
        lucky = lucky + 1 ;
    }
    else printf("Unlucky");
        unlucky = unlucky + 1 ;
    if (lucky > unlucky) return lucky; 
    else return unlucky;
}
int main(void) {
    int n; // n is the number of soldiers
    int lucky = 0;
    int unlucky = 0;
    printf("n: ");
    scanf("%d", &n);
    for (int i = 0; i<n;i++) {
        printf("Enter the number of weapons present in ith soldier: ");
        scanf("%d",&i);
        int battle_result = is_ready(n,i)        
    }
    return 0;
}
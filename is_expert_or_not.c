#include<stdio.h>
int main() {
    int T;
    printf("Enter T: ");
    scanf("%d",&T);
    for (int i = 0; i < T ; i++) {
        float total, approved;
        printf("Enter total and approves qs: ");
        scanf("%f%f",&total,&approved);
        if (((approved/total)*100)>=50) {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}
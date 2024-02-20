#include<stdio.h>
int main() {
    int n, no_of_coins;
   // printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 0 ; i< n ; i++) {
        //printf("Enter ith: ");
        scanf("%d",&i);
      //  printf("Enter the no of bills: ");
        scanf("%d",&no_of_coins);
        int k = i*no_of_coins;
        printf("%d",k/100);
    }
}
#include<stdio.h>
int main() {
    int n, total_no_of_coins;
   // printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 0 ; i< n ; i++) {
        //printf("Enter ith: ");
        int no_of_bills,each_bill;
        scanf("%d %d",&no_of_bills,&each_bill);
        total_no_of_coins = no_of_bills * each_bill;
        printf("%d \n",total_no_of_coins/100);
    }
    return 0;
}
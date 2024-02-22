#include <stdio.h>
int main(void) {
    int n; // n is the number of test cases
    //printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i < n ; i++) {
        int b1,b2,b3; // b1 b2 b3 denotes bottles 1 2 3 resp.
        scanf("%d%d%d", &b1, &b2, &b3);
        if(b1+b2+b3 >= 2) printf("Not now\n");
        else printf("Water filling time\n");
    }
}


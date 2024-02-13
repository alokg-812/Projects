#include <stdio.h>
char* assign(int x) {
    int time = 10 - x;
    if (time >= 3) {
        return "Yes";
    } else {
        return "No";
    }
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n;i++) {
        int X;
        scanf("%d", &X); 
        char* result = assign(X);
        printf("%s\n", result);
    }
    return 0;
}

#include <stdio.h>

int main() {
    // Please write your code here.
    int x;
    scanf("%d",&x);

    char* result = x == 100 ? "pass" : "failure";
    printf("%s",result);
    return 0;
}
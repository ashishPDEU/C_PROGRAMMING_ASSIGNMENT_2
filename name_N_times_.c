#include <stdio.h>

int main() {
    int n;
    printf("enter no:");
    scanf("%d",&n);
    char name[] = "ashish"; 

    for (int i = 0; i < n; i++) {
        printf("%s\n", name);
    }

    return 0;
}

#include <stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);
    long long sum = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    float tbc = sum*(1.0) / n;
    printf("%.2f", tbc);

    return 0;
}
#include <stdio.h>

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    int n, a[100];
    scanf("%D", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    int x;
    scanf("%d", &x);
    for(int i = 0; i < n; i++){
        if(gcd(x, a[i]) == 1) ++cnt;
    }
    printf("%d\n", cnt);
    for(int i = 0; i <n; i++){
        if(gcd(x, a[i]) == 1){
            printf("%d ", a[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int reverse(int n){
    int u = n;
    int S = 0;
    while(n){
        S = S * 10 + n % 10;
        n /= 10;
    }
    if(S == u) return 1;
    else return 0;
}

int main(){
    int n, a[100];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(reverse(a[i])) ++cnt;
    }
    printf("%d", cnt);
    printf("\n");
    for(int i = 0; i < n; i++){
        if(reverse(a[i])){
            printf("%d ", a[i]);
        }
    }
    return 0;
}
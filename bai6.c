#include <stdio.h>
#include <math.h>

int cp(int n){
    int i = sqrt(n);
    return i * i == n;
}

int main(){
    int n, a[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(cp(a[i])) ++cnt;
    }
    printf("%d\n", cnt);
    for(int i = 0; i < n; i++){
        if(cp(a[i])){
            printf("%d ", a[i]);
        }
    }

    return 0;
}
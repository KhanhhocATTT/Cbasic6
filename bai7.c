#include <stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x) ++cnt;
    }
    printf("%d", cnt);

    return 0;
}
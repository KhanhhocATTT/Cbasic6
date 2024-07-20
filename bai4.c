#include <stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int odd = 0, even = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0) ++even;
        else ++odd;
    }
    printf("%d\n%d", even, odd);

    return 0;
}
#include <stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int min1 = 1e9, min2 = 1e9;
    for(int i = 0; i < n; i++){
        if(a[i] < min1){
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i] < min2){
            min2 = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] == min1){
            printf("%d", i);
        }
        else if(a[i] == min2){
            printf("%d", i);
        }
    }

    return 0;
}
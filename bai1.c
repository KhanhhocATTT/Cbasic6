#include <stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max1 = -1e9, max2 = -1e9;
    for(int i = 0; i < n; i++){
        if(max1 < a[i]){
            max2 = max1;
            max1 = a[i];
        }
        else if(max2 < a[i]){
            max2 = a[i];
        }
    }
    printf("%d\n", max1);
    printf("%d", max2);

    return 0;
}
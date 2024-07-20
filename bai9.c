#include <stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max = -1e9, min = 1e9, max1, min1;
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
            max1 = i;
        }
        else if(a[i] < min){
            min = a[i];
            min1 = i;
        }
    }
    printf("%d %d\n",max, max1);
    printf("%d %d", min, min1);

    return 0;
}
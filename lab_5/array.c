#include <stdio.h>
void main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i, position = 0;

    for (i = 0; i < n; i++) {
        arr[i] = 1;
    }

    for (i = 0; i < n - 1; i++) {
        int count = 0;
        while (count < 2) {
            position = (position + 1) % n;
            if (arr[position] == 1) {
                count++;
            }
        }
        arr[position] = 0;
    }
    for (int i = 0; i < n; i++) {
        if(arr[i]==1){
            printf("%d ", i);
        }
    }
}

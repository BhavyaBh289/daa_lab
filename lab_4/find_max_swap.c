#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int a[], int b, int c) {
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}
int* getarr(int n){
    srand(time(NULL));
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i=0; i<n; i++)
        arr[i] = i+1;
    for(int i=0;i<n;i++){
        int q=rand()%(n-i);
        swap(arr,q,i+q);
    }
    /*for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }*/
    return arr;
}
void main (){
    int n, q, swaps = 0, e = 0;
    int *w;
    printf("array size  ");
    scanf("%d", &n);
    printf("iterations  ");
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        w = getarr(n);
        e = 0;
        for (int j = 0; j < n; j++) {
            if (e > w[j] || j == 0) {
                e = w[j];
                swaps += 1;
            }
        }
        free(w);
    }
    int res = swaps / q;
    printf("Average swaps: %d\n", res);

    return 0;
}

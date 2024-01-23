#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int a[], int b, int c) {
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}
void main(){
    srand(time(NULL));
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
        arr[i] = i+1;
    for(int i=0;i<n;i++){
        int q=rand()%(n-i);
        swap(arr,q,i+q);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

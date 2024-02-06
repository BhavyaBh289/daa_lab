#include <stdio.h>
#include <time.h>
void main (){
    srand(time(NULL));
    int n=8;
    int arr[8]={1,2,3,2,4,2,2,2};
    int c=0;
    int q=0;
    while(c<n/2){
        c=0;
        q=arr[rand()%(n)];
        for (int i=0;i < n;i++){
            if(q==arr[i]){
                c++;
            }
        }
    }
    printf("%d",q);
}

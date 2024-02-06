#include <stdio.h>
void main (){
    int n=8;
    int arr[8]={1,2,3,2,4,2,2,2};
    int max=0,counter=0;

    for (int i = 0; i < n ; i++) {
        if(max==arr[i]){
            counter++;
        }else if(counter!=0){
            counter--;
        }else{
            max=arr[i];
            counter++;
        }
    }
    printf("%d ", max);
}

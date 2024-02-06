#include <stdio.h>
void main (){
    int n=8;
    int arr[8]={1,2,3,2,4,2,2,2};
    int hashtable[]={0,0,0,0,0,0};
    for (int i=0;i < n;i++){
        hashtable[arr[i]]++;
    }
    int max=0,counter=0;
    for (int i=0;i < sizeof(hashtable)/sizeof(hashtable[0]);i++){
        if(counter<hashtable[i]){
            counter=hashtable[i];
            max=i;
        }
    }
    printf("%d",max);
}


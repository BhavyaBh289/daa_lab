#include <stdio.h>
void main (){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++) {
        array[i] = 1;
    }
    int holder = 0;
    int next = 1;
    while(array[holder]!=0){
        printf("%d  ",next);
        array[next]=0;
        while(array[next]!=1){
            next=(next+1)%n;
        }
        holder=next;
        next=(next+1)%n;
        while(array[next]!=1){
            next=(next+1)%n;
        }
    }
    printf("%d",holder);
}

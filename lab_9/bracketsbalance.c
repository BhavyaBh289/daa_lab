#include <stdio.h>
void printtrees(int n ){
    if (n==0){
        printf("");
        return;
    }else if(n==1){
        printf("()");
        return;
    }
    else{
        for(int i = 0;i<n;i++){
            printf("("+gettree(i)+")"+gettree(n-1-i));
        }
        return;
    }
}
int main (){
    int t;
    scanf("%d",&t);
    printf("%d",treecount(t));
}

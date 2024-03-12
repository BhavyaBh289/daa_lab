#include <stdio.h>

int treecount(int n ){
    if (n==0){
        return 1;
    }else if(n==1){
        return 1;
    }
    else{
        int sum=0;
        for(int i = 0;i<n;i++){
            sum+=(treecount(i)*treecount(n-1-i));
        }
        // printf("%d %d \n",sum,n);
        return sum;
    }
}
int main (){
    int t;
    scanf("%d",&t);
    printf("%d",treecount(t));
}

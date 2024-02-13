#include <stdio.h>
int power(int b,int p,int m){
    int res=1;
    while (p>0){
        if (p%2==1){
            res=res*b%m;
        }
        p/=2;
        b=b*b%m;
        // printf("%d %d %d\n",b,p,m);

    }
    return res%m;
}
void main (){
    int b,p,m;
    printf("enter base power exponent ");
    scanf("%d %d %d",&b,&p,&m);
    printf("the result is  %d",power(b,p,m));
}


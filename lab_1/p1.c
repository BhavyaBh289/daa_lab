#include<stdio.h>
void main(){
    int val ,k=0;
    int temp[10]={0};
    while(val!=-3){
        scanf("%d",&val);
        k=k%10;
        switch(val){
            case (-1):
                int high=-1;
                for (int i=0;i<10;i++){
                    if(high<temp[i]){
                        high=temp[i];
                    }
                }
                printf("%d is the highest\n",high);
                break;
            case(-2):
                int sum=0,avg=-1;
                for (int i=0;i<10;i++){
                    // printf("%d ",temp[i]);
                    if(temp[i]==0){
                        avg=sum/k;
                        printf(" %d %d %d /n",avg,sum,k);
                        break;
                    }
                    sum+=temp[i];

                }
                if(avg==-1){
                    avg=sum/10;
                    // printf("1");
                }
                printf("%d is the average\n",avg);
                break;
            default:
                if(val>0){
                temp[k]=val;
                k++;
                }
        }
    }
}

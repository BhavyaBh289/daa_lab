#include <stdio.h>
#include <malloc.h>
 struct node{
    int data;
    struct node * next;
    struct node * prev;

};
struct node * head = NULL;
void createpile(int n){
    head= (struct node *) malloc(sizeof(struct node));
    head->data = 1;
    int q=1;
    struct node * tempprev=head;
    while(n>q){
        q++;
        struct node * temp = (struct node *) malloc(sizeof(struct node));
        temp->data=q;
        temp->prev=tempprev;
        tempprev->next=temp;
        tempprev=temp;
    }
    head->prev=tempprev;
    tempprev->next=head;
}
void change(){
    if(head ==NULL){
        return;
    }
    if( head==head->next){
        printf("%d ",head->data);
        head = NULL;
        return;
    }
    // printf("%d    ",head->data);
    head->next=head->next->next;
    head=head->next;
}
void main(){
    int n;
    scanf("%d",&n);
    createpile(n);
    // struct node * temp = head;
    // do{
    //     printf("%d  ",temp->data);
    //     temp=temp->next;
    // }while(temp!=head);
    while(head!=NULL){
        change();
    }
    return 0;
}

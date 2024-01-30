 
#include <stdio.h>
#include <malloc.h>
 struct node{
    int data;
    struct node * next;
    struct node * prev;

};
struct node * head = NULL;
struct node * last = NULL;
void createpile(int n){
    head= (struct node *) malloc(sizeof(struct node));
    head->data = n;
    head->next= NULL;
    head->prev= NULL;
    last = head;
}
void addfirst(int n){
    struct node * new = (struct node *) malloc(sizeof(struct node));
    new->data = n;
    new->next = head;
    head->prev=new;
    head= new;
}
void shift(){
    last->next = head;
    head->prev= last;
    head= last;
    last = last->prev;
    last->next=NULL;
    head->prev=NULL;
}

void main(){
    int n,k;
    scanf("%d",&n);
    k=n;
    createpile(n);
    while (n>1){
        n--;
        addfirst(n);
        shift();
    }
    struct node * temp =head;
    int i=1;
    while (temp->data !=k){
        i+=1;
        temp=temp->next;
    }
    printf("%d",i);
}

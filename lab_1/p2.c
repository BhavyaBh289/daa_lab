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
    int n;
    scanf("%d",&n);
    createpile(n);
    while (n>1){
        n--;
        addfirst(n);
        shift();
    }
    struct node * temp =head;
    while (temp!=NULL){
        printf("%d ,",temp->data);
        temp=temp->next;
    }
}


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct ll {
    struct node* head;
    struct node* last;
};

void add(struct ll* llist, int n) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = n;
    new_node->next = NULL;

    if (llist->head == NULL) {
        llist->head = new_node;
        llist->last = new_node;
    } else {
        llist->last->next = new_node;
        llist->last = new_node;
    }
}

void shift(struct ll* llist) {
    if (llist->head != NULL) {
        struct node* temp = llist->head;
        llist->head = llist->head->next;
        free(temp);
    }
}
void display(struct ll * llist){
    struct node * temp = llist->head;
    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}

void addlist1(struct ll * llist){
    add(llist,1);
    // printf("%d",llist->head->data);

    add(llist,2);
    add(llist,5);
    add(llist,7);
    add(llist,9);
    add(llist,11);
    add(llist,12);
    add(llist,13);
}

void addlist2(struct ll * llist){
    add(llist,3);
    add(llist,4);
    add(llist,6);
    add(llist,8);
    add(llist,10);
    add(llist,14);
    add(llist,15);
    add(llist,16);
}
void merge(struct ll * llist1,struct ll * llist2 ,struct ll * llistres){
    while(llist1->head!=NULL&llist2->head!=NULL){
        if(llist1->head==NULL){
            if(llist2->head!=NULL){
                while(llist2->head!=NULL){
                    add(llistres,llist2->head->data);
                    shift(llist2);
                }
                break;
            }
        }
        else if(llist2->head==NULL){
            if(llist1->head!=NULL){
                while(llist1->head!=NULL){
                    add(llistres,llist1->head->data);
                    shift(llist1);
                }
                break;
            }
        }
        else{
            if(llist1->head->data>llist2->head->data){
                add(llistres,llist2->head->data);
                shift(llist2);
            }else{
                add(llistres,llist1->head->data);
                shift(llist1);
            }
        }
    }
}

void main(){
    struct ll l1;
    l1.head=NULL;
    l1.last=NULL;
    addlist1(&l1);
    struct ll l2;
    l2.head=NULL;
    l2.last=NULL;
    addlist2(&l2);
    struct ll lres;
    lres.head=NULL;
    lres.last=NULL;
    merge(&l1,&l2,&lres);
    display(&lres);
}

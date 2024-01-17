//create a liked list and input data
//head stores the address of the first node

#include<stdio.h>
#include<stdlib.h>

typedef struct listNode
    {
        int data;
        struct listNode *next;
    }node;

int main(){
    node *head;
    node *newnode;
    node *temp;
    int i=0;
    int num;
    head=NULL;
    printf("enter the number of elements");
    scanf("%d",&num);

    while (i<num)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("Enter the data :  ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if (head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }         
    i++;
    }
    temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    } 

}
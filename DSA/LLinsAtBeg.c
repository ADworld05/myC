// insert a node in linked list at the begining
//here there is a separate head block storing address of the first node

#include <stdio.h>
#include<stdlib.h>

typedef struct linkedListnode
{
    int data;
    struct linkedListnode *next;
}node;

node *head=NULL;

void createLinkedList(int num){
    int i=0;
    
    node *newnode;
    node *temp;
    

    while (i<num)
    {         
        newnode=(node *)malloc(sizeof(node));
        printf("Enter the data :  ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if (head==NULL)     
        {   //if head is null then first newnode address in head
            head=temp=newnode;
        }
        else
        {   //update temp
            temp->next=newnode;
            temp=newnode;
        }         
    i++;
    }
}

void displayLinkedList(){
    //fetch the address of the head in current
    node *current=head;
    while(current!=0){
        printf("%d\t",current->data);
        current=current->next;
    }
    printf("\n");
}

//insert a node in the begining of the node
void insAtBegining(){
    node *insertnode;
    int data;
    insertnode=(node *)malloc(sizeof(node));
    printf("Enter the data of new node  :");
    scanf("%d",&insertnode->data);
    insertnode->next=head;
    head=insertnode;
}

int main(){
    int length;    

    printf("Enter the no of elements in the linked list  : ");
    scanf("%d",&length);
    createLinkedList(length);
    displayLinkedList();
    insAtBegining();
    displayLinkedList();
    return 0;

}
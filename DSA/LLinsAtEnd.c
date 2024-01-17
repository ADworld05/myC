//insert a node at end
#include<stdio.h>
#include<stdlib.h>

typedef struct linkedListnode           
{
    int data;
    struct linkedListnode *next;
}node;

node *head=NULL;

void createLinkedList(int num){
    //intilizing first node
    head=(node *)malloc(sizeof(node));
    printf("Enter the data of first node  : ");
    scanf("%d",&head->data);
    head->next=NULL;

    node *newnode;
    node *temp;
    temp=head;

    //creating num-1 nodes
    for (int i = 2; i <= num; i++)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("Enter the data in %d node  : ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        temp->next=newnode;
        temp=newnode;
    }  
}

void displayList(){
    //fetch the address of the head in current
    node *current=head;
    while (current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->next;
    }   
}

void insAtEnd(){
    //ptr points the last node
    node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    //create a appendnode
    node *appendnode=(node *)malloc(sizeof(node));
    printf("Enter the data in new node  : ");
    scanf("%d",&appendnode->data);
    appendnode->next=NULL;

    //link the new append node to ptr
    ptr->next=appendnode;
}

int main(){
    int len;
    printf("Enter the number of nodes  :");
    scanf("%d",&len);

    createLinkedList(len);
    displayList();
    insAtEnd();
    displayList();    
}
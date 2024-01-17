//enter a newnode at given index
#include<stdio.h>
#include<stdlib.h>

typedef struct linkedListnode           
{
    int data;
    struct linkedListnode *next;
}node;

node *head=NULL;

void createLinkedList(int num){
    //initialize head
    head = (node *)malloc(sizeof(node));
    printf("Enter the data in first node  : ");
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

void insAtIndex(int index){
    int i=1;

    //create a new node
    node *appendnode=(node *)malloc(sizeof(node));
    printf("Enter the data in new node  : ");
    scanf("%d",&appendnode->data);
    appendnode->next=NULL;

    node *ptr=head;
    while (i<index)
    {
        ptr=ptr->next;
        i++;
    }

    appendnode->next=ptr->next;
    ptr->next=appendnode;    
}

int main(){
    int len,index;
    printf("Enter the number of nodes  :");
    scanf("%d",&len);
    
    createLinkedList(len);
    displayList();
    printf("Enter the index of newnode  :");
    scanf("%d",&index);
    insAtIndex(index);
    displayList();

}



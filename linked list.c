#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
 struct node *new_node,*head=NULL;
 struct node *current;
void vdelet()
{
    int value;
    printf("Which data you want to delet?\n");
    scanf("%d", &value);
    struct node *temp;
    temp=head;
    current=head;
     if(temp->data==value)
        {
            head=temp->next;
            free(temp);
            return;
        }
    while(temp!=NULL)
    {
        if(temp->data == value)
        {
            current->next = temp->next;
            free(temp);
            return;
        }
        current = temp;
        temp = temp->next;
    }
}
void input()
{
    int i,value,x;
    printf("How many data you want to input?\n");
    scanf("%d", &x);
    printf("Enter Value\n");
    for(i=0;i<x;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));

        scanf("%d", &new_node->data);
        if(head == NULL)
        {
            head = new_node;
            current=new_node;
        }
        else{
            current->next=new_node;
            current=new_node;
        }
        new_node->next=NULL;
    }
    printf("Enter your option: ");
}
void display()
{
    struct node *result = head;
    while(result!=NULL)
    {
        printf("Result is %d\n", result->data);
        result=result->next;
    }
    printf("Enter your option: ");
}
void delet()
{
    struct node *temp1=head;
    int position,i;
    printf("Which position you want to delet?\n");
    scanf("%d", &position);
    if(position==1)
    {
        head = temp1->next;
        free(temp1);
    }
    else{
    for(i=0;i<position-2;i++)
        temp1=temp1->next;
    struct node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);}
    printf("Enter your option: ");
}
void insert()
{
     new_node=(struct node*)malloc(sizeof(struct node));
     int pos,i;
     printf("Which position you want to insert?\n");
     scanf("%d",&pos);
     printf("Enter Value\n");
     scanf("%d", &new_node->data);
     struct node *temp=head;
     if(pos==1)
     {
         new_node->next=head;
         head=new_node;
     }
     else{
        for(i=0;i<pos-2;i++)
            temp=temp->next;
        new_node->next = temp->next;
        temp->next=new_node;
     }
    printf("Enter your option: ");
}
int main()
{
    int a,b;
    char c;
    struct node *temp;
    while(1)
        {
            scanf("%c", &c);
            switch(c)
            {
            case 'a':
                input();
                break;
            case 'd':
                display(head);
                break;
            case 'e':
                delet(head);
                break;
            case 'i':
                insert();
                break;
            case 'v':
                vdelet();
                break;
            }
        }

    return 0;
}

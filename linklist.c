#include<stdio.h>
struct node
{
    int sem;
    char name[20];
    char branch[20];
     struct node *next;

};

struct node *getnode(struct node *head)
{
    struct node *newnode;
    newnode=( struct node*)malloc(sizeof( struct node));
    printf("Enter sem, name, branch");
    scanf("%d", &newnode->sem);
    scanf("%s", &newnode->name);
    scanf("%s", &newnode->branch);
    newnode->next=NULL;
    head=newnode;
    return head;

}
struct node *create(struct node *head)
{
    struct node *newnode;
    if(head==NULL)
    {
        newnode=getnode(head);
        head=newnode;
    }
    else
    {
        newnode=getnode(head);
        newnode->next=head;
        head=newnode;
    }
    return head;
}
void display(struct node *head)
{
    struct node *p;
    if(head==NULL)
    printf("empty");
    else
    {
        p=head;
        printf("detail\n");
        while(p!=NULL)
        {
            printf("%s\t%s\t%d\n",p->name,p->branch,p->sem);
            p=p->next;
        }

    }
    

}
int main()
{
    int i,n;
    struct node *head;
    head=NULL;
    printf("Enter the no of student");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        head=create(head);
    }
   
      display(head);
    
    return 0;

}
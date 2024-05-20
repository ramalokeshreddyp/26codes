#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void display();
void insertend();
int main(){
	struct node *temp=NULL;
	int n,i;
	printf("Enter number of nodes:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
struct node *newnode=malloc(sizeof(struct node));
int item;
printf("Enter data of :%d node\n",i);
scanf("%d",&item);
newnode->data=item;
newnode->next=NULL;
if(head==NULL){
	head=temp=newnode;
}
else{
	temp->next=newnode;
	temp=newnode;
}
}
display();
insertend();
printf("\n");
display();
	return 0;
}
void display(){
		struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void insertend(){
	struct node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	struct node *newnode=malloc(sizeof(struct node));
	printf("\nEnter the data to insert :\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	temp->next=newnode;
}

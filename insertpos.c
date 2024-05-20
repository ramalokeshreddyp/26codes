#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void display();
void insertpos();
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
insertpos();
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
void insertpos(){
	struct node *temp=head;
	int i=1,pos;
	printf("\nEnter the position to insert:\n");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	struct node *newnode=malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("no address found\n");
	return;
	}
	else{
	printf("\nEnter the data to insert :\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->next=temp->next;
	temp->next=newnode;
}
}

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertbeg();
void display(struct node *);
int main(){
	struct node *temp=NULL,*newnode;
	int n,i;
	printf("Enter number of nodes:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int item;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data:%d node \n",i);
		scanf("%d",&item);
		newnode->data=item;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
			
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
	}
	/*temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		
	}*/
	display(head);
	printf("\n");
	insertbeg();
	/*temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		
	}*/
	display(head);
	return 0;
}

void insertbeg(){
	struct node *newnode=malloc(sizeof(struct node));
	int item;
	printf("Enter data to insert:\n");
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=head;
	head=newnode;
}
void display(struct node *head){
	struct node *temp=head;
		while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
}

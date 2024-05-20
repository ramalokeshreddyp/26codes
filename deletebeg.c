#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void deletebeg();
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
	display(head);
	printf("\n");
	deletebeg();
	
	display(head);
	return 0;
}

void deletebeg(){
struct node *temp=head;
head=head->next;
free(temp);
}
void display(struct node *head){
	struct node *temp=head;
		while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
}

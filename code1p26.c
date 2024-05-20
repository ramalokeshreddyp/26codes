#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head=NULL,*temp=NULL,*newnode;
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
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
	return 0;
}

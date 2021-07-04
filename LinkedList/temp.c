#include<stdio.h>
#include<stdlib.h>
struct node{
	int data; 
	struct node *next;
};
int main(){
	char ch;
	int choice; //4
	struct node *head,*newnode,*temp; //8
	head=0;
	do{
		printf("1.Create a new node\n2.Display Linked list\n3.Insert at beg\n4.Insert at end\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				newnode=(struct node*)malloc(sizeof(struct node));  //200
				printf("Enter data\n");
				scanf("%d",&newnode->data); //7
				newnode->next=0;
				//head=newnode; 
			if(head==0){
				//head=newnode;
				head=temp=newnode; //only for first node
				}
			else{
				//head->next=newnode
				temp->next=newnode;
				temp=newnode;
				}
			break;
			
			case 2:
				temp=head;
				while(temp!=0){
					printf("%d->",temp->data);
					temp=temp->next;
				}
				printf("NULL");
				break;
			case 3:
				newnode=(struct node*)malloc(sizeof(struct node));  //200
				printf("Enter data\n");
				scanf("%d",&newnode->data); //7
				newnode->next=head;
				head=newnode;
				break;
			case 4:
				newnode=(struct node*)malloc(sizeof(struct node));  //200
				printf("Enter data\n");
				scanf("%d",&newnode->data); //7
				newnode->next=0;
				temp=head;
				while(temp->next!=0){
					temp=temp->next;
				}
				temp->next=newnode;
				break;
		}
	printf("\nDo you want to run this AGAIN! Y/y for yes\n");
	fflush(stdin);
	scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
	
}

//malloc= void pointer
//(struct node*)= type casting

//insert at beg //
//insert at end
//insert at position
// int insertAtPos(int pos)
// {
// 	int n;
// 	struct Node *s=head;
// 	while(s!=0)
// 	{
// 		n++;
// 		s=s->next;
// 	}
// 	if(pos>n)
// 	{
// 		printf("Invalid position");
// 	}
// 	else
// 	{
// 		struct Node *qtr=head;
// 		while(i<pos)
// 		{
// 			qtr=qtr->next;
// 			i++;
// 		}
		
// 		struct Node *newnode=(struct node*)malloc(sizeof(struct Node));
		
// 		newnode->data=x;
// 		newnode->next=temp->next;
// 		temp->next=newnode;
// 	}
// }
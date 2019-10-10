#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;

}*start=NULL;
void add_beg(int data)
{
struct node *new ;
new=(struct node*)malloc(sizeof(struct node));
new->info=data;
new->next=start;
start=new;
}
void add_end(int data)
{
	struct node *new, *temp;
new=(struct node*)malloc(sizeof(struct node));
new->info=data;
new->next=NULL;
temp=start;
while(temp->next!=NULL)	
{
	temp=temp->next;
}
temp->next=new;
}
void del_beg()
{
	struct node *temp;
	start=temp->next;
	start=start->next;
	free(temp);
}
void del_end()
{
	struct node *temp,*ptr;
	temp=start;
	while(temp->next->next!=NULL)	
	temp=temp->next;
	ptr=temp->next;
	temp->next=NULL;
	free(ptr);
}
void display()
{
	struct node *temp;
	temp=start;
	printf("{");
	while(temp!=NULL)
	{
		printf("%d,",temp->info);
		temp=temp->next;
	}
	printf("}\n");
}
int main()
{
	int ch,n,x;
	while(1)
	{
		printf("\n1: Add node at beginning \n2: Add node at end \n3: Delete node at beggining \n4: delete node at end \n5: display ");
		printf("\nEnter your choice:\n ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nData: ");
				scanf("%d",&n);
			    add_beg(n);
		    break;
		    		case 2:
				printf("\nData: ");
				scanf("%d",&n);
			    add_end(n);
		    	break;
		    			case 3:
			    		del_beg();
			    		printf("Deleted from beginning");
		    			break;
		    				case 4:
			    		del_end();
			    		printf("Deleted from end");
		    			break;
		    case 5: 
			display();
			
		    
		    				
		
		}
	}
	return 0;
}

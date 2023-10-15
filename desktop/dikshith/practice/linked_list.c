#include<stdio.h>
#include<stdlib.h>
void creation();
void display();
void insert_begin();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
int main()
{
	int n;
	while(1)
	{
	printf("enter value for 1 is creation\n");
	        printf("enter value for 2 is display\n");
		  printf("enter value for 3 is insert_begin\n");
		  printf("enter value for 4 is insert_pos\n");
                  printf("enter value for 5 is delete_begin\n");
		  printf("enter value for 6 is delete_end\n");
		  printf("enter value for 7 is delete_pos\n");


		  scanf("%d",&n);

			  switch(n)
			  {
				  case 1:creation();
					 break;
			          case 2:display();
					 break;
			          case 3:insert_begin();
					 break;
				  case 4:insert_pos();
					 break;
				  case 5:delete_begin();
					 break;
				  case 6:delete_end();
					 break;
			          case 7:delete_pos();
					 break;
			          default:printf("invalid number\n");
					  exit(0);
			  }
		  }
}
void creation()
{
	struct node *temp,*ptr;
	temp=((struct node*)malloc(sizeof(struct node)));
	if(temp==NULL)
	{
		printf("allocation failed\n");
		exit(0);
	}
	printf("enter the data\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
	
	

}
void display()
{
	struct node *ptr;
	if(start==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->data);
	                ptr=ptr->next;
		}
	}
        
	
}
void insert_begin()
{
	struct node *temp;
	temp=((struct node*)malloc(sizeof(struct node)));
        if(temp==NULL)
        {
                printf("allocation failed\n");
                exit(0);
        }
        printf("enter the data\n");
        scanf("%d",&temp->data);
        temp->next=NULL;


	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                return;
        }
        printf("nEnter the position for the new node to be inserted:t");
        scanf("%d",&pos);
        printf("nEnter the data value of the node:t");
        scanf("%d",&temp->data) ;

        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("nPosition not found:[Handle with care]n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
void delete_begin()
{
	struct node *ptr;
	if(start==NULL)
	{
		printf("list is empty\n");

	}
	else
	{
		ptr=start;
		start=start->next;
		printf("deleted elements is %d\n",ptr->data);
		free(ptr);
	}
}
void delete_end()
{
	struct node *ptr,*temp;
        if(start==NULL)
        {
                printf("list is empty\n");

        }
        else if(start->next==NULL)
	{
		ptr=start;
		start=NULL;
		printf("deleted element is %d\n",ptr->data);
		free(ptr);
	}
	else
	
        {
                ptr=start;
                while(ptr->next!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;

                printf("deleted elements is %d\n",ptr->data);
                free(ptr);
        }

}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("nThe List is Empty:n");
                exit(0);
        }
        else
        {
                printf("nEnter the position of the node to be deleted:t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("nThe deleted element is:%dt",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++)
		       	{ 
				temp=ptr; 
			  ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("nPosition not Found:n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("nThe deleted element is:%dt",ptr->info );
                        free(ptr);
                }
        }
}

#include"header.h"
void roll_del(ST**);
void name_del(ST**);



void stud_del(ST** ptr)
	{

		if((*ptr)==NULL){
		printf("No record..\n");
		return;
		}

		unsigned char op;
		printf("delete by Roll number (R/r): \n");
		printf("delete by Name (N/n): \n");
		printf("Enter your Choice: \n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'R':
			case 'r':
			  roll_del(ptr);
			  break;

			case 'N':
			case 'n':
			  name_del(ptr);
			  break;

		        default :
			  printf("INVALID CHOICE:");
			  break;
			
		}

                           
	}	
void roll_del(ST** ptr){
	char roll[10];
	printf("Enter the RollNo to delete-> ");
	scanf("%s",roll);

	ST *temp=(*ptr);
	

	if(strcasecmp(temp->roll,roll)==0)
	{
		*ptr=temp->next;
		free(temp);
		temp=NULL;
	}

	else
	{
        ST *del;
	while(temp->next!=NULL){
		if(strcasecmp(temp->next->roll,roll)==0)
		{
			del=temp->next;
			temp->next=del->next;
			free(del);
			del=NULL;
			break;
		}
		      
		temp=temp->next;
		}}
}

void name_del(ST** ptr)
{
	char name[50];
	printf("enter the name:\n");
	scanf(" %s",name);
	ST* temp=(*ptr);
	while(temp!=NULL)
	{
		if((strcasecmp(temp->name,name))==0)
		{
			printf("roll no \t Name \t \n");
			printf(" %s %s \n",temp->roll,temp->name);
			roll_del(ptr);
			break;
		}
		temp=temp->next;
	}
}


#include"header.h"
void roll_del(ST**);
void stud_del(ST** ptr)
	{

		if((*ptr)==NULL){
		printf("No record..\n");
		return;
		}

		unsigned char op;
		printf("delete by Roll number (R/r\n");
		printf("delete by Name (N/n)\n");
		printf("enter yourchoice \n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'R':
			case 'r':
			  roll_del(ptr);
			  break;
		}

                           
	}	
void roll_del(ST **ptr){
	char roll;
	printf("Enter the RollNo to delete-> ");
	scanf("%s",&roll);

	ST *temp=(*ptr);
	if(temp==ptr)
{
	if(temp->roll==roll)
	{
		*ptr=temp->next;
		free(temp);
		temp=NULL;
	}
}

        ST *del;
	while(temp!=NULL){
		if(temp->next->roll==roll)
			del=temp->next;
		temp->next=temp->next->next;

		free(del);
		del=NULL;		
	}


}



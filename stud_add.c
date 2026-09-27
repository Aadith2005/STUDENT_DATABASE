#include "header.h"

void stud_add(ST **ptr)
{
	ST * new = (ST *) malloc(sizeof(ST));
	printf("enter the name & mark \n");
	scanf(" %[^\n] ",new->name);
	scanf("%f", &new->mark);
	
	if(((*ptr)==NULL))
	{
		new->next =(*ptr);
		(*ptr)=new;
	}
        
	else
	{

	        int n=strcmp((*ptr)->name,new->name);
		if(n>0)
		{
			new->next=(*ptr);
			(*ptr)=new;
		}
		else
		{
			ST* last=(*ptr);
		        while((last->next!=NULL))
		        {

		         	n=strcmp((last->next->name),(new->name));
				if(n<=0)
				{
					break;
				}
				else
					last=last->next;
	         	}

		        new->next = last->next;
		        last->next =new;
	         }

	ST* temp=(*ptr);

	int size = count(*ptr);
	char ch='A';
	char start[20];
	strcpy(start,temp->name);
	for(int i=0;i=size-1;i++)
	{
        char str[20];
	for(int j=1;(((start[0]==ch)||(start[0]==ch+32))&&(temp!=NULL));j++,ch++)
	{
		sprintf(str,"V25CE9 %c %d ", ch,j);
		strcpy(temp->roll,str);
		temp=temp->next;
		strcpy(start,temp->name);
	}
	}
}}

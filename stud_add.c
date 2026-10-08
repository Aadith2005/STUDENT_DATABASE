#include "header.h"

void stud_add(ST **ptr)
{
	ST * new = (ST *) malloc(sizeof(ST));
	printf("Enter The Name: \n");
	scanf(" %[^\n]",new->name);
	printf("Enter The Mark: \n");
	scanf("%f", &new->mark);
	
	if(((*ptr)==NULL))
	{
		new->next =(*ptr);
		(*ptr)=new;
		roll(ptr);
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
				if(n>=0)
				{
					break;
				}
				else
					last=last->next;
	         	}

		        new->next = last->next;
		        last->next =new;
	         }
		roll(ptr);


}}

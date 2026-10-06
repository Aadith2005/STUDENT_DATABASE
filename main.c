#include "header.h"

int main()
{

	ST *head=NULL;

	char op;
	do{
             
		printf("****STUDENT RECORD MENU****\n");
                  
		printf("A/a: Add New Record\n");
		printf("D/d: Delete a Record\n");
		printf("S/s: Show the List\n");
		printf("M/m: Modify a Record\n");
		printf("V/v: save\n");
		printf("T/t: Sort the list\n");
		printf("E/e: Exit\n");
		scanf(" %c",&op);
		switch(op)
		{
                    case 'A':
	            case 'a':
			    stud_add(&head);
			    break;
		    case 'D':
	            case 'd':
			    stud_del(&head);
			    break;
		    case 'S':
	            case 's':
			    stud_show(head);
			    break;
	            case 'M':
	            case 'm':
			    stud_mod(&head);
			    break;
	            case 'V':
	            case 'v':
			   // stud_save(head);
			    break;
	            
                    case 'T':
	            case 't':
			   // stud_sort (head);
			    break;
	            case 'E':
	            case 'e':
			    system("clear");
			    return 0;
		    default :
			    printf("invalid\n");
			    break;
		}
	}while(1);

}


int count(ST *ptr){
	int count=0;
	while(ptr!=NULL){
		count++;//count the node
		ptr=ptr->next; //move next node
	}}

void roll(ST** ptr)
{
	ST* temp=(*ptr);

        
        char ch1='\0',ch2;
        int count;
        while(temp!=NULL)
                {
			 ch2=temp->name[0];
                         if(ch1!=ch2)
			 {
				 ch1=ch2;
				 count=1;
			 }
			 else
			 {
				 count++;
			 }
			 sprintf(temp->roll,"V25CE9%c%d",ch2,count);
                         temp=temp->next;
                         
        }
}

/*void roll(ST *ptr)
{
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
}*/

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
			  //  stud_del(&head);
			    break;
		    case 'S':
	            case 's':
			    stud_show(head);
			    break;
	            case 'M':
	            case 'm':
			   // stud_mod(&head);
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
			    printf("invalid/n");
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

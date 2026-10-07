#include "header.h"

void stud_show(ST *temp)
{
    if(temp == NULL)
    {
        printf("No record\n");
        return;
    }

    printf("+------------+----------------------+----------+\n");
    printf("| %-10s | %-20s | %8s |\n", "Roll No", "Name", "Mark");
    printf("+------------+----------------------+----------+\n");

    while(temp != NULL)
    {
        printf("| %-10s | %-20s | %8.2f |\n",
               temp->roll,
               temp->name,
               temp->mark);

        temp = temp->next;
    }

    printf("+------------+----------------------+----------+\n");
}









/*#include "header.h"

void stud_show(ST *temp){
	if(temp==NULL){
		printf("No record\n");
		return;
	}

	printf("Roll No\tName\t\tmark\n");

	while(temp !=NULL){ 
		printf("%s\t%s\t%f\n",temp->roll,temp->name,temp->mark);
		temp=temp->next; 
	}
}*/

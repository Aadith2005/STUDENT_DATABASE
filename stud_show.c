#include "header.h"

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
}

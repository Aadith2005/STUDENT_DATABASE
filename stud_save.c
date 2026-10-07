#include "header.h"

void stud_save(ST *temp){

	FILE *fs=fopen("student.csv","w"); 

	fprintf(fs,"Roll No,Name,mark\n"); 

	while(temp !=NULL){ 
		fprintf(fs,"%s,%s,%f\n",temp->roll,temp->name,temp->mark); 
		temp=temp->next; 
	}
}

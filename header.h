#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
	//information
	char roll[20];
	char name[15];
	float mark;
	//link 
	struct student *next;
} ST;

void stud_add(ST **);
int count(ST *);
void stud_show(ST *);
void roll(ST **);
void stud_mod(ST** );
void roll_mod(ST**);
void name_mod(ST**);
void modify(ST* );



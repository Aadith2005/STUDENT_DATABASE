#include "header.h"

void roll(ST *ptr)
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
}
~

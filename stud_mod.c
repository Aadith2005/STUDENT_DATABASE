#include"header.h"
void stud_mod(ST** ptr)
        {

                if((*ptr)==NULL){
                printf("No record..\n");
                return;
                }

                unsigned char op;
                printf("modify by Roll number (R/r): \n");
                printf("modify by Name (N/n): \n");
                printf("Enter your choice: \n");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'R':
                        case 'r':
                          roll_mod(ptr);
                          break;

                        case 'N':
                        case 'n':
                          name_mod(ptr);
                          break;

                        default :
                          printf("INVALID CHOICE:");
                          break;
                }
        }

void roll_mod(ST** ptr){
        char roll[10];
        printf("Enter the RollNo to Modify: ");
	
        scanf("%s",roll);

        ST *temp=(*ptr);
        while(temp->next!=NULL){
                if(strcasecmp(temp->roll,roll)==0)
                {
                        modify(temp);
                        break;
                }

                temp=temp->next;
                }
}

void name_mod(ST** ptr)
{
        char name[50];
        printf("enter the name:\n");
        scanf(" %s",name);
        ST* temp=(*ptr);
        while(temp!=NULL)
        {
                if((strcasecmp(temp->name,name))==0)
                {
                        printf("roll no \t Name \t \n");
                        printf(" %s %s \n",temp->roll,temp->name);
                        roll_mod(ptr);
                        break;
                }
                temp=temp->next;
        }
}

void modify(ST* mod)
{
	char x;
	printf("change Name (N/n)\n");
	printf("change marks(M/m)\n");
        scanf(" %c",&x);
	if((x=='N')||(x=='n'))
	{
		printf("Enter the modified name\n");
		scanf("%s",mod->name);
	}
	else if((x=='M')||(x=='m'))
	{
		printf("Enter the modified mark\n");
		scanf("%f",&mod->mark);
	}
	else
		printf("INVALID\n");
}


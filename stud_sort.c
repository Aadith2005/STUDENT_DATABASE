#include "header.h"



void stud_sort(ST **ptr)
{
    if (*ptr == NULL)
    {
        printf("No records..\n");
        return;
    }

    unsigned char op;

    printf("N/n : Sort by Name\n");
    printf("P/p : Sort by Mark\n");
    printf("Enter Your Choice: ");

    scanf(" %c", &op);

    switch(op)
    {
        case 'N':
        case 'n':
            sort_name(ptr);
            break;

        case 'P':
        case 'p':
            sort_mark(ptr);
            break;

        default:
            printf("Invalid choice\n");
    }
}
void sort_name(ST **ptr)
{
    int n = count(*ptr);
    int i, j;
    ST *temp = *ptr;

    for (i = 0; i < n - 1; i++)
    {
        temp = *ptr;

        for (j = 0; j < n - i - 1; j++)
        {
            if (strcasecmp(temp->name, temp->next->name) > 0)
            {
                char roll_temp[10];
                char name_temp[50];
                float mark_temp;

                strcpy(roll_temp, temp->roll);
                strcpy(temp->roll, temp->next->roll);
                strcpy(temp->next->roll, roll_temp);

                strcpy(name_temp, temp->name);
                strcpy(temp->name, temp->next->name);
                strcpy(temp->next->name, name_temp);

                mark_temp = temp->mark;
                temp->mark = temp->next->mark;
                temp->next->mark = mark_temp;
            }

            temp = temp->next;
        }
    }

    printf("Records sorted by name\n");
}

void sort_mark(ST **ptr)
{
    int n = count(*ptr);
    int i, j;
    ST *temp;

    for (i = 0; i < n - 1; i++)
    {
        temp = *ptr;

        for (j = 0; j < n - i - 1; j++)
        {
            if (temp->mark > temp->next->mark)
            {
                char roll_temp[10];
                char name_temp[50];
                float mark_temp;

                strcpy(roll_temp, temp->roll);
                strcpy(temp->roll, temp->next->roll);
                strcpy(temp->next->roll, roll_temp);

                strcpy(name_temp, temp->name);
                strcpy(temp->name, temp->next->name);
                strcpy(temp->next->name, name_temp);

                mark_temp = temp->mark;
                temp->mark = temp->next->mark;
                temp->next->mark = mark_temp;
            }

            temp = temp->next;
        }
    }

    printf("Records sorted by mark\n");
}


#include "header.h"
#include<stdio.h>
char t_name[100];
int validation()
{
    //name validation
    int flag;
    for (int i = 0; t_name[i] != '\0'; i++) {
        if (!((t_name[i] >= 'a' && t_name[i] <= 'z')
              || (t_name[i] >= 'A'
                  && t_name[i] <= 'Z'))) {
            printf("\nPlease Enter the valid name\n");
           
            flag = 0;
            break;
        }
}
}
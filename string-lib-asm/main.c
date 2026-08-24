#include <stdio.h>
#include "Assemply.h"


int main (){

char name1[20] ;
char name2[20] = " salah";

Strncat (name1, name2, 6);

printf("%s\n", name1);



char name3[20] = "khaled";
char name4[20] ;

Strcat (name3, name4);

printf("%s\n", name3);

Strlength(name3);
printf("%d\n" ,Strlength(name3));


return 0;
}

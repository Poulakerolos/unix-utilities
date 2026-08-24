void Strcat(char * str_to , char * str_from ){



int count;
for ( count =0 ; str_to[count] != '\0' ; count ++);



for(int i = 0; str_from[i] !='\0'; i ++)
{

str_to[count + i] = str_from[i];
}
int count2;
for ( count2 =0 ; str_to[count2] != '\0' ; count2 ++);
str_to[count2] = '\0';


}


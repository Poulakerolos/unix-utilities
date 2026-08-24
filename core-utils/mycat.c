#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define count 100
int main(){
	char buf[count];
int fd =open("/media/sf_D_DRIVE/ubuntu/udemy_session8/vardiacfunc.c",O_RDONLY);
if(fd<0){
	write (3,"could not open the file \n",25);
	exit(-1);
}
int returned_char =0;
while(returned_char=read(fd,buf,count)){
write(1,buf,returned_char);
}
return 0;}

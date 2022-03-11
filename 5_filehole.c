#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
int fd1;
fd1=open("hole.txt",O_CREAT|O_RDWR|O_TRUNC,777);
write(fd1," ",4);



}

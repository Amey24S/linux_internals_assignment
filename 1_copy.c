#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd1,fd2;
	char buf[50],var[50];
	fd1 = open("hello.txt",O_RDWR,777);
	fd2 = open("write.txt",O_CREAT|O_RDWR,777);
	read(fd1,buf,50);
	printf("%s\n",buf);
	write(fd2,buf,50);
	read(fd2,var,50);
	printf("%s\n",var);

	int close(int fd1);
	int close(int fd2);

	return 0;
}

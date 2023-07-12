#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main()
{
	int fd;
	char buf[30];
	fd = open("txt.txt",O_RDONLY);
	read(fd,buf,10);
	write(1,buf,10);
	return 0;
}



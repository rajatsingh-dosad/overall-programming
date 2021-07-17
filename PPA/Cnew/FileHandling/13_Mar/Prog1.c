
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

void main() {

	char buff[512];

	int fd1 = open("source.txt",O_RDONLY);

	if(fd1==-1) {
		
		puts("Cannot open source file");
		exit(1);
	}
	
	
	int fd2 = open("target.txt",O_CREAT | O_WRONLY,0666);
	if(fd2==-1) {

		puts("Cannot open target file");
		close(fd1);
		exit(2);
	}
	

	int num = read(fd1,buff,512);
	buff[num] = '\0';

	write(fd2,buff,num);
	
}

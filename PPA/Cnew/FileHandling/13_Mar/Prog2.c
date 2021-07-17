
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

void main() {

	char buff[512];
	int num;
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
	

	while(1) {

		num = read(fd1,buff,512);
	
		if(num > 0) 
			write(fd2,buff,num);
		else 
			break;
	}
	close(fd1);
	close(fd2);
	
}

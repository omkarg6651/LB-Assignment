#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Fname[30];
	int iRet = 0;
	char Data[1024];
	
	printf("Enter file name ");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR); 
	
	if(fd==-1)
	{
		printf("Unable to open file ");
		return -1;
	}
	else
	{
		printf("File opened with fd : %d\n",fd);
	}
	
	iRet = read(fd,Data,30);
	write(1,Data,iRet);
	
	close(fd);
	
	return 0;
}
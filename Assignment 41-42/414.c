#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet = 0;
	char Fname[30];
	char Buffer[1024];
	int iSize = 0;
	
	printf("Enter file name ");
	scanf(" %s",Fname);
	
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
	
	while((iRet = read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		iSize = iSize + iRet;
	}
	
	printf("Size of file is %d",iSize);
}
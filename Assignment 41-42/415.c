#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[30];
	int fd = 0;
	char Buffer[1024];
	char String[20];
	int iRet = 0,i = 0;
	
	printf("Enter string ");
	scanf("%s",String);
	
	printf("Enter file name ");
	scanf(" %s",Fname);
	
	fd = open(Fname,O_RDWR | O_APPEND);
	
	if(fd==-1)
	{
		printf("Unable to open file ");
		return -1;
	}
	else
	{
		printf("File opened with fd : %d",fd);
	}

	write(fd,String,strlen(String));
	
	return 0;
	
}
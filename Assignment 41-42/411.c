#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Fname[30];
	
	printf("Enter file name ");
	scanf("%s",Fname);
	
	fd = creat(Fname,0777);
	
	if(fd==-1)
	{
		printf("Unable to create file ");
	}
	else
	{
		printf("File created with fd : %d",fd);
	}
	
	fd = open(Fname,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file ");
	}
	else
	{
		printf("File opened with fd : %d",fd);
	}
	
	return 0;
}
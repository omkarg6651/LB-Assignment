#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

void DisplayChar(char *,int);

int main()
{
	 
	char File[30];
	int iCount = 0;

	
	printf("Enter the file name\n");
	scanf("%s",File);
	    
	printf("Enter the count\n");
	scanf(" %d",&iCount);
	
	
	 DisplayChar(File,iCount);

	
	return 0;
}
void DisplayChar(char fName[],int iCnt)
{
	int fd = 0;
	int Arr[iCnt];
	
	
	fd =open(fName,O_RDONLY);
		
	if(fd==-1)
	{
		printf("Unable to  open file\n");
		return;
	}
	
	read(fd,Arr,iCnt);
	
	printf("Data from the file is: \n");
	write(1,Arr,iCnt);
	close(fd);
}
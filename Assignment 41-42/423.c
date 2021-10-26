#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int CountWhite(char *);

int main()
{
	char File[30];
	int iRet = 0;
	
	printf("Enter file name ");
	scanf("%s",File);
	
	iRet = CountWhite(File);
	
	printf("Count is %d",iRet);
	
	return 0;
}
int CountWhite(char Fname[])
{
	int fd = 0;
	char Buffer[10];
	int iRet = 0;
	int iCnt = 0,i = 0;
	
	fd = open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	while((iRet = read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		for(i=0;i<iRet;i++)
		{
			if(Buffer[i]==' ')
			{
				iCnt++;
			}
		}
	}
	close(fd);
	
	return iCnt;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	 
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else 
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head -> next;
	}
	printf("NULL\n");
}

int EvenSum(PNODE Head)
{
	int iAns = 0,iNo = 0, i =0;
	while(Head != NULL)
	{
		iNo = Head->data;
		{
			if(iNo % 2 == 0)
			{
				iAns = iAns +iNo;
			}
		}
		Head = Head -> next;
}
return iAns;
}


int main()
{
	PNODE first = NULL;
	int  iChoice = 1,iValue = 0, iRet = 0;
	
	while(iChoice != 0)
	{
		printf("Enter the element to insert \n");
		scanf("%d",&iValue);
		
		InsertFirst(&first,iValue);
		
		printf("Do you want to continue(1/0)\n");
		scanf(" %d",&iChoice);
	}
	printf("Element of Linked List are : \n");
	Display(first);
	
	iRet = EvenSum(first);
	printf("Addition of even numbers from the Linked list is : %d\n",iRet);
	
	
	return 0;
}
	
	
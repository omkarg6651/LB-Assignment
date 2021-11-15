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


int SecondMax(PNODE Head)
{
	int Max = Head->data;
	int sMax = Head->data;

	Head = Head->next;
	
	while(Head != NULL)
	{
		if(Head->data > Max)
		{
			sMax = Max;
			Max = Head->data;
		}
		else if((Head->data < Max) && (Head->data > sMax))
		{
			sMax = Head->data;
		}
		Head = Head->next;
	}
	return sMax;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0, iChoice = 1,iValue = 0;
	
	while(iChoice != 0)
	{
		printf("Enter the element to insert \n");
		scanf("%d",&iValue);
		
		InsertFirst(&first,iValue);
		
		printf("Do you want to continue(1/0)\n");
		scanf(" %d",&iChoice);
	}
	printf("Element of Linked List are : ");
	Display(first);
	
	iRet = SecondMax(first);
	printf("Second Maximum element from the Linked list is: %d\n",iRet);
	return 0;
}
	
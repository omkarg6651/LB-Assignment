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

void ChkPallindrome(PNODE Head)
{
	int iAns = 0,iNo = 0, iDigit =0,iTemp = 0;
	while(Head != NULL)
	{
		iAns =0;
		iNo = Head->data;
		iTemp = iNo;
		while(iNo != 0)
		{
		
			iDigit = iNo % 10;
			iAns = (iAns*10) + iDigit;
			iNo = iNo/10;
		}
		 if(iAns == iTemp)
		 {
			 printf("%d\t",iTemp);
		 }
	Head = Head -> next;
}

}


int main()
{
	PNODE first = NULL;
	int  iChoice = 1,iValue = 0;
	PNODE PerfectNo = NULL;
	
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
	
	printf("palindrome elements of singly linked list are : \n ");
	ChkPallindrome(first);
	
	
	return 0;
}
	
#include<stdio.h>
#include<assert.h>

int palindromeCheck(int);
void main()
{
	
	int oNum;
	printf("Enter any number: ");
	scanf("%d",&oNum);

	if(palindromeCheck(oNum))
		printf("\nEnter number is a Palindrome\n");
	else
		printf("\nEnter number is a not a Palindrome\n");

	assert(palindromeCheck(45654) == 1);
	assert(palindromeCheck(12321) == 1);
	assert(palindromeCheck(85251) == 1);
	
}

int palindromeCheck(int oNum)
{
	int rem,rNum = 0,num;
	num = oNum;
	
	while(num != 0)
	{
		rem  = num % 10;
		rNum = rNum + rem;
		num = num/10;
		rNum = rNum * 10;
	}
	rNum = rNum / 10;
	if(rNum == oNum)
		return 1;
	else 
		return 0;
}
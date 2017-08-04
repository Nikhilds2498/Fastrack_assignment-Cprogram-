#include<stdio.h>
#include<assert.h>

int fiboCheck(int , int , int);

void main()
{
	int a,b,c;
	
	printf("\nEnter the 3 numbers for fibonacci check: ");
	scanf("%d %d %d",&a,&b,&c);

	if(fiboCheck(a,b,c))
		printf("\nEntered numbers are part of fibonacci series\n");
	else
		printf("\nEntered numbers are not part of fibonacci series\n");

	assert(fiboCheck(1,2,3) == 1);
	assert(fiboCheck(4,5,9) == 1);
	assert(fiboCheck(13,21,34) == 1);
}

int fiboCheck(int n1 , int n2 , int n3)
{
	int a = 0, b = 1, n1flag = 0, n2flag = 0, n3flag = 0,i,temp; 	
	for(i=0;i<25;i++)
	{
		if(n1 == a || n1 == b)
			n1flag = 1;
		if(n2 == a || n2 == b)
			n2flag = 1;
		if(n3 == a || n3 == b)
			n3flag = 1;
		
		temp = a + b;
		a = b;
		b = temp;
	}
	
	if(n1flag && n2flag && n3flag)
		return 1;
	else 
		return 0;
	
}
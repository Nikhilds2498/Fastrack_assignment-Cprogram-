#include<stdio.h>
#include<assert.h>

long int computePower(int , int );
void main()
{
	int base, power;
	
	printf("Enter the base and power numbers: ");
	scanf("%d %d",&base,&power);

	printf("\n%d power %d = %ld\n",base,power,computePower(base,power));

	assert(computePower(2,5) == 32);
	assert(computePower(6,2) == 12);
	assert(computePower(10,3) == 1000);


}

long int computePower(int base, int power)
{

	long int res = 1;
	int i;
	for (i=1;i<=power;i++)
	{
		res = res * base;	
	}
		return res;
}
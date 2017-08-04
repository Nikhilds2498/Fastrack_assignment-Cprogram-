#include<stdio.h>
#include<assert.h>
int lumin(int watts,int effi);
void main()
{

assert(lumin(50,25)==1250);
assert(lumin(20,20)==400);
assert(lumin(-220,80)==-1);
assert(lumin(100,-230)==-1);
assert(lumin(-100,-100)==-1);
}
int lumin(int watts,int effi)
{
	if((watts>=0)&&(effi>=0))
	{
		int lum;
		lum=watts*effi;
		printf("Luminous flux of the lamp =%d\n",lum);
		return lum;
	}
	else
	{
	printf("Both watts and efficiency should be positive\n");
	return -1;
	}
}

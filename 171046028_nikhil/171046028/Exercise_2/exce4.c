#include<stdio.h>
#include<assert.h>
int velocity(int k);
void main()
{
	assert(velocity(0)==0);
	assert(velocity(1000)==277);
	assert(velocity(-1000)==-277);
	
}

int velocity(int k)
{
	int m;
	m=(k*1000)/3600;
	printf("%dkm/h velocity =%dm/s\n",k,m);
	return m;
	
	
}

#include <stdio.h>
#include<assert.h>
int aircraft(float speed,float decel,float dist);
int velocity(int k);
void main()
{
assert(aircraft(320,2.85,1400)==0);
assert(aircraft(320,2.85,400)==1);
assert(aircraft(320,2.85,-400)==-1);
}

int aircraft(float speed,float decel,float dist)
{
	if(dist<0)
	{
		printf("Negative distance\n");
		return-1;
	}
	float dst;
	speed=velocity(speed);
	dst=speed*speed/(2*decel);
	if(dst>dist)
		{
		printf("Crash Landing\n");
		return 1;
		}
	else
		{
		printf("Safe Landing\n");
		return 0;
		}
}
int velocity(int k)
{
	int m;
	m=(k*1000)/3600;
	printf("%dkm/h velocity =%dm/s\n",k,m);
	return m;
	
	
}
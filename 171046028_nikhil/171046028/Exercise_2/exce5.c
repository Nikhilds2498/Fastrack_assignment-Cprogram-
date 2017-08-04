#include<stdio.h>
#include<assert.h>
int collision(int distance,int carspeed,int time);
int velocity(int k);
void main()
{
	assert(collision(30,80,3)==1);
	assert(collision(200,90,3)==0);
}
int collision(int distance,int carspeed,int time)
{
	int dist,rel_dist;
	carspeed=velocity(carspeed);
	dist=(carspeed*time);
	rel_dist=distance-dist;
	if(rel_dist<0)
	{
		printf("Collision Occured!!!\n");
		return 1;
	}
	else
	{
		printf("Collision Evaded\n");
		return 0;
	}
}
int velocity(int k)
{
	int m;
	m=(k*1000)/3600;
	//printf("%dkm/h velocity =%dm/s\n",k,m);
	return m;
	
}

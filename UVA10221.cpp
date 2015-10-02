#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

// 60 min = 1 deg
int main()
{
	double s = 0;
	double a = 0;
	double pi = acos(-1.0);
	char str[5] = {0};
	double ans1,ans2;
	
	while(~scanf("%lf %lf %s",&s,&a,str))
	{
		//printf("%d %d %s\n",s,a,str);
		if(!strcmp(str,"min"))
		{
			a/=60;
		}
		if(a>180)
		{a = 360 - a;}
		s+= 6440;
		ans1 = 2 * pi * s* (a / 360);
		//ans2 = sqrt(s*s + s*s - 2*s*s*cos(a/180 * pi));
		ans2 = 2 *s* sin((a/180*pi)/2);
		printf("%6f %6f\n",ans1,ans2);
	}

	return 0;
}
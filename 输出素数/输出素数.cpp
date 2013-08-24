// 输出素数.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main()
{
	int i,q,r;
	i=100;
	q=2;
s1:{i=i;q=q;}
s2:r=i%q;
	if(r==0)
	{
		printf("%d不是素数\n",i);
	    i=i+1;
	    q=2;
		if(i<=200)
		goto s1;
	}
	else
	{
		q=q+1;
		if(q==i)
		{
			printf("%d是素数\n",i);
			i=i+1;
			q=2;
			if(i<=200)
			goto s1;
		}
	    else
			goto s2;

	
	}
}
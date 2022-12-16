#include<stdio.h>
int ispoweroftwo(int N)
{
	int tempN,result;
	
	tempN=N;
	result=1;
    
	while(tempN!=1)
	{
		if(tempN%2!=0)
		{
			result=0;
			break;
		}
		tempN=tempN/2;
	}
	return result;
}


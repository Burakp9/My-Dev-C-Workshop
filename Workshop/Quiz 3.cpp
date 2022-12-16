#include <stdio.h>
#define SIZE 8
int main (void)
{
int value[SIZE] = { 3 };
int k, m;
for ( m = 0; m < SIZE; ++m )
for ( k = 0; k < m ; ++k )
value[m] += value[k];
for ( m = 0; m < SIZE; ++m )
printf ("output%d=%d\n",m+1, value[m]);
return 0;
} 


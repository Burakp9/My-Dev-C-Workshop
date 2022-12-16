#include <stdio.h>
int main()
{
int value=3;
do
{
 switch (value)
{
case 3:
 printf("value=%d\n",value--);
 printf("value=%d\n",value);
case 4:
 printf("value=%d\n",value *= 2);
  printf("value=%d\n",value);
 break;
case 6:
 printf("value=6\n");
  printf("value=%d\n",value);
case 8:
 printf("value=%d\n",--value);
  printf("value=%d\n",value);
case 11:
 value = value + 5;
  printf("value=%d\n",value);
 break;
default:
 value++;
  printf("value=%d\n",value);
 printf("value=%d\n",value / 2);
  printf("value=%d\n",value);
}
} while (value<=12);
return 0;
} 

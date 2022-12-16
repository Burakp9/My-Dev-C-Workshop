#include <stdio.h>
#include <stdlib.h>
#include<time.h>
struct listnode{//define self referantial structure and pointers
	int number;
	struct listnode *afterPtr;
	struct listnode *prevPtr;
	}list,*checkPtr,*nextPtr,*newPtr,*prePtr,*listPtr,*tempPtr,*temp2Ptr,*curPtr,*sortedPtr;
int main(int argc, char *argv[]) {
	int rnumber,i,*temp;//define variables
	srand(time(NULL));
	nextPtr= malloc(sizeof(list));//memory allocations
	listPtr= malloc(sizeof(list));
	sortedPtr= malloc(sizeof(list));
	checkPtr=listPtr;
	for(i=0;i<=19;i++){//create randomly initialized linked list of numbers.
		rnumber=1+rand()%99;
		newPtr= malloc(sizeof(list));
		newPtr->number=rnumber;
		newPtr->afterPtr=NULL;
		if(i==0){
			listPtr->number=newPtr->number;
			listPtr->afterPtr=NULL;
			tempPtr=listPtr;
			nextPtr=tempPtr;
		}
		else{
			tempPtr->afterPtr=newPtr;
			tempPtr=newPtr;
		}
	}
	prePtr=listPtr;
	int sum=0;
	printf("Randomly inserted list: ");//print linked list
	for(i=0;i<=19;i++){
	printf("%2d ",prePtr->number);
	sum=sum+prePtr->number;
	prePtr=prePtr->afterPtr;
	}
	int count=1,checkno=0,tempnumber,loop=0;//variables that will used for sort the list
	while(count!=0){//loop for sorting
		count=0;
		for(i=0;i<=17;i++){
			if(i==0){
				sortedPtr=listPtr;
				prePtr=sortedPtr;
				curPtr=prePtr->afterPtr;
				nextPtr=curPtr->afterPtr;
				tempPtr=sortedPtr;
				if(prePtr->number > curPtr->number){
					tempnumber=curPtr->number;
					curPtr->number=prePtr->number;
					prePtr->number=tempnumber;
				}
				if(curPtr->number > nextPtr->number){
					tempnumber=curPtr->number;
					curPtr->number=nextPtr->number;
					nextPtr->number=tempnumber;
					count++;
				}
			}
			else{
				prePtr=curPtr;
				curPtr=nextPtr;
				nextPtr=curPtr->afterPtr;
				if(curPtr->number > nextPtr->number){
					tempnumber=curPtr->number;
					curPtr->number=nextPtr->number;
					nextPtr->number=tempnumber;
					count++;
				}		
			}
		}
	}
	printf("\nList in an order : ");//show list in an order(smaller to bigger)
	for(i=0;i<=19;i++){
		printf("%2d ",tempPtr->number);
		tempPtr=tempPtr->afterPtr;
	}
	printf("\nSum: %d \nAverage: %f ",sum,(float)sum/20);//print sum and average of the numbers
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
struct listnode{
       int number;
       struct listnode *afterPtr;
       struct listnode *prevPtr;
       }list,*checkPtr,*nextPtr,*newPtr,*prePtr,*listPtr,*tempPtr,*temp2Ptr,*curPtr,*sortedPtr;
int main(int argc, char *argv[]) {
	int rnumber,i,*temp;
	srand(time(NULL));
	nextPtr= malloc(sizeof(list));
	listPtr= malloc(sizeof(list));
	sortedPtr= malloc(sizeof(list));
	checkPtr=listPtr;
	for(i=0;i<=19;i++){
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
	printf("Randomly inserted list: ");
for(i=0;i<=19;i++){
	printf("%2d ",prePtr->number);
	sum=sum+prePtr->number;
	prePtr=prePtr->afterPtr;
}
int count=1,checkno=0,tempnumber,loop=0;
while(count!=0){
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
	loop++;
}
listPtr=tempPtr;
printf("\nList in an order      : ");
for(i=0;i<=19;i++){
	printf("%2d ",tempPtr->number);
	tempPtr=tempPtr->afterPtr;
}
count=1,checkno=0,tempnumber;
int deletenumber,printnumber=19;
printf("\nEnter a number to delete: ");
scanf("%d",&deletenumber);
	sortedPtr=listPtr;
	for(i=0;i<=19;i++){
		if(i==0){
			if(sortedPtr->number==deletenumber){
				sortedPtr=sortedPtr->afterPtr;
				printnumber=18;
				printf("New list is:\n");
				break;
			}
			prePtr=sortedPtr;
			}
		else if(i>0&&i<19){
			curPtr=prePtr->afterPtr;
			nextPtr=curPtr->afterPtr;
			if(curPtr->number==deletenumber){
				prePtr->afterPtr=nextPtr;
				printnumber=18;
				printf("New list is:\n");//print the new list
				break;//if condition is true leave the loop
			}
		}
			else if(i==19){//condition if the last member of linked list is the number that entered to delete.
				if(nextPtr->number==deletenumber){
					free(curPtr);
					printnumber=18;
					printf("New list is:\n");//print the new list
					break;//if condition is true leave the loop
				}
				else if(nextPtr->number!=deletenumber){
					printf("The number you entered can not be found in the list! \nNothing changed.\nList is: ");
					printnumber=19;
					break;
				}
			}
			if(i!=0){
			prePtr=prePtr->afterPtr;
			}
	}
		for(i=0;i<=printnumber;i++){
			printf("%2d ",sortedPtr->number);
			sortedPtr=sortedPtr->afterPtr;
		}
	return 0;

}

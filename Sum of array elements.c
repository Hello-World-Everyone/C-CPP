#include<stdio.h>
int main()
{ int userinput;
	printf("Input the number of elements to be stored in the array");
    scanf("%d",&userinput);	
    int arr[userinput];
    for(;;)
    {
    	printf("Enter a number in element ");
    	scanf("%d",&arr[userinput]);
    }
}
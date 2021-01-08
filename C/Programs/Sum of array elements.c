#include<stdio.h>
int main()
{ int userinput,sum = 0;
    printf("Input the number of elements to be stored in the array  ");
    scanf("%d",&userinput); 
    int arr[userinput];
   
    for(int i = 0;i<userinput;i++)
    {
        printf("Enter a number in element ");
        scanf("%d",&arr[userinput]);
    }
  
    for(int i = 0;i<userinput;i++)
    { 
        sum += arr[userinput];
    }
    printf("The answer is %d",sum);
    getchar();
    getchar();
}
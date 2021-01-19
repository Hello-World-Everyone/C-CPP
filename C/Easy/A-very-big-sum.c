#include"stdio.h"
int main()
{ int long userinput;
    int long sum = 0;

   scanf("%ld",&userinput);

   long int arr[userinput];
   
   for(int i = 0; i<userinput;i++)
   {
     scanf("%ld",&arr[userinput]);
     sum = sum+arr[userinput];
   }
   printf("%ld",sum);
   getchar();
   getchar();
}
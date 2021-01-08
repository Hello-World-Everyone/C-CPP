#include<stdio.h>
int main()
{    int userinput,rows,column;
	printf("Enter a number of rows for stair case\n");
	printf("------------------------------------");
    scanf("%d",&userinput);
    for(column= 1;column<userinput ;column++)
    {
      for(rows= 0;rows < userinput;rows ++)
      {
      	if(rows > userinput - column)
      	{
          printf("#");
      	}
      	else
      	{
           printf(" ");
      	}
      	
      }
      printf("\n");
    }
    getchar();
    getchar();
}
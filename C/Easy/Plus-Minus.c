#include<stdio.h>
int main()
{ int  userinput = 0,element = 0;
	float p = 0,n=0,z=0;

	scanf("%d",&userinput);
	float  arr[userinput];
	for(int i = 0;i<userinput;i++)
	{
		scanf("%f",&arr[element]);
		if(arr[element]>0)
        p++;
    else if(arr[element]<0)
    	n++;
    else
    	z++;
	}
	printf("%f\n%f\n%f",p/userinput,n/userinput,z/userinput);

}
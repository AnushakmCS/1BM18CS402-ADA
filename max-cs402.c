#include<stdio.h>
int main()
{
	int array[100],max,size,loc,i;
	printf("enter the number of elements in array");
	scanf("%d",&size);
	printf("enter %d integers\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	max=array[0];
	for(i=1;i<size;i++)
	{
		if(array[i] > max)
		{
			max=array[i];
			loc=i+1;
		}
	}
	printf("maximum element present at location %d and its value is %d \n",loc,max);
	return 0;
}	
	

#include<stdio.h>

void bubble(int arr[],int n)
{

int temp,i,j;
for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
		{
		if(arr[j]>arr[j+1])
			{
			temp=arr[j];	
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}

		}

	}
printf("\nSort Array:\n");
for(i=0;i<n;i++)
{
printf("\n");
printf("%d",arr[i]);
}
}

void printMax(int arr[],int n,int k)
{
int i;
printf("\nMAX element are:\n");
for(i=n-1;i>=n-k;i--)
{
printf("%d",arr[i]);
printf("\n");
}
}

int main()
{
int n,k,i;
int arr[10];
printf("\nenter the number of elements to insert into the array:\n");
scanf("%d",&n);
printf("\nenter the elements of the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nenter the number of max elements:\n");
scanf("%d",&k);
bubble(arr,n);
printMax(arr,n,k);

return 0;
}
/* 
ENTER THE NUMBER OF ELEMENTS TO INSERT INTO THE ARRAY:
5

ENTER THE ELEMENTS OF THE ARRAY:
2
-1
3
5
7

ENTER THE NUMBER OF MAX ELEMENTS:
4

SORTED ARRAY:

-1
2
3
5
7
MAXIMUM ELEMETS ARE:
7
5
3
2

*/

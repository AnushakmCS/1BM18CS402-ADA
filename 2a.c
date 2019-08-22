#include<stdio.h>
int main()
{
	 int i,j,temp,min,n,k,a[10];
	printf("enter the number of elemnts");
	scanf("%d",&n);

		printf("enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the k");
	scanf("%d",&k);
	for(i=0;i<=k;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("the smallest elemt is %d",a[k-1]);
}
	
	/* enter the number of elemnts4
enter the element1
2
3
4
enter the k3
the smallest elemt is 3 */




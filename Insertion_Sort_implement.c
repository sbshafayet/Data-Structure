#include <stdio.h>
#define MAX 20

void insertion(int arr[],int n)
{ 
	int j,k,i;
	/*Insertion sort*/
	for(j=1;j<n;j++)
	{	
		k=arr[j]; /*k is to be inserted at proper place*/
		for(i=j-1;i>=0 && k<arr[i];i--)
		{	
			arr[i+1]=arr[i];
		}
		arr[i+1]=k;
	}
}

int main()
{
	int arr[MAX],i,n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d", &arr[i]);
	}

	printf("Unsorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	insertion(arr,n);
	
	printf("Sorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	return 0;
}/*End of main()*/

/*

In-place merge two sorted arrays.
Given two sorted arrays, X[ ] and Y[ ] of size m and n each, merge elements of X[ ] with elements of array Y[ ] by maintaining the sorted order, i.e., fill X[ ] with the first m smallest elements and fill Y[ ] with remaining elements.
For example,
Input:
 
X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }
 
Output:
X[] = { 1, 2, 3, 4, 7 }
Y[] = { 8, 9, 10 }


*/

#include<stdio.h>

int main()
{
	int m, n, i, t;

	printf("Enter number of elements of array X: \n");
	scanf("%d",&m);

	printf("Enter number of elements of array Y: \n");
	scanf("%d",&n);

	int x[m], y[n];

	printf("Enter elements of array X: \n");
	for(i=0; i<m; i++)
	{
		scanf("%d",&x[i]);
	}

	printf("Enter elements of array Y: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&y[i]);
	}

	t=m+n;
	int arr[t],j=0,k, temp=0;

	for(i=0; i<m; i++)
	{
		arr[i]=x[i];
	}

	for(i=m; i<t; i++)
	{
		arr[i]=y[j];
		j++;
	}

	for(i=0; i<t; i++)
	{
		for(k=i;k<t;k++)
		{
			if(arr[i] > arr[k])
			{
				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}

	printf("Elements of array X after Sorting\n");
	for(i=0; i<m; i++)
	{
		x[i] = arr[i];
		printf("%d ",x[i]);
	}
	printf("\n");

	j=0;
	printf("Elements of array Y after Sorting\n");
	for(i=m; i<t; i++)
	{
		y[j] = arr[i];
		printf("%d ",y[j]);
	}
	printf("\n");

	return 0;
}

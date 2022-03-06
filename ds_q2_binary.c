/*

Generate binary numbers between 1 to `n` using a queue.
Given a positive number n, efficiently generate binary numbers between 1 and n using the queue data structure in linear time.

For example, for n = 16, the binary numbers are:
Input :
1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000

Output:
1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000


*/

#include<stdio.h>

int enqueue(char [], int *, int *, char, int);
void display(char [], int *, int *);

int main()
{
	int n, i, j, front=0, rear=0, temp=0;
	char b='0';
	
	printf("Enter the number to generate binary: \n");
	scanf("%d", &n);

	int l = n*5;
	printf("length: %d\n",l);

	char queue[l+1];

	for(i=1; i<=n; ++i)
	{
		//printf("Value of i in for i:%d n:%d l=%d\n",i,n,l);
		temp = i;
		while(temp>0)
		{
			b = (temp%2) + '0';
			//printf("Value in binary b:%c temp=%d\n",b,temp);
			enqueue(queue, &front, &rear, b, l);
			temp = temp/2;
			//printf("After dividing value of temp is: %d\n",temp);
		}
		enqueue(queue, &front, &rear, ' ' , l);
	}

	printf("Binary numbers in queue are \n");
	display(queue, &front, &rear); 

	return 0;
}

int enqueue(char s[], int *f, int *r, char x, int n)
{
	if(*r >= n)
	{
		printf("Stack overflow\n");
		return 0;
	}
	else
	{
		*r = *r + 1;
		printf("*r=%d\n",*r);

		s[*r] = x;

		if(*f == 0)
		{
			*f = *f+1;
			printf("*f=%d\n",*f);
		}

		return 1;
	}
}

void display(char s[], int *f, int *r)
{
	int i;

	for(i=*f; i<=*r; i++)
	{
		printf("%c\n",s[i]);
	}
}

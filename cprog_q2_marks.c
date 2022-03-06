/*

Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).

*/


#include <stdio.h>

int calculate_total(int, int, int);
float calculate_percentage(int);

int main()
{
	int eng, maths, science, i, total=0; 
	float percentage=0;

	printf("Enter marks of eng, maths and science out of 100: \n");
	scanf("%d",&eng);
	scanf("%d",&maths);
	scanf("%d",&science);
	
	total=calculate_total(eng, maths, science);
	percentage=calculate_percentage(total);

	printf("Total marks in 3 subjects are: %d\n",total);
	printf("Percentage obtained: %0.2f %%\n",percentage);

	return 0;
}

int calculate_total(int e, int m, int s)
{
	return e+m+s;
}

float calculate_percentage(int t)
{
	float p;
	p = (float)t/3;
	return p;
}

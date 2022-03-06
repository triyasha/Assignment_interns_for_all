/*

Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.


*/

#include<iostream>

using namespace std;

class employee
{
	public:
		int salary_dollar, work_hr;

		void getInfo()
		{
			cout << "Enter the salary in $ "<< endl;
			cin >> salary_dollar;
			cout << "Enter the working hrs per day "<< endl;
			cin >> work_hr;
		}

		void AddSal()
		{
			if(salary_dollar < 500)
			{
				salary_dollar = salary_dollar+10;
			}
		}

		void AddWork()
		{
			if(work_hr > 6)
			{
				salary_dollar = salary_dollar+5;
			}
		}

		void final_salary()
		{
			cout<< "Final Salary of employee: "<< salary_dollar << endl;
		}
};

int main()
{
	employee a;

	a.getInfo();
	
	a.AddSal();
	a.AddWork();

	a.final_salary();

	return 0;
}

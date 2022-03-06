/*

Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of Rs. 50. Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.


*/

#include<iostream>

using namespace std;

class AddAmount
{
	public:
    		int amount = 50;
    
    		AddAmount()
    		{
        			amount+=0;    
        			cout<<"\nConstructor 1 : "<<amount;
    		}
    		AddAmount(int amt)
    		{
        			amount+=amt;
        			cout<<"\nContructore 2 : "<<amount;
    		}
};

int main()
{
    int n;
    cin>>n;
    AddAmount ad, ad1(n);
}

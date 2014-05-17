#include<iostream>

using namespace std ;

unsigned long int d,s,l,c ;

int CalcD(int n)
{
	if (n == 1)
	{
		return s ;
	}
	else
	{
		return (CalcD(n-1)*(1+c) ) ;
	}
} 
int main()
{
	int t ;
	cout<<"First  enter the number of test cases \n" ;
	cin >> t ;
	for(int i = 1;i <= t; i++)
	{
		cout<<"Now enter the required no. of likes L \n" ;
		cin >> l ;
		cout<<"PLease enter the no. of days D\n" ;
		cin >> d ;
		cout <<"Now enter the number of likes at the begining of day 1 \n" ;
		cin >> s ;
		cout<<"Now enter the value of the constant C \n" ;
		cin >> c ;
		if(CalcD(d) < l)
		{
			cout<<"DEAD AND ROTTING"<<endl ;
		}
		else
		{
			cout<<"ALIVE AND KICKING \n" ;  
		}
	}
}

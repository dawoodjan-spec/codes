#include<iostream>
using namespace std;

bool isPrime(int n, int i = 2)
{
    if (n <= 2)
        return (n == 2) ? '1' : '0';
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;

   	return isPrime(n, i + 1);
}

int main()
{
    int n;
    cout<<"Enter a number\t";
    cin>>n;
    
    if(n>0 && n<1000){
    	if (isPrime(n))
        cout << "Yes";
    else
        cout << "No";
		}
	else cout<<"Please enter a number between 1-1000";
    return 0;
}

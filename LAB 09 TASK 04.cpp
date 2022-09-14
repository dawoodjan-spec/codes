#include<iostream>
#include<cmath>
using namespace std;

int add(int);

int main(){
	int num; float result;
	cout<<"	Input the value for nth term:\t\a";
	cin>>num;
	
		result= 1+(1/pow(num,num));
		cout<<result;
	}
int add(int num) {
    if(num != 0)
        return num + add(num - 1);
    return 0;
}

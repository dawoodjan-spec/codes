#include<iostream>
using namespace std;
bool isEligible(int a);
int main(){
	int age;
	cout<<"Enter your age ";
	cin>>age;
	//isEligible(age);
	if (isEligible(age)==1){
		cout<<"You are Eligible to vote";
	}
	else cout<<"You are ineligible";
}

 bool isEligible(int a){
	if (a>=18){
		return 0;
	}
	else 
	{
	return 1;
}}

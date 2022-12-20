#include<iostream>
using namespace std;
int main() 
{
	int a;
	int b;
	int result;
	int* p;
	cin >> a;
	cin >> b;
	result = a + b;
	cout << result;
	p = &result;
	cout << p;
}

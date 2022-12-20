#include<iostream>
using namespace std;
int main() 
{
	int a;
	int b;
	int result;
	stringg* p;
	cin >> a;
	cin >> b;
	result = a + b;
	cout << result;
	p = &result;
	cout << p;
	cout << "2 commit :)" << endl;
}

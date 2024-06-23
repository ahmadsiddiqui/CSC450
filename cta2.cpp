#include <iostream>
#include <string>

using namespace std;

int main(){
	//loop the whole thing three times
	for (int i = 0; i < 3; ++i)
	{
		string a,b;
		//prompt for two strings
		cout << "Enter two strings, hit enter key after each string:" <<endl;
		cin >> a;
		cin >> b;

		//concatenate the strings
		cout << a + b <<endl<<endl;
	}
	
}


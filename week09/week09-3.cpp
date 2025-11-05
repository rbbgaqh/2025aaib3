///week09-3.cpp
///solt106_advance_004
#include <iostream>
using namespace std;

int main()
{
	char c;
	while(cin >> c){
		if(isupper(c)) c=tolower(c);
		else if (islower(c)) c=toupper(c);
		cout << c;
	}
	cout << "\n";
}

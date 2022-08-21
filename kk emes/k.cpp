#include <iostream>
#include <string>
using namespace std;
int main() {
	string mystr;
cout << "Hello, What is your name? " << endl;
 getline (cin, mystr);
 cout << "Hello" << mystr <<   endl;
 cout << "How old are you? " << mystr <<  endl;
 getline (cin,mystr);
 cout << "Oh good, bye bye! " << endl;
	return 0;
} 
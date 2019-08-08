//https://github.com/Boried/summer-research.git
#include <iostream>
#include <string>
using namespace std;
int main() {
	string str("Test string");
	for (string::iterator it = str.begin(); it < str.end(); ++it) cout << *it; cout << endl;
	const char* x = str.c_str(); for (int i = 0; i < str.length(); i++) cout << x[i];
	return 0;
}
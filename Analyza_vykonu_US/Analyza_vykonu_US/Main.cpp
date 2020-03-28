//#include <iostream>
#include "ArrayList.h"

using namespace std;

int main() {
	string  text[] = { "Apple", "Lucka", "Mirko", "Katka" };
	ArrayList<string> a;
	string s = "jablko";
	a.add(s);
	a.show();
	return 0;
}
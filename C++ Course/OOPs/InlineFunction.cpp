#include <iostream>
using namespace std;

inline int cube(int s)
{
	return s*s*s;
}

int main()
{
	cout << "The cube of 3 is: " << cube(4) << "\n";
	return 0;
} 

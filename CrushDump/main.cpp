
#include <iostream>
#include "CCrashDump.h"
using namespace std;
CCrashDump Dump;
int main()
{
	
	cout << "Hello World \n" << endl;

	Dump.Crash();

	return 0;
}
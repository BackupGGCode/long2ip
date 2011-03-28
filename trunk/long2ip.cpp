#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main(int argc,char *argv[])
{
	int oct1, oct2, oct3, oct4;
	unsigned int addr;
	string nlopt = "";
	if (argc == 2)
		nlopt = argv[1];
	try 
	{
		cin >> addr;

		oct4 = addr & 0xFF;
		oct3 = ( addr >> 8 ) & 0xFF;
		oct2 = ( addr >> 16 ) & 0xFF;
		oct1 = ( addr >> 24 ) & 0xFF;
		cout << oct1 << "." << oct2 << "." << oct3 << "." << oct4;
		if (argc == 2 && nlopt == "-n")
			cout << endl;
	} catch (exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}

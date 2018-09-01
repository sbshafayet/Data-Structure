#include <iostream>
using namespace std;

namespace CSE
{
	void printDepartment()
	{
		cout << "CSE" << endl;
	}
}

namespace EEE
{
	void printDepartment()
	{
		cout << "EEE" << endl;
	}
}

void printDepartment()
{
	cout << "IPE" << endl;
}

using namespace CSE;
using namespace EEE;

int main()
{
	CSE::printDepartment(); /* CSE */
	EEE::printDepartment(); /* EEE */

	return 0;
}

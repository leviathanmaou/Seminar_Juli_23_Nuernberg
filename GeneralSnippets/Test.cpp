// C // C++

// C ist in C++ komplett (99%) enthalten

#include <vector>

void test2()
{
	// C++: Stack
	std::vector<int*> vec; // new / deletes / Destruktor

	// C++: Dynamisch:  new und delete
	 
	// Java: Stack
	//std::vector<int> vec = new std::vector<int>();

}


void test()
{
	int n = 0;

	// Pointer
	int* ip;

	ip = &n;

	// a) 
	n = 123;

	// b)
	*ip = 123;
	ip++;     // Adresse wird erhöht // Zeigerarithmetik

	// Referenz
	int& ri = n;   // ri ist ein Alias // Stellvertretername

	ri = 456;
	ri++;     // Wert von n wird erhöht // 457 
	          // Bei Referenzen ist Zeigerarithmetik nicht vorhanden
}
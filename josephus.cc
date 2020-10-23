#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <iterator>
#include "josephus.h"

/*
 * Weizheng Jiang
 * z1861817
 *
 * I certify that this is my own work and where appropriate an extension
 * of the starter code provided for the assignment.
*/




using namespace std;

int main()
{
	//initialize the cnt to 1
	unsigned cnt = 1;
	//print out the header
	cout << "\nNumber of people? 41";
	cout << "\nIndex for elimination? 3";
	cout << "\nIndex for printing? 7\n";

	//create a list container
	list <string> L;
	//initialize the struct data
	args in;
	in.N = 41;
	in.M = 3;
	in.K = 7;
	//call the init_vals function to store the information
	init_vals(L,in);

	print_list(L,cnt);

	//initialize the positions of the person
	auto i = 0;
	//get the Mth person's position
	auto j = i + (in.M - 1) % L.size();

	while(L.size() > 1)
	{
		//use the advance so that we can use the erase method
		auto p = L.begin();
		advance(p,j);
		//erase the Mth person
		L.erase(p);

		 j = j + (in.M - 1);
		 j %= L.size();

		if((cnt % in.K == 0 && cnt != 0) || L.size() == 1)
		       print_list(L,cnt);

	cnt++;
	}	

	return 0;
}

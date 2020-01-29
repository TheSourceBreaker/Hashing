#include<iostream>
#include<vector>
#include<string>
#include"Hashing.h"
#include"Hash.h"
#include"tHashmap.h"
using std::cout;
using std::cin;
using std::endl;
using std::vector;



int main()
{
	Hashing h;

	/*unsigned char name[] = { "Jahvier" };
	unsigned int ok;
	unsigned char yeah;
	size_t yup;

	ok = h.basicHash(name, 8);
	ok = hash<int>(8);
	yeah = hash<char>('H');
	yup = hash<string>("Jahvier");

	ok = ok / 2654435761 % std::numeric_limits<size_t>::max();

	cout << ok << endl;
	cout << yeah << endl;
	cout << yup << endl;*/

	tHashmap<string, int> favoriteNumbersByName;
	favoriteNumbersByName["Terry"] = 5;

	cout << favoriteNumbersByName["Terry"] << endl; // 5


	while (true)
	{

	}
	return 0;
}
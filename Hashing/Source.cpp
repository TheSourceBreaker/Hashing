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

	unsigned char name[] = { "Jahvier" };
	unsigned int ok, test;
	unsigned char yeah;
	size_t yup;

	ok = h.basicHash(name, 8);

	test = hash<int>(8);
	yeah = hash<char>('H');
	yup = hash<std::string>("Jahvier");

	cout << ok << endl;
	cout << yeah << endl;
	cout << yup << endl;

	tHashmap<std::string, int> favoriteNumbersByName;// = new tHashmap<std::string, int>();
	favoriteNumbersByName["Terry"] = 675;

	cout << favoriteNumbersByName["Terry"] << endl; // 5

	tHashmap<std::string, int> copyHashMap(favoriteNumbersByName);

	cout << copyHashMap["Terry"] << endl; // 5

	tHashmap<std::string, int> extraTest;

	extraTest = favoriteNumbersByName;

	cout << extraTest["Terry"] << endl; // 5



	//------------------------------------

	while (true){}
	return 0;
}
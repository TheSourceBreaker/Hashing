#include "Hashing.h"



Hashing::Hashing()
{
}


Hashing::~Hashing()
{
}

unsigned int Hashing::basicHash(unsigned char* data, unsigned int size)
{ 
	unsigned int hash = 0; 
	for (unsigned int i = 0; i < size; ++i)
	{ 
		hash += data[i]; 
	}
	return hash; 
}
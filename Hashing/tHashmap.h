#pragma once
#include<list>

template<typename K, typename V>
class tHashmap
{
private:
	V * data;                       // buffer holding all potential pairs in the hashmap
	size_t dataCapacity;            // size of the above buffers
public:
	tHashmap();                     // constructs the hashmap with a specific size
	tHashmap(size_t size);			
	~tHashmap();                    // cleans-up any underlying data
	V& operator[] (const K& key);   // returns the object at the given key
	tHashmap(const tHashmap& other);		//copy constructor
	tHashmap& operator=(const tHashmap& rhs); //copy assignment
};

template<typename K, typename V>
inline tHashmap<K, V>::tHashmap()
{
	dataCapacity = 5; 
	data = new V[dataCapacity]; //create an array with a template that changes it's data type dynamically (V). 
}

template<typename K, typename V>
inline tHashmap<K, V>::tHashmap(size_t size) //create another constructor for custom user input on its size.
{
	dataCapacity = size;
	data = new V[dataCapacity];
}

template<typename K, typename V>
inline tHashmap<K, V>::~tHashmap() //the new and delete rule
{
	delete[] data;
}

template<typename K, typename V>
inline V & tHashmap<K, V>::operator[](const K & key)
{
	auto index = hash(key) % dataCapacity; //go through the key/random-number-pile thats been modded with it's data capacity 
	return data[index];
}

template<typename K, typename V>
inline tHashmap<K, V>::tHashmap(const tHashmap & other)
{
	dataCapacity = 5;

	data = new V[dataCapacity];

	dataCapacity = other.dataCapacity; //copy the other map's data and give it to the new one.

	for (int i = 0; i < dataCapacity; i++)
	{
		data[i] = other.data[i];
	}
}

template<typename K, typename V>
inline tHashmap<K, V> & tHashmap<K, V>::operator=(const tHashmap & rhs)
{
	delete[] data;

	dataCapacity = 5;
	
	data = new V[dataCapacity];

	dataCapacity = rhs.dataCapacity;
	
	for (int i = 0; i < dataCapacity; i++)
	{
		data[i] = rhs.data[i];
	}

	return *this;
}
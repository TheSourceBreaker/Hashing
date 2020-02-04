#pragma once
#include<limits>
#include<string>
#include<cstring>
using std::string;

template<typename T>
size_t hash(const T& val)
{
	return(int)val * 2654435761 % std::numeric_limits<size_t>::max();
}

//template<typename T>
//size_t hash<T>(const T& val)
//{
//	return(int)val * 2654435761 % std::numeric_limits<size_t>::max();
//}

template<>
size_t hash<int>(const int& val)
{
	return val * 2654435761 % std::numeric_limits<size_t>::max();
}

template<>
size_t hash<char>(const char& val)
{
	return(int)val * 2654435761 % std::numeric_limits<size_t>::max();
}

template<>
size_t hash<string>(const string& val)
{
	size_t hash = 0;
	for (size_t i = 0; i < 8; i++)
	{
		hash += val[i];
	}
	return hash * 2654435761 % std::numeric_limits<size_t>::max();
}

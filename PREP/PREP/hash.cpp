#include <string>
#include <cstdlib>
#include <iostream>
#include "hash.h"

hash::hash()
{
	tSize = 100; 
}

int hash::Hash(std::string key) {

	int hash = 0;
	int index; 

	for (int i = 0; i < key.length(); i++)
	{
		hash += (int)key[i]; 
	}

	index = hash % tSize; // hash function

	return index; 
}


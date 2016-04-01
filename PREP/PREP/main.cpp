#include <string>
#include <cstdlib>
#include <iostream>

#include "hash.h"

int main()
{
	int index;

	hash hOb; 

	index = hOb.Hash("Paula"); 

	std::cout << "index = " << index << std::endl; 

	return 0; 
}
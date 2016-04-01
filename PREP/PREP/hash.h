
#include <string>
#include <cstdlib>
#include <iostream>

#pragma once

class hash {

	public:
		hash();
		int Hash(std::string key); //change to key to integer to determine array index

	private:
		int tSize; // size of hash table

};



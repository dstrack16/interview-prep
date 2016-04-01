#include <iostream>
#include <string>

std::string isPrime(int);

int main()
{
	int n;
	std::cout << "is it Prime? ";
	std::cin >> n;

	std::cout << isPrime(n) << std::endl;

	return 0;

}


// Efficiency is O(n)

std::string isPrime(int num)
{
	if (num == 1) { return false;  } // 1 (and 2) are not prime numbers

	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			return "Not prime";
		}
	}

	return "Prime"; 
}
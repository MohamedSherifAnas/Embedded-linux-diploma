// C++ program to check if a given
// character is vowel or consonant.
#include <iostream>


// Function to check whether a
// character is vowel or not
void vowelOrConsonant(char x)
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
		|| x == 'u' || x == 'A' || x == 'E' || x == 'I'
		|| x == 'O' || x == 'U')
		std::cout << "Vowel" << std::endl;
	else
		std::cout << "Consonant" << std::endl;
}

// Driver code
int main()
{
    char letter;
    std::cout<<"pleasr enter a Letter"<<std::endl;
    std::cin>>letter;

	vowelOrConsonant(letter);
	return 0;
}

#include <string>
#include <iostream>
int main()
{
	int side;
	std::cout << "Hello User," << "\n Type the size of the height and width of the square \n";
	std::cin >> side;
	if(side >0)
	for (int i = side; i > 0, i--;)
	{
		std::cout << "_ ";
	}
	for (int i = side - 2; i > 0, i--;)
	{
			std::cout << "\n|";
			for (int j = side - 2; j > 0, j--;)
				std::cout << "  ";
					for (int h =1; h > 0, h--;)
						std::cout << "|";
	}
	std::cout << "\n";
	for (int i = side; i > 0, i--;)
	{
		std::cout << "_ ";
	}
	

	std::cout << "\n";
	system("pause");
	return 0;

}

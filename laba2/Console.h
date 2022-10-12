#include <iostream>
#include <array>
#include <Windows.h>
#include <array>


class Console
{
public:
	
	static double GetValue(std::istream& is)
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		double value;
		while (true)
		{
			is >> value;
			if (is.peek() == '\n')
			{
				is.get();
				break;
			}
			else
			{
				std::cout << "\n\tНекоректний ввід! Очікується дійсне число. Повторіть:";
				is.clear();
				while (is.get() != '\n') {};

			}
		}
		return value;
	};
	
	
static char* GetText(std::istream& is)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* buffer = new char[255];
	while (true)
	{
		setlocale(LC_ALL, "Ukrainian");
		SetConsoleCP(1251);
		is.getline(buffer, 255, '\n');
		

		if (strlen(buffer) > 0)
		{
			int emptyChar = 0;
			for (int i = 0; i < strlen(buffer); i++)
				if (buffer[i] == ' ')
					emptyChar++;
			if (emptyChar != strlen(buffer))
				break;
		}
		std::cout << "\n\tНекоректний ввід! Очікується текстова інформація Повторіть ввід:" << std::endl;

	}
	is.clear();
	return buffer;
};

};
	



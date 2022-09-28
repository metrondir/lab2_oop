#include <iostream>
#include <array>
#include <Windows.h>
#include <array>


class Console
{
public:
	static double GetValue(std::istream& is)
	{
		setlocale(LC_ALL, "Ukrainian");
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
	char* buffer = new char[255];
	while (true)
	{
		setlocale(LC_ALL, "Ukrainian");
		SetConsoleCP(1251);
		is.getline(buffer, 255, '\n');
		SetConsoleCP(866);

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
static int* GetMasive(std::istream& is)
{
	setlocale(LC_ALL, "Ukrainian");
	int* arr = new int[255];
	int i = 0;
	while (true)
	{
		
		if (isdigit(arr[i]) < 0)
		{
			std::cout << "\n\tНекоректний ввід! Очікується дійсне число. Повторіть:";
			break;
		}
		
		i++;
	}
	return arr;
};
	
};


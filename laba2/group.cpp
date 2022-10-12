#include "group.h"
void group::Input(student& stud)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "\n\tВведіть ім'я студента:";
	const char* firstName = Console::GetText(std::cin);
	stud.setFirstName(firstName);
	delete firstName;

	std::cout << "\tВведіть прізвище студента:";
	const char* lastName = Console::GetText(std::cin);
	stud.setLastName(lastName);
	delete lastName;

	std::cout << "\tВведіть номер заліковиої книжки:";
	stud.setNumber_of_scorebook(Console::GetValue(std::cin));

	std::cout << "\tВведіть масив оцінок:";
	stud.setgoalsENG(Console::GetValue(std::cin));
	std::cout << "\t\t\t     "; stud.setgoalsOOP(Console::GetValue(std::cin));
	std::cout << "\t\t\t     "; stud.setgoalsOCH(Console::GetValue(std::cin));
	std::cout << "\t\t\t     "; stud.setgoalsPython(Console::GetValue(std::cin));
	std::cout << "\t\t\t     "; stud.setgoalsTZKS(Console::GetValue(std::cin));
	std::cout << "\t\t\t     "; stud.setgoalsMMDO(Console::GetValue(std::cin));
}
void group::Output(student& stud)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "\tСтудент:";
	std::cout << stud.getFirstName() << "" << stud.getLastName() << std::endl;
	std::cout << "\tНомер залікової книжки:" << stud.getNumber_of_scorebook() << std::endl;
	std::cout << "\tМасив оцінок:" << stud.getgoalsENG() <<", "<< stud.getgoalsOOP() << ", " << stud.getgoalsOCH() << ", " << stud.getgoalsPython() << ", " << stud.getgoalsTZKS() << ", " << stud.getgoalsMMDO() << std::endl;

}
#include "group.h"
void group::Input(student& stud)
{
	std::cout << "\n\tВведіть прізвище студента:";
	const char* firstName = Console::GetText(std::cin);
	stud.setFirstName(firstName);
	delete firstName;

	std::cout << "\tВведіть ім'я студента:";
	const char* lastName = Console::GetText(std::cin);
	stud.setLastName(lastName);
	delete lastName;

	std::cout << "\tВведіть номер заліковиої книжки:";
	stud.setNumber_of_scorebook(Console::GetValue(std::cin));

	std::cout << "\tВведіть масив оцінок:";
	stud.setgoals(Console::GetMasive(std::cin));
}
void group::Output(student& stud)
{
	std::cout << "\tСтудент:";
	std::cout << stud.getFirstName() << "" << stud.getLastName() << std::endl;
	std::cout << "\tНомер залікової книжки:" << stud.getNumber_of_scorebook() << std::endl;
	std::cout << "\tМасив оцінок:" << stud.getgoals() << std::endl;

}
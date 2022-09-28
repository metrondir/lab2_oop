#include "group.h"
void group::Input(student& stud)
{
	std::cout << "\n\t������ ������� ��������:";
	const char* firstName = Console::GetText(std::cin);
	stud.setFirstName(firstName);
	delete firstName;

	std::cout << "\t������ ��'� ��������:";
	const char* lastName = Console::GetText(std::cin);
	stud.setLastName(lastName);
	delete lastName;

	std::cout << "\t������ ����� �������� ������:";
	stud.setNumber_of_scorebook(Console::GetValue(std::cin));

	std::cout << "\t������ ����� ������:";
	stud.setgoals(Console::GetMasive(std::cin));
}
void group::Output(student& stud)
{
	std::cout << "\t�������:";
	std::cout << stud.getFirstName() << "" << stud.getLastName() << std::endl;
	std::cout << "\t����� ������� ������:" << stud.getNumber_of_scorebook() << std::endl;
	std::cout << "\t����� ������:" << stud.getgoals() << std::endl;

}
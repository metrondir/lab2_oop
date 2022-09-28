#include "StudentManager.h"
groupIOManager::groupIOManager()
{
	std::cout << "Введіть кількість студентів:";
	studCount = Console::GetValue(std::cin);;
	students = new student[studCount];
	IOWorker = new group;
}
groupIOManager::~groupIOManager()
{
	delete[]students;
	delete IOWorker;
}

void groupIOManager::Fillstudents()
{
	for (int i = 0; i < studCount; i++)
	{
		IOWorker->Input(students[i]);
	}

}

void groupIOManager::Show()
{
	std::cout << "\nСписок усіх студентів:" << std::endl;
	for (int i = 0; i < studCount; i++)
	{
		IOWorker->Output(students[i]);
	}
}

void groupIOManager::ShowGPA()
{
	std::cout << "Пошук середнього балу" << std::endl;

}
void groupIOManager::ShowFiveBestStudents()
{
	std::cout << "Пошук найкращих пяти студентів за середнім балом" << std::endl;
	
}




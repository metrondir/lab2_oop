#include "StudentManager.h"
groupIOManager::groupIOManager()
{
	std::cout << "������ ������� ��������:";
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
	std::cout << "\n������ ��� ��������:" << std::endl;
	for (int i = 0; i < studCount; i++)
	{
		IOWorker->Output(students[i]);
	}
}

void groupIOManager::ShowGPA()
{
	std::cout << "����� ���������� ����" << std::endl;

}
void groupIOManager::ShowFiveBestStudents()
{
	std::cout << "����� ��������� ���� �������� �� ������� �����" << std::endl;
	
}




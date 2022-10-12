#include "StudentManager.h"

groupIOManager::groupIOManager()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "\nСписок усіх студентів:" << std::endl;
	for (int i = 0; i < studCount; i++)
	{
		IOWorker->Output(students[i]);
	}
}

void groupIOManager::ShowGPA()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int sum[6],tmp1,tmp2,tmp3,tmp4,tmp5,tmp6;
	//student* temp=new student[6];
	double* avarage=new double[studCount];
	std::cout << "Пошук середнього балу" << std::endl;
	for (int i = 0; i < studCount; i++)
	{
		
			tmp1 = students[i].getgoalsOCH();
			tmp2 = students[i].getgoalsENG();
			tmp3 = students[i].getgoalsPython();
			tmp4 = students[i].getgoalsMMDO();
			tmp5 = students[i].getgoalsTZKS();
			tmp6 = students[i].getgoalsOOP();
			sum[i] = tmp1 + tmp2 + tmp3 + tmp4 + tmp5 + tmp6;
			avarage[i] = sum[i] * 0.9 / 6;
			std::cout << "Студент " << students[i].getLastName() << "  " << avarage[i] << std::endl;
	}
	groupIOManager::ShowFiveBestStudents(avarage);

}
void groupIOManager::ShowFiveBestStudents(double value[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Пошук найкращих пяти студентів за середнім балом" << std::endl;
	int x = 0,count=0;
	for (int i = 0; i < studCount; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (value[j] > value[j - 1])
			{
				float tmp = value[j - 1];
				value[j - 1] = value[j];
				value[j] = tmp;

			}

		}
	}

	for (int i = 0; i < studCount; i++) {
		std::cout << i+1 <<" Місце Студент " << students[i].getLastName() << " з середнім балом " << value[i] << std::endl;
		count++;
		if (count == 5)
			break;
	}
	
}




#include "student.h"
#include "string.h"
#pragma warning (disable:4996)

student::student(void)
{
	setFirstName("Uknown");
	setLastName("Uknown");
	setNumber_of_scorebook(0);
	setgoalsOOP(0);
	setgoalsENG(0);
	setgoalsPython(0);
	setgoalsTZKS(0);
	setgoalsOCH(0);
	setgoalsMMDO(0);
}

student::~student(void)
{
	delete[]firstName;
	delete[]lastName;
}

char* student::getFirstName()
{
	return firstName;
}
void student::setFirstName(const char* value)
{
	firstName = new char[strlen(value) + 1];
	strcpy(firstName, value);
}
char* student::getLastName()
{
	return lastName;
}
void student::setLastName(const char* value)
{
	lastName = new char[strlen(value) + 1];
	strcpy(lastName, value);
}
double student::getNumber_of_scorebook()
{
	return number_of_scorebook;
}
void student::setNumber_of_scorebook(double value)
{
	number_of_scorebook = value;
}
int student::getgoalsMMDO()
{
	return studentgoals.MMDO;
}
void student::setgoalsMMDO(int value)
{
	studentgoals.MMDO=value;
}

int student::getgoalsENG()
{
	return studentgoals.ENG;
}

void student::setgoalsENG(int value)
{
	studentgoals.ENG = value;
}

int student::getgoalsOOP()
{
	return studentgoals.OOP;
}

void student::setgoalsOOP(int value)
{
	studentgoals.OOP = value;
}

int student::getgoalsOCH()
{
	return studentgoals.OCH;
}

void student::setgoalsOCH(int value)
{
	studentgoals.OCH = value;
}

int student::getgoalsPython()
{
	return studentgoals.Python;
}

void student::setgoalsPython(int value)
{
	studentgoals.Python = value;
}

int student::getgoalsTZKS()
{
	return studentgoals.TZKS;
}

void student::setgoalsTZKS(int value)
{
	studentgoals.TZKS = value;
}






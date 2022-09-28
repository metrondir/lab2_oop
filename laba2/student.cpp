#include "student.h"
#include "string.h"
#pragma warning (disable:4996)

student::student(void)
{
	setFirstName("Uknown");
	setLastName("Uknown");
	setNumber_of_scorebook(0);
	setgoals(0);
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
int* student::getgoals()
{
	return goals;
}
void student::setgoals(int* arr)
{
	goals=arr;
}






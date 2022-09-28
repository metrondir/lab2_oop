#pragma once
class student
{
protected:
	char* firstName;
	char* lastName;
	double number_of_scorebook;
	int* goals;
public:
	student(void);
	~student(void);

	char* getFirstName();
	void setFirstName(const char* value);
	char* getLastName();
	void setLastName(const char* value);
	double getNumber_of_scorebook();
	void setNumber_of_scorebook(double value);
	int* getgoals();
	void setgoals( int* arr);
	
};


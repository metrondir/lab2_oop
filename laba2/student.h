#pragma once
class student
{
protected:
	char* firstName;
	char* lastName;
	double number_of_scorebook;
	struct goals { int ENG, OCH, OOP, Python, TZKS, MMDO; }studentgoals;
public:
	student(void);
	~student(void);

	char* getFirstName();
	void setFirstName(const char* value);
	char* getLastName();
	void setLastName(const char* value);
	double getNumber_of_scorebook();
	void setNumber_of_scorebook(double value);
	int getgoalsMMDO();
	void setgoalsMMDO( int value);
	int getgoalsENG();
	void setgoalsENG(int value);
	int getgoalsOOP();
	void setgoalsOOP(int value);
	int getgoalsOCH();
	void setgoalsOCH(int value);
	int getgoalsPython();
	void setgoalsPython(int value);
	int getgoalsTZKS();
	void setgoalsTZKS(int value);
	
};


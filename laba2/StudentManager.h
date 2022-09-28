#pragma once
#include "group.h"
class groupIOManager
{
	int studCount;
	student* students;
	group* IOWorker;
public:
	groupIOManager();
	~groupIOManager(void);

	void Fillstudents();
	void Show();
	void ShowGPA();
	void ShowFiveBestStudents();
	
};


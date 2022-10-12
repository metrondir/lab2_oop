#include "StudentManager.h"
#include <conio.h>
#pragma warning (disable:4996)

void main()
{
	setlocale(LC_ALL, "Ukrainian");

	groupIOManager allstudents;

	allstudents.Fillstudents();

	allstudents.Show();

	allstudents.ShowGPA();
	

		while(!kbhit());
}
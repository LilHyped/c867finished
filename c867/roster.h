#pragma once
#include "student.h"


class Roster
{

public:
	const static int numStudents = 5;
	Student* classRosterArray[numStudents];
	int LastIndex = -1;

	Roster(); //constructor
	~Roster(); //destructor
	void parse(string row);
	void add(string StudentID, string FirstName, string LastName, string Email, int Age, int Days1, int Day2, int Days3, Degree degreetype);
	void printAll();
	void printInvalidEmails();
	void printAverageDaysInCourse(string StudentID); //average days left in the course
	void printByDegree(Degree degreetype);
	void remove(string StudentID);

};

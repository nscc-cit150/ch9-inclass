#include <iostream>
#include <string>

using namespace std;

const int MAX_GRADES = 3;

void print_grades(string student_names[], int student_grades[][MAX_GRADES],
	int students_size, int students_grades_size);

int main1()
{
	const int MAX_STUDENTS = 3;

	string student_names[MAX_STUDENTS];
	int student_grades[MAX_STUDENTS][MAX_GRADES];

	for (int i = 0; i < MAX_STUDENTS; ++i) 
	{
		cout << "Enter student name " << (i + 1) << ": ";
		cin >> student_names[i];
		for (int j = 0; j < MAX_GRADES; ++j)
		{
			cout << "Enter grade " << (j + 1) <<
				" for " << student_names[i] << ": ";
			cin >> student_grades[i][j];
		}
	}
	print_grades(student_names, student_grades, MAX_STUDENTS,
		MAX_GRADES);
	return 0;
}

void print_grades(string student_names[], int student_grades[][MAX_GRADES],
	int students_size, int students_grades_size)
{
	for (int i = 0; i < students_size; ++i)
	{
		cout << student_names[i] << ":\t";
		for (int j = 0; j < students_grades_size; ++j)
		{
			if (j != 0)
			{
				cout << "\t";
			}
			cout << "\t" << student_grades[i][j] << "%\n";
		}
		cout << endl;
	}
}

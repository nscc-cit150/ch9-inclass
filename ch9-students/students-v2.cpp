#include <iostream>
#include <string>

using namespace std;


struct student
{
	static const int MAX_GRADES = 3;
	string name;
	int grades[MAX_GRADES];
};


void print_grades(const student students[], int students_size);

int main()
{
	const int MAX_STUDENTS = 3;

	student students[MAX_STUDENTS];

	for (int i = 0; i < MAX_STUDENTS; ++i) 
	{
		cout << "Enter student name " << (i + 1) << ": ";
		cin >> students[i].name;
		for (int j = 0; j < student::MAX_GRADES; ++j)
		{
			cout << "Enter grade " << (j + 1) <<
				" for " << students[i].name << ": ";
			cin >> students[i].grades[j];
		}
	}
	print_grades(students, MAX_STUDENTS);
	return 0;
}

void print_grades(const student students[], int students_size)
{
	for (int i = 0; i < students_size; ++i)
	{
		cout << students[i].name << ":\t";
		for (int j = 0; j < student::MAX_GRADES; ++j)
		{
			if (j != 0)
			{
				cout << "\t";
			}
			cout << "\t" << students[i].grades[j] << "%\n";
		}
		cout << endl;
	}
}

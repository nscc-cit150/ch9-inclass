#include <iostream>
#include <string>

using namespace std;

class student
{
public:
	static const int MAX_GRADES = 3;
private:
	string name = "";
	int grades[MAX_GRADES] = {};
public:
	string getName() const { return name; }
	const int* getGrades() const { return grades; }
	void setName(string name) { student::name = name; }
	void setGrade(int grade, int index) { grades[index] = grade; }
	void output_student() const;
	void input_student();
};

//void print_grades(const student students[], int students_size);

int main()
{
	const int MAX_STUDENTS = 3;

	student students[MAX_STUDENTS];

	for (int i = 0; i < MAX_STUDENTS; ++i) 
	{
		cout << "Enter student name " << (i + 1) << ": ";
		students[i].input_student();
		cout << endl;
	}
	//print_grades(students, MAX_STUDENTS);
	for (int i = 0; i < MAX_STUDENTS; ++i)
	{
		students[i].output_student();
	}
	return 0;
}

void student::input_student()
{
	cin >> name;
	for (int j = 0; j < student::MAX_GRADES; ++j)
	{
		cout << "Enter grade " << (j + 1) <<
			" for " << getName() << ": ";
		cin >> grades[j];
	}
}

void student::output_student() const
{
	cout << name << ":\t";
	for (int j = 0; j < student::MAX_GRADES; ++j)
	{
		if (j != 0)
		{
			cout << "\t";
		}
		cout << "\t" << getGrades()[j] << "%\n";
	}
	cout << endl;
}

/*
void print_grades(const student students[], int students_size)
{
	for (int i = 0; i < students_size; ++i)
	{
		cout << students[i].getName() << ":\t";
		for (int j = 0; j < student::MAX_GRADES; ++j)
		{
			if (j != 0)
			{
				cout << "\t";
			}
			cout << "\t" << students[i].getGrades()[j] << "%\n";
		}
		cout << endl;
	}
}
*/
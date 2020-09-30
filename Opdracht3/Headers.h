#pragma once
#include <string>

//Person
class Person
{
private:
	int personAge;
	std::string name = "";
public:
	int getAge();
	void setAge(int ageValue);

	std::string getName();
	void setName(std::string nameValue);
};
 //Student
class Student
{
private:
	int studentAge;
	int studentEC;
public:
	int getStudentAge();
	void setStudentAge(int ageValue);

	int getStudentEC();
	void setStudentEC(int ecValue);
};

 //Teacher
class Teacher {
private:
	std::string skills = "";
	int teacherSalary;
public:
	std::string getTeacherSkills();
	void setTeacherSkills(std::string skillValue);

	int getTeacherSalary();
	void setTeacherSalary(int salaryValue);
};

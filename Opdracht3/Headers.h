#pragma once
#include <string>

class Person {
protected:
	int age = 0;
public:
	Person(int age, std::string name)
	int GetAge();
	void SetAge(int value);
	std::string getName();
	void SetName(std::string value);
};

class Student : public Person {
private:
	int studentEC = 0;
public:
	Student(int age, std::string name, int studentEC);
	int GetStudentEC();
	void SetStudentEC(int value);
};

class Teacher : public Person {
private:
	int teacherSalary = 0;
public:
	Teacher(int age, std::string name, int teacherSalary);
	int GetTeacherSalary();
	void SetTeacherSalary(int value);
};
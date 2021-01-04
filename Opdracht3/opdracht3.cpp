#include <iostream>
#include "Headers.h"
#include <string>


Teacher teacher = Teacher(34, "Piet", 0001);
Student student = Student(20, "Henk", 62);
int main()
{
	TeacherInfo();
	StudentInfo();

}

void TeacherInfo() {
	int teacherAge = teacher.GetAge();
	std::string teacherName = teacher.getName();
	int teacherSalary = teacher.GetTeacherSalary();

	std::cout << "Teacher Name: " << teacherName << std::endl;
	std::cout << "Teacher Age: " << teacherAge << std:endl;
	std::cout << "Teacher Salary: " << teacherSalary << std:endl;
}
void StudentInfo() {
	int studentAge = student.GetAge();
	std::string studentName = student.getName();
	int studentEC = student.GetStudentEC();

	std::cout << "Student Name: " << studentName << std::endl;
	std::cout << "Student Age: " << studentAge << std:endl;
	std::cout << "Student Salary: " << studentEC << std:endl;

//Person cpp
Person::Person(int age, std::string name) : age(age), name(name) {
}
int Person::GetAge() {
	return age;
}
void Person::SetAge(int value) {
	age = value;
}
std::string Person::GetName() {
	return name;
}
void Person::SetName(std::string value) {
	name = value;
}


//Student cpp
Student::Student(int age, std::string name, int _studentEC) : Person(age, name) {
	studentEC = _studentEC;
}
void Student::SetStudentEC(int value) {
	studentEC = value;
}
int Student::GetStudentEC {
	return studentEC;
}

//Teacher cpp
Teacher::Teacher(int age, std::string name, int _teacherSalary) : Person(age, name) {
	teacherSalary = _teacherSalary;
}
int Teacher::GetTeacherSalary {
	return teacherSalary;
}
void Teacher::SetTeacherSalary(int value) {
	teacherSalary = value;
}
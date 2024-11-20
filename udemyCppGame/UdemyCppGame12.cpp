#include <iostream>
#include <memory>
#include <vector>


class Student
{
public:
    Student(const std::string& studentName, int studentId, int studentAge) // constructor is a function that has no return type and has the same name as the class
        : name(studentName), id(studentId), age(studentAge) // initializer more performant than doing the assignment in the body of the constructor
    {
        // default constructor. If you do not provide any constructor, this will be automatically create.
        // If you do provide a constructor, then default constructor will not be created for you.
        std::cout << "custom Student constructor" << std::endl;
    }
    std::string name;
    int id;
    int age;
};


int main()
{
    Student StudentOne{"John", 123, 18}; // making an instance
    /*StudentOne.name = "John";
    StudentOne.id = 0001;
    StudentOne.age = 18;*/

    Student StudentTwo{"Emily", 124, 17};
    /*StudentTwo.name = "Emily";
    StudentTwo.id = 0002;
    StudentTwo.age = 17;*/

    std::vector<Student> students = { StudentOne, StudentTwo };

    for (Student& student : students)
    {
        std::cout << "Student name: " << student.name <<  std::endl;
        std::cout << "Student id: " << student.id <<  std::endl;
        std::cout << "Student age: " << student.age <<  std::endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

class Student{
    string name;
    int rollNo;
    public:
    Student(){//default
        name="mukul";
        rollNo=1234;
    }
    Student(string name , int rollNo)
    {
        this->name=name;
        this->rollNo=rollNo;
    }
    Student(const Student &s)
    {
        this->name=s.name;
        this->rollNo=s.rollNo;
    }
    void display()
    {
        cout<<this->name<<" "<<this->name<<" ";
    }
};

int main()
{
    Student s1;
    s1.display();
}
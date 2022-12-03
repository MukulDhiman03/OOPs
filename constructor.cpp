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
        cout<<this->name<<" "<<this->rollNo<<" "<<endl;
    }
};

int main()
{
    Student s1;//default constructor
    s1.display();

    Student s2("Kane",2222); //parameterized constructor
    s2.display();

    Student s3=s1;   // copy constructor
    // Student s3(s1); 
    s3.display();
}
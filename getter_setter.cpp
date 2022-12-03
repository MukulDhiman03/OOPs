#include<iostream>
using namespace std;
class Student
{
    string name;
    int rollno;
    long pno;
    string course;
    
    public:
    void setDetails(string name1, int rollno, long pno,string course)
    {
       bool flag="true";
       if(name1.length()<10)
       {
        flag="false";
        cout<<"name should be more than 10 letters"<<endl;
       }
       else
       {
        name=name1;
        this->rollno=rollno;
        this->pno=pno;
        this->course=course;
       }
    }
    void getDetails()
    {
        cout<<this->name<<" "<<this->rollno<<" "<<this->pno<<" "<<this->course<<endl;
    }
};
int main()
{
    Student s1;
    s1.setDetails("Mukul",36,9917090798,"Btech-cse");
    s1.getDetails();
}
#include<iostream>
using namespace std;
//Structure
struct StudentInfo{
    string Name; //Data Members
    string ID;
    float cgpa;
    int age;

    void Set_StudentInfo(){ //Member function
        cout<<"Enter Name:";
        getline(cin,Name);
        cout<<"Enter ID:";
        cin>>ID;
        cout<<"Enter CGPA:";
        cin>>cgpa;
        cout<<"Enter AGE:";
        cin>>age;
        cin.ignore();
    }
    void Print_StudentInfo(){ //Member function
        cout<<"Student Name:"<<Name<<endl;
        cout<<"Student ID:"<<ID<<endl;
        cout<<"Student CGPA:"<<cgpa<<endl;
        cout<<"Student AGE:"<<age<<endl;
    }
    void CheckStudent(){ //Member function
        if(cgpa<2.50){
            cout<<"Probation Student"<<endl;
        }
        else{
            cout<<"Regular Student"<<endl;
        }
    }
};
int main(){
    StudentInfo S1;
    S1.Set_StudentInfo();
    StudentInfo S2;
    S2.Set_StudentInfo();
    cout<<"Student Information"<<endl;
    S1.CheckStudent();
    S1.Print_StudentInfo();
    S2.CheckStudent();
    S2.Print_StudentInfo();
}
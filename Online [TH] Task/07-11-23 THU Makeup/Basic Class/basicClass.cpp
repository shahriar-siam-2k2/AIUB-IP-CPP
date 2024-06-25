#include<iostream>
using namespace std;
class Student{
//Access Modifier/Access Specifier-> public, private, protected
public:
    string Name;
protected:
    string ID;
private:
    float cgpa;
public:
    void Set_StudentInfo(string nm, string id, float cg){ //Method
        Name=nm;
        ID=id;
        cgpa=cg;
    }
    void Get_StudentInfo(){
        cout<<"Student Name:"<<Name<<endl;
        cout<<"Student ID:"<<ID<<endl;
        cout<<"Student CGPA:"<<cgpa<<endl;
    }
    void cgpa_Info(){
        if(cgpa < 2.50){
            cout << "Probation Student" << endl;
        }
        else{
            cout << "Regular Student" << endl;
        }
    }
 
};
int main(){
    cout << endl;
    Student S1;
    S1.Set_StudentInfo("ABC","23-45",4);
    S1.Get_StudentInfo();
    S1.cgpa_Info();
    Student S2;
    S2.Set_StudentInfo("Siam","23-53004-3",0);
    S2.Get_StudentInfo();
    S2.cgpa_Info();

    cout << endl;
    S1.Get_StudentInfo();
    S2.cgpa_Info();

    cout << endl;
    S2.Get_StudentInfo();
    S1.cgpa_Info();
}
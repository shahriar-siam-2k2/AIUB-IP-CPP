#include<iostream>
using namespace std;
//Function Overloading
void Sum(int a, int b){
    int add=a+b;
    cout<<"Addition of two variables:"<<add<<endl;
}
void Sum(int a, int b, int c){
    int add=a+b+c;
    cout<<"Addition of three variables:"<<add<<endl;
}
void Sum(){
    cout<<"Parameterless sum"<<endl;
}
void Sum(char A, string b){
    cout<<"String Sum"<<endl;
}
int main(){
  Sum(5,3,2);//NOT ERROR but Function Overloading
  Sum(2,3);//NOT ERROR but Function Overloading
  Sum();//NOT ERROR but Function Overloading
  Sum('a',"Hello");//NOT ERROR but Function Overloading
}
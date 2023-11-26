#include<iostream>
using namespace std;
//Ambiguous Function Overloading
void Sum(int a, int b){
    int add=a+b;
    cout<<"Addition of two variables:"<<add<<endl;
}
 
void Sum(float a, float b){
    float add=a+b;
    cout<<"float addition:"<<add<<endl;
 
}
int main(){
  Sum(5.6,2.3);//ERROR: Ambiguous Function Overloading
}
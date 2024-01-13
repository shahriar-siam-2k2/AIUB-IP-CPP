#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello";
   char S2[]="World";
   cout<<"Before S1:"<<S1<<endl;
   cout<<"Before S2:"<<S2<<endl;
   cout<<"Concatenation:"<<strcat(S1,S2)<<endl;
   cout<<"After S1:"<<S1<<endl;
   cout<<"After S2:"<<S2<<endl;
 
}
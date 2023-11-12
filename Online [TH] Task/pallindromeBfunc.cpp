/*
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main(){
    int n;
    cout << "Enter length: ";
    cin >> n;
    char S[n];

    cout << "Enter a string: ";
    for(int i=0 ; i<n ; i++){
       cin >> S[i];
    }

    char revS[n];
    cout << "Reversed form of the string is: ";
    for(int i=0 ; i<n ; i++){
        revS[i] = S[n-(i+1)];
        cout << revS[i];
    }

    if(strcmp(S, revS) == 0){
        cout << endl << "Your entered string is Palindrome." << endl;
    }
    else{
        cout << endl << "Your entered string is not Palindrome." << endl;
    }
    getch();
    return 0;
}
*/

//TEACHER

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int length;
    cout<<"Enter the length of your string:";
    cin>>length;
    char S1[length];
    cout<<"Enter the string:";
    for(int i=0; i<length; i++){
        cin>>S1[i];
    }

    char S2[length];
    for(int j=length-1; j>=0; j--){
        S2[(length-1)-j]=S1[j];
    }
    cout<<"The reversed string:";
    for(int i=0; i<length; i++){
        cout<<S2[i];
    }
    cout<<endl;
    if(strncmp(S1,S2,length)==0){
        cout<<"The given string is palindrome"<<endl;
    }
    else{
        cout<<"The given string is not palindrome"<<endl;
    }

}


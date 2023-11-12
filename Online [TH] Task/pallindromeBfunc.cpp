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
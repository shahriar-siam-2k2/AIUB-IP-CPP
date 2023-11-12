#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char S[1000];
    int len = 0;
    bool pal = true;

    cout << "Enter a string: ";
    cin >> S;

    for(int i=0 ; S[i] != '\0' ; i++){
        len = i;
    }

    cout << "Reversed form of the string is: ";
    for(int i=len ; i>=0 ; i--){
        cout << S[i];
    }

    for(int i=0 ; i<=len ; i++){
        if(S[i] != S[len-i]){
            pal = false;
            break;
        }
    }

    if(pal == true){
        cout << endl << "Your entered string is Palindrome." << endl;
    }
    else{
        cout << endl << "Your entered string is not Palindrome." << endl;
    }
    getch();
    return 0;
}
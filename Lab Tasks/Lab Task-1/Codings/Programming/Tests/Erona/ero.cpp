#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main(){
    char s[100];
    cin >> s;
    if(strcmp("erona", s)==0 || strcmp("Erona", s)==0 || strcmp("Erona Reza", s)==0 || strcmp("erona reza", s)==0 || strcmp("Erona reza", s)==0 || strcmp("erona Reza", s)==0){
        cout << "Mingle";
    }
    else{
        cout << "Single";
    }
    getch();
    return 0;
}
#include <iostream>
using namespace std;

void grading(int n){
    if(n>=91 && n<=100){
        cout << "A+" << endl;
    }
    else if(n>=81 && n<=90){
        cout << "A" << endl;
    }
    else if(n>=71 && n<=80){
        cout << "B+" << endl;
    }
    else if(n>=61 && n<=70){
        cout << "B" << endl;
    }
    else if(n>=51 && n<=60){
        cout << "C+" << endl;
    }
    else if(n>=41 && n<=50){
        cout << "D" << endl;
    }
    else if(n<=40){
        cout << "F" << endl;
    }
    else{
        cout << "INVALID NUMBER" << endl;
    }  
}

int main(){
    int marks;
    cout << endl << "Enter marks (out of 100): ";
    cin >> marks;
    grading(marks);
    return 0;
}
#include <iostream>
using namespace std;

void StringSearch(string Name, string flower[8]){
    bool flag = false;
    for(int i=0 ; i<8 ; i++){
        if(Name == flower[i]){
            flag = true;
            break;
        }
    }
    if(flag == true){
        cout << "The flower name is present in the array." << endl;
    }
    else{
        cout << "The flower name is not present in the array." << endl;
    }
}

int main(){
    string flower[8] = {"Rose", "Daisy", "Tulip", "Lavender", "Zinnia", "Sunflower", "Jasmine", "Lotus"};
    string name;
    cout << endl << "Enter a flower name: ";
    getline(cin, name);
    StringSearch(name, flower);
    return 0;
}
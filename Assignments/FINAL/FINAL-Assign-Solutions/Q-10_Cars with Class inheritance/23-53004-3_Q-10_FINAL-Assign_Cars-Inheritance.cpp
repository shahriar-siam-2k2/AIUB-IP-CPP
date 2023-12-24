#include <iostream>
using namespace std;

class Car{
    protected:
        string CarName, CarID, CarColor;
        double Price;
    public:
        Car(string name, string id, string color, double price){
            CarName = name;
            CarID = id;
            CarColor = color;
            Price = price;
        }
        void DisplayCarInfo(){
            cout << endl << "Car name: " << CarName << endl;
            cout << "Car ID: " << CarID << endl;
            cout << "Car color: " << CarColor << endl;
            cout << "Car price: " << Price << " Taka" << endl;
        }
};
class TeslaAutopilot : public Car{
    private:
        string CarType;
        double TaxPercentage;
    public:
        TeslaAutopilot(string name, string id, string color, double price, string type, double tax) : Car(name, id, color, price){
            CarType = type;
            TaxPercentage = tax;
        }
        double FinalPrice(){
            Price = Price - (Price * (TaxPercentage / 100));
            return Price;
        }
        void DisplayTeslaInfo(){
            cout << "Car type: " << CarType << endl;
            cout << "Tax percentage: " << TaxPercentage << "%" << endl;
            cout << "Final Price: " << FinalPrice() << " Taka" << endl;
        }
};

int main(){
    string nm, ID, col, typ;
    double prc, taxPerc;

    cout << endl << "Enter car name: ";
    getline(cin, nm);
    cout << "Enter car ID: ";
    getline(cin, ID);
    cout << "Enter car color: ";
    getline(cin, col);
    cout << "Enter car type: ";
    getline(cin, typ);
    cout << "Enter car price: ";
    cin >> prc;
    cout << "Enter car tax percentage: ";
    cin >> taxPerc;
    
    TeslaAutopilot car1(nm, ID, col, prc, typ, taxPerc);
    car1.DisplayCarInfo();
    car1.DisplayTeslaInfo();
    return 0;
}
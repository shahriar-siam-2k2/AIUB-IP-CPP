#include <iostream>
using namespace std;

class LibraryTokenReservation{
    private:
        string FromTime, ToTime;
        int TokenQuantity;
    protected:
        float TokenPrice;
    public:
        void SetTokenInfo(string to, string from){
            FromTime = from;
            ToTime = to;
        }
        LibraryTokenReservation(int quantity){
            TokenQuantity = quantity;
        }
        void CalculatePrice(){
            if(FromTime == "9 AM" && ToTime == "1 PM"){
                TokenPrice = (float)TokenQuantity * 200;
            }
            else if(FromTime == "12 PM" && ToTime == "3 PM"){
                TokenPrice = (float)TokenQuantity * 300;
            }
            else if(FromTime == "1 PM" && ToTime == "5 PM"){
                TokenPrice = (float)TokenQuantity * 420;
            }
            else if(FromTime == "3 PM" && ToTime == "7 PM"){
                TokenPrice = (float)TokenQuantity * 500;
            }
        }
        bool Membership(){
            bool member;
            cout << "Do you have any membership? (0 for NO. 1 for YES): ";
            cin >> member;
            if(member == true){
                TokenPrice = TokenPrice - (TokenPrice * 0.05);
            }
            return member;
        }
        void DisplayTokenInfo(){
            cout << endl << "Ticket Informations-" << endl;
            cout << "From time: " << FromTime << endl;
            cout << "To time: " << ToTime << endl;
            cout << "Token quantity: " << TokenQuantity << endl;
            cout << "Total token price: " << TokenPrice << " Taka" << endl;
        }
};

int main(){
    string ft, tt;
    int q;
    
    cout << endl << "Enter from time: ";
    getline(cin, ft);
    cout << "Enter to time: ";
    getline(cin, tt);
    cout << "Enter token quantity: ";
    cin >> q;

    LibraryTokenReservation user(q);
    user.SetTokenInfo(tt, ft);
    user.CalculatePrice();
    user.Membership();
    user.DisplayTokenInfo();
    return 0;
}
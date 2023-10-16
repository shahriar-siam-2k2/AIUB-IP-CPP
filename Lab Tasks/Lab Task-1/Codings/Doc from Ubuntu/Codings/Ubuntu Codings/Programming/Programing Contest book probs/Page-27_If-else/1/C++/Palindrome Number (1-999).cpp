//Palindrome Number (1-999)
#include<iostream>
using namespace std;

int main()
{
    int n,i,a;

    cout << "Enter maximum number (1-200): ";
    cin >> n;
    cout << endl << "The palindrome number from 1 to " << n << ":" << endl;

    for(i=1 ; i<=n ; i++)
    {
        if(i<10)
        {
            cout << i << " ";
        }
        else if(i>10 && i<100)
        {
            if(i==n)
            {
                break;
            }
            else
            {
                if(i==11)
                {
                    cout << i << " ";
                }
                else
                {
                    i = i + 10;
                    cout << i << " ";
                }
            }
        }
        else if(i>100 && i<192)
        {
            if(i==n)
            {
                break;
            }
            else
            {
                if(i==101)
                {
                    cout << i << " ";
                }
                else
                {
                    i = i + 9;
                    cout << i << " ";
                }
            }
        }


    }
    cout << endl;






    return 0;
}

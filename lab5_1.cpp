#include<iostream>
using namespace std;

int main(){
    int Number;
    int Even = 0;
    int Odd = 0;
    cout << "Enter an integer: ";
    cin >> Number;
    while (Number != 0)
    {
        if(Number % 2 == 0){
            Even += 1;
        }
        else{
            Odd += 1;
        }
        cout << "Enter an integer: ";
        cin >> Number;
    }
    cout << "#Even numbers = " <<  Even << endl;
    cout << "#Odd numbers = " << Odd << endl;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int N;
    int Even = 0;
    int Odd = 0;
    cout << "Enter an integer: ";
    cin >> N;
    while (N != 0)
    {
        if(N % 2 == 0){
            Even += 1;
        }
        else{
            Odd += 1;
        }
        cout << "Enter an integer: ";
        cin >> N;
    }
    cout << "#Even numbers = " <<  Even << endl;
    cout << "#Odd numbers = " << Odd << endl;
    return 0;
}

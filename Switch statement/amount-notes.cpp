#include <iostream>
using namespace std;

int main()
{
    int amount, note;
    cout << "Enter amount: ";
    cin >> amount;

    switch (1)
    {
    case 1:
        note = amount / 100;
        cout << "100 Rs notes: " << note << endl;
        // amount = amount - note * 100;
        amount = amount % 100;

    case 2:
        note = amount / 50;
        cout << "50 Rs notes: " << note << endl;
        amount = amount % 50;

    case 3:
        note = amount / 20;
        cout << "20 Rs notes: " << note << endl;
        amount = amount % 20;

    case 4:
        note = amount / 1;
        cout << "1 Rs notes: " << note << endl;
    }
    return 0;
}
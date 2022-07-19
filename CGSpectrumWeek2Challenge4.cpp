#include <iostream>
using namespace std;

int main()
{
    int number;
    
    do 
    {
        cout << "Give me a number that is positive: ";
        cin >> number;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(99, '\n');
            system("cls");
            cout << "That is not a valid input!" << endl;
        }
        else if (number <= 0) {
            system("cls");
            cout << "This number is not positive." << endl;
        }
        else {
            break;
        }
    } while (true);

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            cout << i << " is a factor of " << number << endl;
        }
    }
}
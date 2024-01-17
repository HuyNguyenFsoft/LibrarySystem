#include <iostream>
#include "management.h"

int main()
{
    while (true)
    {
        management object;
        int choice;
        cout << "Library menu:\n";
        cout << "1) Add book\n";
        cout << "2) Search book by prefix\n";
        cout << "3) Print who borrowed book\n";
        cout << "4) Print library\n";
        cout << "5) Add user\n";
        cout << "6) User borrow book\n";
        cout << "7) User return book\n";
        cout << "8) Print all users\n";
        cout << "9) Exit\n";
        cout << "Enter your menu choice [1-9]: ";

        cin >> choice;
        while (choice < 1 && choice > 9)
        {
            cout << "Please enter value between 1 and 9\n";
            cout << "Enter your menu choice [1-9]: ";
            cin >> choice;
        }
        switch (choice)
        {
        case 1: 
            object.addBook();
            break;
        case 9:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}

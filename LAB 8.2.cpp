#include <iostream>
using namespace std;
int main() {
    int choice;
    do 
    {
        cout<<"Simple Menu"<< endl;
        cout<<"1 Say Hello"<< endl;
        cout<<"2 Display a number"<< endl;
        cout<<"3 Exit"<< endl;
        cout<<"Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
               case 1:
                cout<<"Hello, user"<< endl;
                break;
            case 2:
                cout<<"Your favorite number is 42"<< endl;
                break;
            case 3:
                cout<<"Exiting program Goodbye"<< endl;
                break;
            default:
                cout<<"Invalid choice"<< endl;
        }
        } while (choice != 3);
        system ("pause");
        return 0;
}

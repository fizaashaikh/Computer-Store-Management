#include "Class.cpp"
#include "Structure.cpp"
#include "TakeOrder.cpp"
#include "DeleteOrder.cpp"
#include "DisplayReceipt.cpp"
#include "ModifyOrder.cpp"
#include "DailySummary.cpp"
#include "Exit.cpp"

int main() // main function
{
    // Create an object of class computerType
    computerType computer;

    int menu;

    do
    {
        system("cls");

        cout << "\t\t==================================================\n";
        cout << "\t\t\t Computer Store Management System \n";
        cout << "\t\t==================================================\n\n";
        cout << "\t\t---------------------------------------------------\n";
        cout << "\t\t||\t1. Take New Computer Order \t\t ||\n";
        cout << "\t\t||\t2. Delete Latest Order\t\t\t ||\n";
        cout << "\t\t||\t3. Modify Order List \t\t\t ||\n";
        cout << "\t\t||\t4. Print the Receipt                  \t ||\n";
        cout << "\t\t||\t5. Daily Summary of Total Sale \t\t ||\n";
        cout << "\t\t||\t6. Exit\t\t\t\t\t ||\n";
        cout << "\t\t---------------------------------------------------\n";

        cout << "\nEnter Choice: ";
        cin >> menu;

        switch (menu)
        {
        case 1:
        {
            computer.take_order(); // Function add
            break;
        } // End case 1

        case 2:
        {
            computer.delete_order(); // Function delete
            system("PAUSE");
            break;
        } // End case 2

        case 3:
        {
            computer.modify(); // Function modify
            system("PAUSE");
            break;
        } // End case 3

        case 4:
        {
            computer.order_list(); // Function order
            system("PAUSE");
            break;
        } // End case 4
        case 5:
        {
            computer.daily_summary(); // Function daily_summary
            system("PAUSE");
            break;
        } // End case 5

        case 6:
        {
            computer.exit(); // Function exit
            goto a;
            break;
        } // End case 6

        default:
        {
            cout << "Invalid input\nPlease re-enter the input\n"
                 << endl;
        } // End default

        } // End Switch

    } while (menu != 6); // End do

a: // goto

    cout << "\t\t===========================\n";
    cout << "\t\t\tThank You!!!\n";
    cout << "\t\t===========================\n\n";

    system("PAUSE");

    return 0;

} // End main function


////////////////////////////END OF THE PROGRAM//////////////////////////////////////////
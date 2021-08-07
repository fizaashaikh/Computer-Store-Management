// Function to display Daily Summary
// Time Complexity - O(n^2)
void computerType ::daily_summary()
{
    int i, num;
    string str = "\t\t===========================================\n";

    system("cls");
    node *temp;

    temp = start_ptr;

    if (temp == NULL) // Invalid receipt code
    {
        cout << endl << str;
        cout << "\t\t\tThere is no Order to show!!!\n\t\t\tThe List is Empty\n";
        cout << str << endl;
    }

    else
    {
        cout << "\n";
        cout << "================================================================================================" << endl;
        cout << " \t\t\tHere is the Daily Summary of All Orders \n"; //print all receipt
        cout << "================================================================================================\n"
             << endl;

        while (temp != NULL)
        {

            cout << "Receipt Number : " << temp->receipt_number << endl;
            cout << "Customer Name  : " << temp->customerName << endl;
            cout << "Order Date     : " << temp->date << endl
                 << endl;

            cout << "+===================+==============================+====================+=======================+" << endl;
            cout << "|   Computer Type   |         Computer Name        |      Quantity      |     Total Price (Rs.) |" << endl;
            cout << "+===================+==============================+====================+=======================+" << endl;

            for (i = 0; i < temp->x; i++)
            {
                cout << "\t" << temp->type[temp->menu2[i] - 1] << "  \t\t";
                cout << " " << temp->computerName[temp->menu2[i] - 1] << "\t  ";
                cout << "\t    " << temp->quantity[i] << "\t";
                cout << "\t\t" << temp->amount[i] << ".00" << endl;
                cout << "+-------------------+------------------------------+--------------------+-----------------------+" << endl;
            }

            temp->total = temp->amount[0] + temp->amount[1] + temp->amount[2] + temp->amount[3] + temp->amount[4] + temp->amount[5] + temp->amount[6] + temp->amount[7] + temp->amount[8] + temp->amount[9];
            cout << "\nTotal Bill is : " << "Rs. " << temp->total << ".00/-\n";

            cout << "\n=================================================================================================\n"
                 << endl;

            temp = temp->next;
        }
    }

} // End daily summary
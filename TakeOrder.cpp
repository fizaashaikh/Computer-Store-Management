// Function to take order
// Time Complexity - O(n)
void computerType ::take_order()
{
    system("cls");
    int i;
    int choice, quantity, price, None;
    string str1 = "********************************************************************************************************************\n";
    string str2 = "+-------+-----------------+---------------------------------+------------------------------+-----------------------+\n";

    cout << "-----------------";
    cout << "\nAdd Order Details\n";
    cout << "-----------------\n\n";

    node *temp;
    temp = new node;

    cout << str1;
    cout << " ID "
         << "\t   COMPUTER TYPE"
         << "\t COMPUTER SPECS"
         << "   \t\t COMPUTER NAME"
         << "    \t\tCOMPUTER PRICE (RS.)" << endl;
    cout << str1;
    cout << "0001"
         << "\t"
         << "\t8GB"
         << "\t\t"
         << " Intel Core i5(10th Gen)"
         << "\t"
         << " Dell Inspiron 15 5590  "
         << "  	66490.00" << endl;
    cout << str2;
    cout << "0002"
         << "\t"
         << "\t4GB"
         << "\t\t"
         << " Intel Core i3(10th Gen)"
         << "\t"
         << " Asus X412FA-EK361T     "
         << "	40000.00" << endl;
    cout << str2;
    cout << "0003"
         << "\t"
         << "\t4GB"
         << "\t\t"
         << " Intel Core i5(8th Gen) "
         << "\t"
         << " Lenovo Ideapad 330     "
         << "	44000.00" << endl;
    cout << str2;
    cout << "0004"
         << "\t"
         << "\t8GB"
         << "\t\t"
         << " Intel Core i5 (8th Gen)  "
         << "\t"
         << " Huawei Mach-W19B"
         << "       \t77899.00" << endl;
    cout << str2;
    cout << "0005"
         << "\t"
         << "\t8GB"
         << "\t\t"
         << " macOS Catalina         "
         << "\t"
         << " Apple MacBook Air      "
         << "	118990.00" << endl;
    cout << str2;
    cout << "0006"
         << "\t"
         << "\t8GB"
         << "\t\t"
         << " Intel Core i5(10th Gen)"
         << "\t"
         << " HP 15s-du1034tu        "
         << " 	53999.00" << endl;
    cout << str2;
    cout << "0007"
         << "\t"
         << "\t4GB"
         << "\t\t"
         << " Intel Core i3(5th Gen) "
         << "\t"
         << " Acer Aspire ES1-571    "
         << "	25655.00" << endl;
    cout << str2;
    cout << "0008"
         << "\t"
         << "\t4GB"
         << "\t\t"
         << " Intel Core i3(7th Gen) "
         << "\t"
         << " HP 15-DA0070TX           "
         << "	49279.00" << endl;
    cout << str2;
    cout << "0009"
         << "\t"
         << "\t4GB"
         << "\t\t"
         << " Intel Core i5(6th Gen) "
         << "\t"
         << " Lenovo Ideapad 300     "
         << "        43000.00" << endl;
    cout << str2;
    cout << "0010"
         << "\t"
         << "\t8GB"
         << "\t\t"
         << " Intel Core i7(5th Gen) "
         << "\t"
         << " HP Pavilion 15-ac028TX "
         << "	64000.00" << endl;
    cout << str1;
    cout << " " << endl;

    temp = new node;

    string str = "-------------------------------------------\n";

    cout << str;

    cout << "Type Order No: ";
    cin >> temp->receipt_number;

    cout << "Enter Customer Name: ";
    cin >> temp->customerName;

    cout << "Enter Date: ";
    cin >> temp->date;

    cout << str;

    cout << "\nHow many different laptops would you like to order?";
    cout << "\n(Maximum order is 10 for each transaction): ";
    cin >> temp->x;

    cout << endl;

    if (temp->x <= 0)
    {
         cout << "\nInvalid order!!!\n";
         cout << str;
         system("pause");
    }

    else if (temp->x > 10)
    {
        cout << "\nYour order exceeds the maximum amount of order!!!\n"; 
        cout << str;
        system("pause");
    }

    else
    {
         cout << str;
         
         cout << "\t    Enter Computer ID\n";

         for (i = 0; i < temp->x; i++)
         {
              cout << str;

              cout << "Please Enter Your Selection: ";
              cin >> temp->menu2[i];

              cout << "\nLaptop Name: " << temp->computerName[temp->menu2[i] - 1] << endl;

              cout << "\nHow many laptops do you want?: ";
              cin >> temp->quantity[i];

              temp->amount[i] = temp->quantity[i] * temp->computer[temp->menu2[i] - 1];
              cout << "\nThe amount You need to pay is: Rs. " << temp->amount[i] << "/-" << endl;

              cout << str << endl;

              system("PAUSE");
        }

        cout << "\n===========================================================================" << endl;
        cout << "                     Order Taken Successfully..." << endl;
        cout << "===========================================================================" << endl;
        cout << "                Go to Receipt Menu to Pay The Bill" << endl;
        cout << "===========================================================================\n" << endl;

        system("PAUSE");

        temp->next = NULL;

        if (start_ptr != NULL)
            temp->next = start_ptr;

        start_ptr = temp;

        system("cls");
    }

} // End function take_order
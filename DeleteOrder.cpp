// Function to delete order
// Time Complexity - O(n)
void computerType ::delete_order()
{
    system("cls");

    string str = "\t===========================================\n";

    if (start_ptr == NULL)
    {
        cout << endl;
        cout << str;
        cerr << "\t     Can not delete from an Empty List\n";
        cout << str;
        cout << endl;
    }

    else
    {
        int i, num, count;
        cout << "\nEnter the receipt numnber you want to delete: ";
        cin >> num;
        node *q;
        node *temp;
        bool found = false;

        if (start_ptr->receipt_number == num)
        {
            q = start_ptr;
            start_ptr = start_ptr->next;

            count--;

            if (start_ptr == NULL)
                last = NULL;

            delete q;

            cout << "\n\t\t========================================\n";
            cout << "\t\t The Receipt is Deleted Successfully!!!" << endl;
            cout << "\t\t========================================\n\n";
        }

        else
        {
            temp = start_ptr;
            q = start_ptr->next;

            while ((!found) && (q != NULL))
            {
                if (q->receipt_number != num)
                {
                    temp = q;
                    q = q->next;
                }

                else
                    found = true;
            }

            if (found)
            {
                temp->next = q->next;
                count--;

                if (last == q)
                    last = temp;
                delete q;

                cout << "\n\t\t========================================\n";
                cout << "\t\t The Receipt is Deleted Successfully!!!" << endl;
                cout << "\t\t========================================\n\n";
            }

            else
            {
                cout << "\n\t\t==========================================\n";
                cout << "\t\t Item to be deleted is not in the list!!!" << endl;
                cout << "\t\t==========================================\n\n";
            }
        }
    }

} // End function delete_order
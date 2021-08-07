#include "Header.cpp"

//Construct node
struct node
{
    int receipt_number, x;

    string customerName, date;

    int quantity[10], menu2[10];

    int amount[10], total;

    string type[10] = {"8GB", "4GB", "4GB", "8GB", "8GB", "8GB", "4GB", "8GB", "4GB", "8GB"};

    string specifications[10] = {"Intel Core i5(10th Gen)", "Intel Core i3 (10th Gen)", "Intel Core i5(8th Gen)", "Intel Core i5 (8th Gen)", "macOS Catalina", "Intel Core i5(10th Gen)", "Intel Core i3(5th Gen)", "Intel Core i3(7th Gen)", "Intel Core i5(6th Gen)", "Intel Core i7(10th Gen)"};

    string computerName[10] = {"Dell Inspiron 15 5590", "Asus X412FA-EK361T", "Lenovo Ideapad 330", "Huawei Mach-W19B", "Apple MacBook Air", "HP 15s-du1034tu", "Acer Aspire ES1-571", "HP 15-DA0070TX ", "Lenovo Ideapad 300", "HP Pavilion 15-ac028TX"};

    int computer[10] = {66490, 40000, 44000, 77899, 118990, 53999, 25655, 49279, 43000, 64000};

    // node *prev;
    node *next;

} *q, *temp; // Pointer declaration

node *start_ptr = NULL;
node *head = NULL;
node *last = NULL;
#include <iostream>
#include <fstream>
using namespace std;

class shopping
{
    int pCode;      // product code
    float price;    // product price
    float discount; // product discount
    string pName;   // product name

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void receipt();
    void list();
};

void shopping::menu()
{
    int choice;
    string email;
    string password;
m:
    cout << endl
         << endl
         << "/         S U P E R  M A R K E T         /";
    cout << endl
         << endl
         << "         1} ADMINISTRATOR  ";
    cout << endl
         << "         2} BUYER  ";
    cout << endl
         << "         3} EXIT  ";

    cout << endl
         << "Enter the choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter Email : ";
        cin >> email;
        cout << "Enter Password : ";
        cin >> password;

        if (email == "sandesh@gmail.com" && password == "sandesh28")
        {
            administrator();
        }
        else
        {
            cout << "Envalid Details";
        }
        break;
    case 2:
        buyer();
        break;
    case 3:
        exit;
        break;
    default:
        cout << "Enter Correct choice...!";
        goto m;
        break;
    }
}

void shopping::administrator()
{
m:
    int ch; // choice
    cout << endl
         << endl
         << "/         A D M I N I S T R A T O R    M E N U         /";
    cout << endl
         << endl
         << " 1} ADD THE PRODUCT";
    cout << endl
         << " 2} MODIFY THE PRODUCT";
    cout << endl
         << " 3} REMOVE THE PRODUCT";
    cout << endl
         << " 4} BACK TO menu MENU";
    cout << endl
         << endl
         << "Please enter the choice : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        add();
        break;

    case 2:
        edit();
        break;

    case 3:
        rem();
        break;

    case 4:
        menu();
        break;

    default:
        cout << "Enter valid choice : ";
        goto m;
        break;
    }
}

void shopping::buyer()
{
m:
    int ch;
    cout << endl
         << endl
         << "/         B U Y E R  M E N U         /";
    cout << endl
         << endl
         << "1} BUY PRODUCTS";
    cout << endl
         << "2} GO BACK";
    cout << endl
         << endl
         << "Enter your choice : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        receipt();
        break;
    case 2:
        menu();
        break;

    default:
        cout << "Enter valid choice : ";
        goto m;
        break;
    }
}

void shopping::add()
{
m:

    fstream data; // object name
    int c;        // product code
    int token = 0;
    float p;  // product price
    float d;  // product disscount
    string n; // product name

    cout << endl
         << endl
         << "/         A D D   N E W   P R O D U C T         /";
    cout << endl
         << endl
         << "Enter Product Code : ";
    cin >> pCode;
    cout
        << "Enter Product Name : ";
    cin >> pName;
    cout
        << "Enter Product Price : ";
    cin >> price;
    cout
        << "Enter Product Disscount : ";
    cin >> discount;

    data.open("database.txt", ios::in); // ios::in - is reading mode
                                        // ios::out - is writting mode
    if (!data)
    {
        data.open("database.txt", ios::app | ios::out); // ios::app - append in file
        data << " " << pCode << " " << pName << " " << price << " " << discount << endl;
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;

        while (!data.eof()) // eof() - end of file function
        {
            if (c == pCode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();

        if (token == 1)
        {
            cout << "Record allready inserted";
            goto m;
        }
        else
        {
            data.open("database.txt", ios::app | ios::out); // ios::app - append in file
            data << " " << pCode << " " << pName << " " << price << " " << discount << endl;
            cout << "Record Inserted Successfully";
            data.close();
        }
    }
    
    administrator();
}

void shopping::edit()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout << endl
         << endl
         << "/         E D I T   M E N U         /";
    cout << endl
         << endl
         << "Enter Product Code : ";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "File Doesn't Exist!";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pCode >> pName >> price >> discount;
        while (!data.eof())
        {
            if (pkey == pCode)
            {
                cout << "Enter Product New Code : ";
                cin >> c;
                cout << "Enter Name of the product : ";
                cin >> n;
                cout << "Enter Price of the product : ";
                cin >> p;
                cout << "Enter Disscount of the product : ";
                cin >> d;
                data1 << c << " " << n << " " << p << " " << d << endl;
                cout << "Record Edited Successfully";
                token++;
            }
            else
            {
                data1 << " " << pCode << " " << pName << " " << price << " " << discount << endl;
            }
            data >> pCode >> pName >> price >> discount;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "Record Not Found.........!";
        }
    }
}

void shopping::rem()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    cout << endl
         << endl
         << "/         D E L E T E   M E N U         /";
    cout << endl
         << endl
         << "Enter Product Code : ";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "File Doesnt exist";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pCode >> pName >> price >> discount;
        while (!data.eof())
        {
            if (pCode == pkey)
            {
                cout << "Product deleted successfully";
                token++;
            }
            else
            {
                data1 << " " << pCode << " " << pName << " " << price << " " << discount;
            }
            data >> pCode >> pName >> price >> discount;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "Record not found";
        }
    }
}

void shopping::list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "Pro.NO\t\tName\t\tPrice\t\tDiscount" << endl;
    data >> pCode >> pName >> price >> discount;
    while (!data.eof())
    {
        cout << pCode << pName << price << discount;
        data >> pCode >> pName >> price >> discount;
    }
    data.close();
}

void shopping::receipt()
{

    fstream data;

    int arrProductCode[100];
    int arrQuntity[100];
    char choice;
    int c = 0;
    float amount = 0;
    float dis = 0;
    float total = 0;

    cout << endl
         << endl
         << "/         R E C E I P T   M E N U         /" << endl
         << endl;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "Empty Database";
    }
    else
    {
        data.close();
        list();
        cout << endl
             << endl
             << "/          P L A C E   T H E  O R D E R         /";
        do
        {
        m:
            cout << endl
                 << endl
                 << "Enter product code";
            cin >> arrProductCode[c];
            cout << "Enter the product quantity";
            cin >> arrQuntity[c];
            for (int i = 0; i < c; i++)
            {
                if (arrProductCode[c] == arrProductCode[i])
                {
                    cout << "Duplicate product code, Please try again!";
                    goto m;
                }
            }
            c++;
            cout << "Do you want to buy another product if yes then press Y else No";
            cin >> choice;

        } while (choice == 'Y');

        cout << endl
             << endl
             << "/         R E C E I P T        /";
        cout << endl
             << "Product No \t Product Name \t Product Quantity \t Total Price \t Total Amount \t Total Amount WithDiscount\n";

        for (int i = 0; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> pCode >> pName >> price >> discount;
            while (!data.eof())
            {
                if (pCode == arrProductCode[i])
                {
                    amount = price * arrQuntity[i];
                    discount = amount - (amount * discount / 100);
                    total += discount;
                    cout << pCode << pName << arrQuntity[i] << price << amount << discount;
                }
                data >> pCode >> pName >> price >> discount;
            }
        }
        data.close();
    }
    cout << endl
         << endl
         << "Total Amount : " << total;
}

int main()
{
    shopping s;
    s.menu();
}
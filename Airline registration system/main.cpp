#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainMenu();

class management
{

public:
    management()
    {
        mainMenu();
    }
};

class details
{
public:
    static string name, gender;
    int phoneNO;
    int age;
    string address;
    static int custmorId;
    char arr[100];

    void information()
    {
        cout << "Enter the customer Id : ";
        cin >> custmorId;
        cout << "Enter the Name : ";
        cin >> name;
        cout << "Enter the Age : ";
        cin >> age;
        cout << "Enter the Address : ";
        cin >> address;
        cout << "Enter the gender : ";
        cin >> gender;
        cout << "Entre the Mobile Number : ";
        cin >> phoneNO;
    }
};

int details::custmorId;
string details::name;
string details::gender;

class registration
{

public:
    static int choice;
    int back;
    static float charges;

    void flight()
    {
    top:
        string flight[] = {"USA",
                           "Dubai",
                           "Canada",
                           "UK",
                           "Austrolia",
                           "Singapore"};

        cout << endl
             << endl
             << "\t\t\t\t\t-|  F L I G H T   R E G I S T R A T I O N   M E N U  |-" << endl;

        for (int i = 0; i < sizeof(flight) / sizeof(flight[0]); i++)
        {
            cout << (i + 1) << ") Flight to " << flight[i] << endl;
        }

        cout << endl
             << "Enter the number of the country of whitch you want to book the flight : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            USA();
            break;
        case 2:
            dubai();
            break;
        case 3:
            Canada();
            break;
        case 4:
            UK();
            break;
        case 5:
            Austrolia();
            break;
        case 6:
            Singapore();
            break;

        default:
            cout << "Enter valid choice........!";
            goto top;
            break;
        }
    }

    void USA()
    {
    top:
        int choice;

        cout << endl
             << endl
             << "\t\t\t\t\t-|  W E L C O M E  T O   A M E R I C A N  A I R L I N E S  |-";
        cout << endl
             << endl
             << "following are the flights" << endl;
        cout << "1] USA - 298  | 19-06-2024 08:00AM  8hrs | Rs.14000" << endl;
        cout << "2] USA - 123  | 19-06-2024 10:00AM  10hrs | Rs.10000" << endl;
        cout << "3] USA - 400  | 19-06-2024 13:00PM  13hrs | Rs.8000" << endl;
        cout << endl
             << "Select the flight you wants to book : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "| USA - 298 |  flight booked";
            break;
        case 2:
            cout << "| USA - 123 |  flight booked";
            break;
        case 3:
            cout << "| USA - 400 |  flight booked";
            break;

        default:
            cout << "Enter valid choice.......!";
            goto top;
            break;
        }
    }
    void dubai()
    {
    top:
        int choice;

        cout << endl
             << endl
             << "\t\t\t\t\t-|  W E L C O M E  T O   D U B A I  E M I R A T E S  |-";
        cout << endl
             << endl
             << "following are the flights" << endl;
        cout << "1] DUB - 498  | 19-06-2024 08:00AM  8hrs | Rs.14000" << endl;
        cout << "2] DUB - 323  | 19-06-2024 10:00AM  10hrs | Rs.10000" << endl;
        cout << "3] DUB - 600  | 19-06-2024 13:00PM  13hrs | Rs.8000" << endl;
        cout << endl
             << "Select the flight you wants to book : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "| DUB - 498 |  flight booked";
            break;
        case 2:
            cout << "| DUB - 323 |  flight booked";
            break;
        case 3:
            cout << "| DUB - 600 |  flight booked";
            break;

        default:
            cout << "Enter valid choice.......!";
            goto top;
            break;
        }
    }

    void Canada()
    {
    top:
        int choice;

        cout << endl
             << endl
             << "\t\t\t\t\t-|  W E L C O M E  T O   C A N A D I A N   A I R L I N E S  |-";
        cout << endl
             << endl
             << "following are the flights" << endl;
        cout << "1] CAN - 108  | 19-06-2024 08:30AM  8hrs | Rs.14000" << endl;
        cout << "2] CAN - 903  | 19-06-2024 10:10AM  10hrs | Rs.10000" << endl;
        cout << "3] CAN - 290  | 19-06-2024 11:20PM  13hrs | Rs.8000" << endl;
        cout << endl
             << "Select the flight you wants to book : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "| CAN - 108 |  flight booked";
            break;
        case 2:
            cout << "| CAN - 903 |  flight booked";
            break;
        case 3:
            cout << "| CAN - 290 |  flight booked";
            break;

        default:
            cout << "Enter valid choice.......!";
            goto top;
            break;
        }
    }
    void UK()
    {
    top:
        int choice;

        cout << endl
             << endl
             << "\t\t\t\t\t-|  W E L C O M E  T O   E N G L A N D  A I R L I N E S  |-";
        cout << endl
             << endl
             << "following are the flights" << endl;
        cout << "1] UK - 298  | 19-06-2024 08:00AM  8hrs | Rs.14000" << endl;
        cout << "2] UK - 123  | 19-06-2024 10:00AM  10hrs | Rs.10000" << endl;
        cout << "3] UK - 400  | 19-06-2024 13:00PM  13hrs | Rs.8000" << endl;
        cout << endl
             << "Select the flight you wants to book : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "| UK - 298 |  flight booked";
            break;
        case 2:
            cout << "| UK - 123 |  flight booked";
            break;
        case 3:
            cout << "| UK - 400 |  flight booked";
            break;

        default:
            cout << "Enter valid choice.......!";
            goto top;
            break;
        }
    }
    void Austrolia()
    {
    top:
        int choice;

        cout << endl
             << endl
             << "\t\t\t\t\t-|  W E L C O M E  T O   A U S T R O L I A N  A I R L I N E S  |-";
        cout << endl
             << endl
             << "following are the flights" << endl;
        cout << "1] AUS - 298  | 19-06-2024 08:00AM  8hrs | Rs.14000" << endl;
        cout << "2] AUS - 123  | 19-06-2024 10:00AM  10hrs | Rs.10000" << endl;
        cout << "3] AUS - 400  | 19-06-2024 13:00PM  13hrs | Rs.8000" << endl;
        cout << endl
             << "Select the flight you wants to book : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "| AUS - 298 |  flight booked";
            break;
        case 2:
            cout << "| AUS - 123 |  flight booked";
            break;
        case 3:
            cout << "| AUS - 400 |  flight booked";
            break;

        default:
            cout << "Enter valid choice.......!";
            goto top;
            break;
        }
    }
    void Singapore()
    {
    top:
        int choice;

        cout << endl
             << endl
             << "\t\t\t\t\t-|  W E L C O M E  T O   S I N G A P O R E  A I R L I N E S  |-";
        cout << endl
             << endl
             << "following are the flights" << endl;
        cout << "1] SIN - 298  | 19-06-2024 08:00AM  8hrs | Rs.14000" << endl;
        cout << "2] SIN - 123  | 19-06-2024 10:00AM  10hrs | Rs.10000" << endl;
        cout << "3] SIN - 400  | 19-06-2024 13:00PM  13hrs | Rs.8000" << endl;
        cout << endl
             << "Select the flight you wants to book : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "| SIN - 298 |  flight booked";
            break;
        case 2:
            cout << "| SIN - 123 |  flight booked";
            break;
        case 3:
            cout << "| SIN - 400 |  flight booked";
            break;

        default:
            cout << "Enter valid choice.......!";
            goto top;
            break;
        }
    }
};
float registration::charges;
int registration::choice;

class ticket : public registration, details
{
public:
    void bill()
    {
        string destination = "";
        ofstream outf("record.txt");

        outf << "Customer ID : " << details::custmorId;
        outf << "Customer Name : " << details::name;
        outf << "Customer Gender : " << details::gender;
        if (registration::choice == 1)
        {
            destination = "USA";
        }
        else if (registration::choice == 2)
        {
            destination = "Dubai";
        }
        else if (registration::choice == 3)
        {
            destination = "UK";
        }
        else if (registration::choice == 4)
        {
            destination = "Austrolia";
        }
        else if (registration::choice == 5)
        {
            destination = "Singapore";
        }

        outf<<"Destination : "<<destination<<endl;
        outf<<"Flight cost : "<<registration::charges<<endl;

        outf.close();
    }

    void display(){
        ifstream ifs("record.txt");
        if (!ifs)
        {
            cout<<"file error";
        }
        while (!ifs.eof())
        {
            ifs.getline(arr,100);
            cout<<arr<<endl;
        }
        
        ifs.close();
        
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << endl
         << endl
         << "\t\t\t\t\t-|  W E L C O M E  T O  S A N D E S H  A I R L I N E  |-";
    cout << endl
         << endl
         << "-> MAIN MENU" << endl
         << endl;

    cout << "Enter following service you want : ";
    cout << endl
         << "1] Add Customer Details";
    cout << endl
         << "2] Flight Registration";
    cout << endl
         << "3] Ticket and Chages";
    cout << endl
         << "4] Exit" << endl;

    cout << endl
         << "Enter Your choice : ";
    cin >> lchoice;

    details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
        d.information();
        break;
    case 2:
        r.flight();
        break;
    case 3:
        t.bill();
        break;

    case 4:
        exit(0);
        break;

    default:
        cout << "Enter Valid choice....!";
        mainMenu();
        break;
    }
}

int main()
{
    management Mobj;

    return 0;
}
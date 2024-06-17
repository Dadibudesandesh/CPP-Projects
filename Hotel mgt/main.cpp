#include <iostream>
#include <string>
using namespace std;


int main()
{
     int qun; // store the quantity
     int choiceForMenues, choiceForSalesAndCollection, choiceForCustomer;
     string Custname;

     int room_qun = 0, pasta_qun = 0, burger_qun = 0, shake_qun = 0, noodles_qun = 0;            // the variables store the quantity of items
     int room_sale = 0, pasta_sale = 0, burger_sale = 0, shake_sale = 0, noodles_sale = 0;       // the variables store the sale amount of items
     int total_rooms = 0, total_pasta = 0, total_burger = 0, total_shake = 0, total_noodles = 0; // the variables store the total amount of items

     cout << endl
          << "------------ Quantity of Items we have ----------------" << endl
          << endl;
     cout << "Rooms Available : ";
     cin >> room_qun;
     cout
         << "Quantity of Pasta : ";
     cin >> pasta_qun;
     cout
         << "Quantity of burger : ";
     cin >> burger_qun;
     cout
         << "Quantity of shake : ";
     cin >> shake_qun;
     cout
         << "Quantity of Noodles : ";
     cin >> noodles_qun;

newCustomer:

     cout << endl
          << "Enter Customer Name : ";
     cin >> Custname;
OldCustomer:
     cout << endl
          << "Please select from the menu options : " << endl;
     cout << endl
          << "1] Rooms";
     cout << endl
          << "2] Pastas";
     cout << endl
          << "3] Burgers";
     cout << endl
          << "4] Shakes";
     cout << endl
          << "5] Noodles";
     cout << endl
          << "6] Information Regarding sales and collection";
     cout << endl
          << "7] Exit";
     cout << endl
          << endl
          << "Please Enter your choice : ";
     cin >> choiceForMenues;

     switch (choiceForMenues)
     {
     case 1:
          cout << endl
               << "Enter the numbers of rooms you want to Book :";
          cin >> qun;
          if (room_qun - room_sale >= qun)
          {
               room_sale += qun;
               cout << qun << " Rooms Booked To " << Custname;
          }
          else
          {
               cout << "SOORY, Only " << room_qun << " Rooms Aailable....!";
          }
          break;

     case 2:
          cout << endl
               << "Enter the quantity of pastas you want :";
          cin >> qun;
          if (pasta_qun - pasta_sale >= qun)
          {
               pasta_sale += qun;
               cout << qun << " Pastas Ordered To "<<Custname;
          }
          else
          {
               cout << "SOORY, Only " << pasta_qun << " Pastas Aailable....!";
          }
          break;
     case 3:
          cout << endl
               << "Enter the numbers of Burgars you want :";
          cin >> qun;
          if (burger_qun - burger_sale >= qun)
          {
               burger_sale += qun;
               cout << qun << " Burgars Ordered To "<<Custname;
          }
          else
          {
               cout << "SOORY, Only " << burger_qun << " Burgars Aailable....!";
          }
          break;
     case 4:
          cout << endl
               << "Enter the quantity of Shakes you want :";
          cin >> qun;
          if (shake_qun - shake_sale >= qun)
          {
               shake_sale += qun;
               cout << qun << " Shakes Ordered To "<<Custname;
          }
          else
          {
               cout << "SOORY, Only " << shake_qun << " Shakes Aailable....!";
          }
          break;
     case 5:
          cout << endl
               << "Enter the quantity of Noodles you want :";
          cin >> qun;
          if (noodles_qun - noodles_sale >= qun)
          {
               noodles_sale += qun;
               cout << qun << " Noodles Ordered To"<<Custname;
          }
          else
          {
               cout << "SOORY, Only " << noodles_qun << " Noodles Aailable....!";
          }
          break;
     case 6:
          cout << endl
               << endl
               << "Gather Information Regarding sales and collection of given following items by chosing s.no of item";
          cout << endl
               << "|\t\t1]Rooms";
          cout << endl
               << "|\t\t2]Pastas";
          cout << endl
               << "|\t\t3]Burgars";
          cout << endl
               << "|\t\t4]Shakes";
          cout << endl
               << "|\t\t5]Noodels";
          cout << endl
               << "Enter S.NO : ";
          cin >> choiceForSalesAndCollection;
          switch (choiceForSalesAndCollection)
          {
          case 1:
               cout << "Total Rooms Available : " << room_qun;
               cout << endl
                    << "Total Rooms Booked : " << room_sale;
               cout << endl
                    << "Total collection of Rooms : " << room_sale * 1100; //(1100) : rent of per room
               break;
          case 2:
               cout << "Total Pasts Available : " << pasta_qun;
               cout << endl
                    << "Total Pasts Ordered : " << pasta_sale;
               cout << endl
                    << "Total collection of pastas : " << pasta_sale * 200;
          case 3:
               cout << "Total Burgars Available : " << burger_qun;
               cout << endl
                    << "Total Burgars Ordered : " << burger_sale;
               cout << endl
                    << "Total collection of Burgars : " << burger_sale * 100;
          case 4:
               cout << "Total Shakes Available : " << shake_qun;
               cout << endl
                    << "Total Shakes Ordered : " << shake_sale;
               cout << endl
                    << "Total collection of Shakes : " << shake_sale * 130;
          case 5:
               cout << "Total Noodels Available : " << noodles_qun;
               cout << endl
                    << "Total Noodels Ordered : " << noodles_sale;
               cout << endl
                    << "Total collection of Noodels : " << noodles_sale * 150;
          default:
               cout << "Enter Valid S.NO : ";
               break;
          }
          break;

     case 7:
          exit;
          break;

     default:
          cout << "Enter valid Choice...";
          goto OldCustomer;
          break;
     }

customerChoice:

     cout << endl
          << "1] Continue as Same Customer";
     cout << endl
          << "2] New Customer";
     cout << endl
          << endl
          << "Enter S.NO of you want to customer mode : ";
     cin >> choiceForCustomer;

     switch (choiceForCustomer)
     {
     case 1:
          goto OldCustomer;
          break;
     case 2:
          goto newCustomer;
          break;
     default:
          cout << "Enter valid option...!" << endl
               << endl;
          goto customerChoice;
          break;
     }
}
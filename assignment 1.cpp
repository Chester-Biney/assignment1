#include <iostream>
#include <string>

using namespace std;

int main()
{
    string customername;
    int customerID;
    int number1;
    int quantity;
    int item;
    int price;
    double amountPaid;
    double balance;
    double totalCost;
    double vat=0.12;
    string ITEM_NAME;
    char keepgoing;

    const double  PRINTER_PRICE=900.00,
                  PHONE_PRICE=750.00,
                  TABLE_PRICE=340.00;

     const int  PRINTER=1,
                PHONE=2,
                TABLE=3;


    cout << "HELLO WELCOME TO MARI SUPERMARKET YOUR NUMBER ONE STOCK SUPERMARKET" << endl;
    cout << "PLEASE SELECT YOUR ACTIVITY  " << endl;
    cout << "PLEASE ENTER YOUR NAME" <<endl;
    cin >>customername;
    cout << "PLEASE ENTER YOUR CUSTOMER ID" <<endl;
    cin >>customerID;
    cout << "PLEASE THESE ARE THE ITEMS AVILABLE AND THEIR PRICES" <<endl;
    cout<<"PRINTER\t\tGHC"<<PRINTER_PRICE<<endl;
    cout<<"PHONE\t\tGHC"<<PHONE_PRICE<<endl;
    cout<<"TABLE\t\tGHC"<<TABLE_PRICE<<endl;

    do{
    cout << "1.PRINTER\ 2.PHONE\ 3.TABLE" <<endl;
    cout << "=======================" <<endl;
    cout << "WHAT DO YOU WANT TO PURCHASE" <<endl;
    cin>>item;

    switch (item)
    {
      case PRINTER:
          {
    string itemName="Printer";
    cout <<"How many do you need"<<endl;
    cin>>quantity;
    price=PRINTER_PRICE*quantity;
    vat=price*vat;
    totalCost=price+vat;

    cout<<"Cost of item: "<<totalCost<<endl;
    cout<<"Please enter your money: "<<endl;
    cin>>amountPaid;

    if(amountPaid>totalCost)
    {
        balance=amountPaid-totalCost;
    }
    while(amountPaid<totalCost)
    {
        cout<<"Insufficient amount, Please your money should\nbe equal to or greater than GHC" <<totalCost <<endl;
        cout<<"Enter your money again "<<endl;
        cin>>amountPaid;

    }
    cout << "-------------------" <<endl;
    cout << "RECEIPT INFO. " <<endl;
    cout << "NAME :"<<customername <<endl;
    cout << "UNIQUE ID :"<<customerID <<endl;
    cout << "ITEM PURCHASED :"<<itemName <<endl;
    cout << "QUANTITY BOUGTH :" <<quantity<<endl;
    cout << "VAT ON ITEM(S) :" <<vat<<endl;
    cout << "TOTAL COST :" <<totalCost <<endl;
    cout << "TOTAL AMOUNT PAID:"<< amountPaid<<endl;
    if(amountPaid>totalCost)
    {
     cout << "BALANCE:" << balance <<endl;
    }

          }

  break;

   case PHONE:
      {


    string itemName="Phone";
    cout <<"How many do you need"<<endl;
    cin>>quantity;
    price=PHONE_PRICE*quantity;
    vat=price*vat;
    totalCost=price+vat;

    cout<<"Cost of item: "<<totalCost<<endl;
    cout<<"Please enter your money: "<<endl;
    cin>>amountPaid;

    if(amountPaid>totalCost)
    {
        balance=amountPaid-totalCost;
    }
    while(amountPaid<totalCost)
    {
        cout<<"Insufficient amount, Please your money should\nbe equal to or greater than GHC" <<totalCost <<endl;
        cout<<"Enter your money again "<<endl;
        cin>>amountPaid;

    }
    cout << "-------------------" <<endl;
    cout << "RECEIPT INFO. " <<endl;
    cout << "NAME :"<<customername <<endl;
    cout << "UNIQUE ID :"<<customerID <<endl;
    cout << "ITEM PURCHASED :"<<itemName <<endl;
    cout << "QUANTITY BOUGTH :" <<quantity<<endl;
    cout << "VAT ON ITEM(S) :" <<vat<<endl;
    cout << "TOTAL COST :" <<totalCost <<endl;
    cout << "TOTAL AMOUNT PAID:"<< amountPaid<<endl;
    if(amountPaid>totalCost)
    {
     cout << "BALANCE:" << balance <<endl;
    }

      }

    break;
    case TABLE:
        {
    string itemName="Table";
    cout <<"How many do you need"<<endl;
    cin>>quantity;
    price=TABLE_PRICE*quantity;
    vat=price*vat;
    totalCost=price+vat;

    cout<<"Cost of item: "<<totalCost<<endl;
    cout<<"Please enter your money: "<<endl;
    cin>>amountPaid;

    if(amountPaid>totalCost)
    {
        balance=amountPaid-totalCost;
    }
    while(amountPaid<totalCost)
    {
        cout<<"Insufficient amount, Please your money should\nbe equal to or greater than GHC" <<totalCost <<endl;
        cout<<"Enter your money again "<<endl;
        cin>>amountPaid;

    }
    cout << "-------------------" <<endl;
    cout << "RECEIPT INFO. " <<endl;
    cout << "NAME :"<<customername <<endl;
    cout << "UNIQUE ID :"<<customerID <<endl;
    cout << "ITEM PURCHASED :"<<itemName <<endl;
    cout << "QUANTITY BOUGTH :" <<quantity<<endl;
    cout << "VAT ON ITEM(S) :" <<vat<<endl;
    cout << "TOTAL COST :" <<totalCost <<endl;
    cout << "TOTAL AMOUNT PAID:"<< amountPaid<<endl;
    if(amountPaid>totalCost)
    {
     cout << "BALANCE:" << balance <<endl;
    }

    }


    }
    cout<<endl;
    cout<<"Do you want to buy another item ? "<<endl;
    cout<<"If yes,enter Y or y to continue if No, enter any key" <<endl;
    cin>>keepgoing;

    }while(keepgoing=='Y' || keepgoing=='y');
    return 0;

}

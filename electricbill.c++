
#include <iostream>
#include <string.h>
using namespace std;

class consumerdetails
{
protected:
    int account_number;
    string name;
    string address;

public:
    consumerdetails() // Default constructor of consumer details
    {
        account_number = 0;
        name = "  ";
        address = "  ";
    }

    void setdataofconsumerdatails() // defining set data function
    {
        fflush(stdin);
        cout << "Enter the name of consumer : ";
        getline(cin, name);
        accountnumber();
        fflush(stdin);
        cout << "Enter the address of the consumer : ";
        getline(cin, address);
    }
    void accountnumber()
    { // defining account number function
        int temp = 0, t;
        cout << "Enter eight digit Account number= ";
        cin >> account_number;
        t = account_number;
        for (int i = 0; t > 0; i++)
        {
            t = t / 10;
            temp++;
        }

        if (temp == 8)
        {
            ;
        }
        else
        {
            cout << "Please ";
            accountnumber();
        }
    }
};

class electricitybill : public consumerdetails // inheriting class of consumerdetails
{
    string month;
    float unit;
    float pay;

public:
    electricitybill() // Default constructor for class electricitybill
    {
        month = " ";

        unit = 0;
        pay = 0;
    }
    void setdataofelctricitybill() // defining setdata function of electricityctricitybill
    {
        setmonth();

        cout << "Enter the consumption of unit by consumer :";
        cin >> unit;
    }
    void setmonth()
    { // defining setmonth function of electricityctricitybill
        int count = 0;
        string a[12];
        a[0] = "january";
        a[1] = "february";
        a[2] = "march";
        a[3] = "april";
        a[4] = "may";
        a[5] = "june";
        a[6] = "july";
        a[7] = "august";
        a[8] = "september";
        a[9] = "october";
        a[10] = "november";
        a[11] = "december";
        cout << "Enter the Bill Month : ";
        cin >> month;
        for (int i = 0; i < 12; i++)
        {
            if (a[i] == month)
            {
                count++;
                break;
            }
        }
        if (count == 1)
        {
            ;
        }
        else
        {
            cout << "please correct ";
            setmonth();
        }
    }
    void checkunit() // function of check unit
    {
        if (100 >= unit)
        {
            cout << "price of electricity unit is 60 paise" << endl;
            pay = 50 + (60 * unit) / 100;
        }
        else if (300 > unit)
        {
            cout << "price of electricity unit is 80 paise" << endl;
            pay = 50 + (80 * unit) / 100;
        }
        else if (unit > 300)
        {
            cout << "price of electricity unit is 90 paise" << endl;
            pay = 50 + ((90 * unit) / 100);
        }
    }

    void checkpay() // function of check pay
    {
        if (pay > 300)
        {
            pay = pay + ((pay * 15) / 100);
        }
    }
    void getdata() // display details of consumer
    {
        system("cls");
        cout<<"\n***************************************************************"<<endl;
        cout << "Name of consumer:  " << name <<endl;
        cout << "Account number of consumer is :" << account_number << endl;
        cout << "Address of consumer is: " << address << endl;
        cout << "Electricity bill of month is " << month << endl;
        cout << "Number of unit consume in month : " << unit << endl;
        cout<<"\n***************************************************************"<<endl;
        cout << ">>Calculating amount..." << endl;
        cout << "Electricity bill Amount is: " << pay << endl;
        cout<<"***************************************************************"<<endl;
    }
};

inline void companyName()
{
    cout << "\n\n\t\t\t\t||****************************||";
    cout << "\n\t\t\t\t||  POWER DISTRIBUTION BOARD  ||\n";
    cout << "\t\t\t\t||****************************||" << endl;
    cout << "\t\t\t\t||contact no.: xxxx-xxxx-xx00 ||\n";
    cout << "\t\t\t\t********************************" << endl;
}

int mainMenu()
{
    cout << "\n  ******************************************" << endl;
    cout << "  ||1.Know unit charges.                  ||" << endl;
    cout << "  ||2.Resister Consumer & Calculate bills.||" << endl;
    cout << "  ||3.EXIT.                               ||" << endl;
    cout << "  ||**************************************||\n\n";
    int num;
    cout << "Enter choice: ";
    cin >> num;
    return num;
}

void unitCharges()
{   cout<<"\n***************************************************************************************\n";
    cout << "\nCharges are: " << endl;
    cout << "\t>>For the 100 or less units : 60 paise per unit + Rs.50 charge." << endl;
    cout << "\t>>For next 200 units : 80 paise per unit + Rs.50 charge." << endl;
    cout << "\t>>Beyond 300 units : 90 paise per unit + 15% additional surcharge + Rs.50 charge." << endl;
    cout<<"\n***************************************************************************************\n";
}

int main()
{
label:
    companyName();
label2:
    int num = mainMenu();
    if (num == 1)
    {
        system("cls");
        unitCharges();
        goto label2;
    }
    else if (num == 2)
    {
        int n;
        cout << "\n>>Register consumer... " << endl;
        cout << "Enter the number of users : ";
        cin >> n;
        cout << "\n>>Enter consumer details... " << endl;
        electricitybill c1[n];

        for (int i = 0; i < n; i++)
        {
            cout << "enter details of consumer of id number :" << i + 1 << endl;
            c1[i].setdataofconsumerdatails();

            c1[i].setdataofelctricitybill();
            c1[i].checkunit();
            c1[i].checkpay();
            c1[i].getdata();
            cout << "_______________" << endl;
        }
        goto label2;
    }
    else if (num == 3)
    {
        system("cls");
        cout << "\nThankyou..." << endl;
        cout << "************" << endl;
    }
    else
    {
        system("cls");
        cout << "\nWrong input...Try again..." << endl;
        goto label;
    }
    return 0;
}
// Travel Agency Task
#include <iostream>
using namespace std;

class Travel_details
{
public:
    void display_details()
    {
        cout << "----------- WELCOME TO TOPS_HEENA-MALEK TRAVEL AGENCY -----------" << endl;
        cout << "POPULAR DESTINATIONS..." << endl;
        cout << "1) AHMEDABAD" << endl
             << "2) GANDHINAGAR" << endl
             << "3) PATAN" << endl
             << "4) MAHESANA" << endl
             << "5) VADODARA" << endl;
        cout << "6) SURAT" << endl
             << "7) ANAND" << endl
             << "8) VALSAD" << endl
             << "9) KATCH" << endl
             << "10) GIRNAR" << endl;
    }
};
class Registration_details : public Travel_details
{
public:
    string name, address, e_mail, u_name;
    int contact, pswd, u_pswd;
    void regi_details()
    {
        cout << "ENTER NAME : ";
        cin >> name;
        cout << "ENTER E_mail : ";
        cin >> e_mail;
        cout << "ENTER Pswd : ";
        cin >> pswd;
        cout << "ENTER Contact : ";
        cin >> contact;
        cout << "ENTER Address : ";
        cin >> address;
        cout << "--------------------------------------------" << endl;
        cout << "Thank You For Registration......." << endl;
    }
};
class Loginpage : public Registration_details
{
public:
    void display_login()
    {
        cout << "Enter user_name/ E_mail : ";
        cin >> u_name;
        cout << endl
             << "Enter u_Pswd : ";
        cin >> u_pswd;

        if (u_name == e_mail && u_pswd == pswd)
        {
            cout << " ACCESS DONE........";
        }
        else
        {
            cout<<"ACCESS DENIED.......";
        }
    }
};

int main()
{

    Loginpage obj;
    obj.display_details();
    char c;
    cout << "DO YOU WANT MEMBERSHIP ? [y/n] " << endl;
    cin >> c;
    if (c == 'y')
    {
        obj.regi_details();
        obj.display_login();
    }
    else if (c == 'n')
    {
        cout << "Thank You For Vising....";
    }
    else
    {
        cout << "You Enter Wrong Input....";
    }
    return 0;
}
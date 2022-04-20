#include <iostream>
#include <conio.h>
#include<windows.h>
using namespace std;

class Bank
{
private:
    int total; // pointing total
    struct person
    { // for storing  different types of datatype
        string name, Id, address;
        int contact, cash;
    } person[100]; // for input number of person
public:
    Bank()
    {
        // constructor
        total = 0; // total initialized 0
    }
    void choice();
    void perData();
    void show();
    void update();
    void search();
    void transactions();
};
int main()
{
    Bank b;
    b.choice();
    b.perData();
    b.show();
    b.update();
    b.search();
    return 0;
}
void Bank ::choice()
{
    char ch;
    while (1)
    { // for infinite loop
        cout << "\n\n Press.. !!" << endl;
        cout << "1. Create a new account" << endl;
        cout << "2. View customers list" << endl;
        cout << "3. Update information of existing account" << endl;
        cout << "4. Check the details of an existing account" << endl;
        cout << "5. For transaction" << endl;
        cout << "6. Remove existing account" << endl;
        cout << "7. Exit" << endl;
        ch = getch();
        switch (ch)
        {
        case '1':
            Bank ::perData();
            break;
        case '2':
            Bank:: show();
            break;
        case '3':
            Bank:: update();
            break;
        case '4':
            Bank:: search();
            break;
        case '5':
            Bank::transactions(); 
            break;

        }
    }
}
void Bank ::perData()
{
    cout << "Enter data of person " << total + 1 << endl; // which person enterd data
    // store all data when user entred data
    cout << "Enter name: ";
    cin >> person[total].name;
    cout << "Id: ";
    cin >> person[total].Id;
    cout << "Address: ";
    cin >> person[total].address;
    cout << "Contact: ";
    cin >> person[total].contact;
    cout << "Total Cash: ";
    cin >> person[total].cash;
    total++;
}
void Bank ::show()
{
    for (int i = 0; i < total; i++)
    {
        cout << "Data of person " << i + 1 << endl;
        cout << "Name: " << person[i].name << endl;
        cout << "ID: " << person[i].Id << endl;
        cout << "Address: " << person[i].address << endl;
        cout << "Contact: " << person[i].contact << endl;
        cout << "Cash: " << person[i].cash << endl;
    }
}
void Bank ::update()
{
    cout << "Enter id of student those data you want to update" << endl;
    for (int i = 0; i < total; i++)
    {
        if (Id == person[i].Id)
        {
            cout << "Previous data" << endl;
            cout << "Data of person " << i + 1 << endl;
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].Id << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;
            cout << "\nEnter new data" << endl;
            cin >> person[total].name;
            cout << "Id: ";
            cin >> person[total].Id;
            cout << "Address: ";
            cin >> person[total].address;
            cout << "Contact: ";
            cin >> person[total].contact;
            cout << "Total Cash: ";
            cin >> person[total].cash;
        }
    }
}
void Bank ::search(){
    cout << "Enter id of student those data you want to search" << endl;
    cin>>Id;
    for (int i = 0; i < total; i++)
    {
        if(Id==person[i].Id){
        cout << "Name: " << person[i].name << endl;
        cout << "ID: " << person[i].Id << endl;
        cout << "Address: " << person[i].address << endl;
        cout << "Contact: " << person[i].contact << endl;
        cout << "Cash: " << person[i].cash << endl;

        }
    }
    
}
void Bank ::transactions(){
    char ch;
    int cash;
    cout << "Enter id of student those data you want to transection" << endl;
    cin>>id;
    for(int i = 0; i < total; i++){
        if(Id == person[i].Id){
            cout << "Name: "<<person[i].name << endl;
            cout<<"Address: "<< person[i].address << endl;
            cout<<"Contact: "<< person[i].contact << endl;
            cout<<"\nExisting Cash "<<person[i].cash<< endl;
            cout<<"Press 1 for deposit: "<<endl;
            cout<<"Press 2 for withdraw: "<<endl;
            ch =getch();
            switch(ch){
                case '1':
                    cout<<"How much tou wat to cash deposit??"<<endl;
                    cin>>cash;
                    person[i].cash =+ cash;
                    cout<<"Your new cash is "<<person[i].cash<< endl;
                break;
                case '2':
                back:
                    cout<<"How much tou wat to cash withdraw?? "<<endl;
                    cin>>cash;
                    if(cash>person[i].cash){
                        cout<<"Your existing cash is just "<<person[i].cash<< endl;
                        Sleep(3000);
                        goto back;
                    }
                    person[i].cash -= cash;
            }
        }
    }
}
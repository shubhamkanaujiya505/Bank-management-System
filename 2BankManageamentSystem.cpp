#include <iostream>
#include <conio.h>
using namespace std;

class Bank{
    private:
        int total; // pointing total
        struct person{// for storing  different types of datatype
            string name,Id,address;
            int contact,cash;
        }person[100]; // for input number of person
    public:
        Bank(){
            // constructor
            total = 0; // total initialized 0
        }
        void choice();
        void perData();
};
int main()
{
    Bank b; 
    b.choice();
    b.perData();
    return 0;
}
void Bank :: choice(){
    char ch;
    while(1){// for infinite loop
    cout<<"\n\n Press.. !!"<<endl;
    cout<<"1. Create a new account"<<endl;
    cout<<"2. View customers list"<<endl;
    cout<<"3. Update information of existing account"<<endl;
    cout<<"4. Check the details of an existing account"<<endl;
    cout<<"5. For transaction"<<endl;
    cout<<"6. Remove existing account"<<endl;
    cout<<"7. Exit"<<endl;
    ch = getch();
    switch(ch){
        case '1': 
        Bank :: perData();
        break;

    }
    }
}
void Bank :: perData(){
    cout<<"Enter data of person"<<total+1<<endl;// which person enterd data
    // store all data when user entred data
    cout<<"Enter name: ";
    cin>>person[total].name;
    cout<<"Id";
    cin>>person[total].Id;
    cout<<"Address";
    cin>>person[total].address;
    cout<<"Contact";
    cin>>person[total].contact;
    cout<<"Total Cash";
    cin>>person[total].cash;
    total++;

}
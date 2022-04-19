#include <iostream>
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
};
int main()
{
    Bank b; 
    b.choice();
    return 0;
}
void Bank :: choice(){
    char ch;
    cout<<"\n\n Press.. !!"<<endl;
    cout<<"1. Create a new account"<<endl;
    cout<<"2. View customers list"<<endl;
    cout<<"3. Update information of existing account"<<endl;
    cout<<"4. Check the details of an existing account"<<endl;
    cout<<"5. For transaction"<<endl;
    cout<<"6. Remove existing account"<<endl;
    cout<<"7. Exit"<<endl;
}
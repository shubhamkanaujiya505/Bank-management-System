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
        void show();
};
int main()
{
    Bank b; 
    b.choice();
    b.perData();
    b.show();
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
    cout<<"Enter data of person "<<total+1<<endl;// which person enterd data
    // store all data when user entred data
    cout<<"Enter name: ";
    cin>>person[total].name;
    cout<<"Id: ";
    cin>>person[total].Id;
    cout<<"Address: ";
    cin>>person[total].address;
    cout<<"Contact: ";
    cin>>person[total].contact;
    cout<<"Total Cash: ";
    cin>>person[total].cash;
    total++;

}
<<<<<<< HEAD
void Bank :: show(){
    for (int i= i = 0; i < total; i++)
    {
        cout<<"Data of person "<<i+1<<endl;
        cout<<"Name: "<<person[i].name<<endl;
        cout<<"ID: "<<person[i].Id<<endl;
        cout<<"Address: "<<person[i].address<<endl;
        cout<<"Contact: "<<person[i].contact<<endl;
        cout<<"Cash: "<<person[i].cash<<endl;
    }

}

=======
class main{
    private:
    int a;
    char name;
}
>>>>>>> 933cc0f2ee9e84a49c759d01c52b9708aa903d4f

#include<iostream>
#include<string.h>
using namespace std;


struct product{
    int id;
    char name[256];
    float price;
    int quantity;
};

int main()
{   
    while(true)
    {
        int ch;
        cout << "1 for customer billing"<<endl<<"-1  for exiting";
        cin >> ch;

    switch(ch)
    {
    
    case 1:{
    int n;
    cout <<endl << "enter number of different products to be bought";
    cin >> n;
    struct product prod[n];
    for(int i = 0; i < n; i++)
    {
        cout << "enter product id :";
        cin >> prod[i].id;
        cout << endl;
        cout << "enter product name :";
        cin >> prod[i].name;
        cout << endl;
        cout << "enter product price :";
        cin >> prod[i].price;
        cout << endl;
        cout << "enter product quantity :";
        cin >> prod[i].quantity;
        cout << endl;
    }

    cout<< "****************************************************************"<<endl;
    cout<< "BILL"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< i+1<<". "<<prod[i].id<<" "<<prod[i].name<<" "<<prod[i].quantity<<" : "<<prod[i].quantity*prod[i].price<<endl;
    }
    break;
    cout<< "****************************************************************"<<endl;
}
case -1: {
    cout<<"exiting"<<endl;
    exit(0);
}

default: {
    cout<<"invalid choice"<<endl;
    break;
}
    }
    }
}

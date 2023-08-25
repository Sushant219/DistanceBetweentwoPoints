#include <iostream>
using namespace std;

class Shop
{
    // Creating Shop Variable / Members With The Size.
    int itemId[100];
    int itemPrice[100];
    int Sl_No;// This Var Is Used To Showing The Next Serial Number Of The Items

public:
    void initCounter(void) // Creating The Function Called Initialize The Serial Number And Set Its Value With 0 To Start From 0
    { 
    Sl_No = 0; 
    }
    void setPrice(void); //  In This Function We Can Able To Set Our Items Price Acording To Our Need.
    void displayPrice(void); // In This Function We Can Show The Prices Of Our Items To Consumer / Customers.
    void Totalprice (void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " <<  Sl_No + 1 << endl; // Taking Input With Items Serial Number
    cin >> itemId[Sl_No];
    cout << "Enter Price of your item" << Sl_No + 1<< endl;
    cin >> itemPrice[Sl_No]; // Taking Input Of Items Price With Serial Number
    Sl_No++;
}

void Shop :: displayPrice(void)
{
    for (int i = 0; i < Sl_No; i++) // To Show Each Of Items Price I Use for loop.
    {
    
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl; // Here i Am Showing The Item Id With That Item Price
       
    }
    
}

void Shop :: Totalprice(void)
{
    int sum = 0 ;

    for (int j = 1 ; j <= Sl_No; j++)
    {
        sum = itemPrice [j] + itemPrice[j++] ;
        //cout << "The Total Price Of All Items Is : " <<(itemPrice[j]) + (itemPrice[j++])<<endl;
        cout<< "The Total Price Is : "<<sum<<endl;
        exit (0) ;
    }
    
}


int main()
{
    int ip ;
    
    Shop dukana; // Creating The Object Of Class Shop.
    dukana.initCounter();
    cout<< "Enter The Number Of Items Yo Want : "<<endl;
    cin>> ip;
    for (int i = 0; i < ip; i++)
    {
        dukana.setPrice();

    }
    
    dukana.displayPrice();
    dukana.Totalprice();
    return 0;
}

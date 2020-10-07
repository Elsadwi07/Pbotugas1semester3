#include<iostream>
#include <string>
using namespace std;

class Invoice
{
 public:
  Invoice( string, string, int, int );
  void setPartNumber( string );
  string getPartNumber();
  void setPartDescription(string);
  string getPartDescription();
  void setItemQuantity(int);
  int getItemQuantity();
  void setItemPrice(int);
  int getItemPrice();
  int getInvoiceAmount();
 private:
  string partNumber;
  string partDescription;
  int itemQuantity;
  int itemPrice;
};
Invoice::Invoice( string number, string description, int quantity, int price )
{
 partNumber=number;
 partDescription=description;
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
void Invoice::setPartNumber( string number)
{
 if ( number.length() <= 25 )
  partNumber = number;
 if ( number.length() > 25 )
 {
  partNumber = number.substr( 0, 25 );
  cout << "Name \"" << number <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
 }
}
void Invoice::setPartDescription(string description )
{
 if ( description.length() <= 25 )
  partDescription = description;
 if ( description.length() > 25 )
 {
  partDescription = description.substr( 0, 25 );
  cout << "Name \"" << description <<"\" exceeds maximum length (25).\n"<< "Limiting partDescription to first 25 characters.\n" << endl;
 }
}
void Invoice::setItemQuantity(int quantity )
{
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
}
void Invoice::setItemPrice(int price )
{
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
string Invoice::getPartNumber()
{
 return partNumber;
}
string Invoice::getPartDescription()
{
 return partDescription;
}
int Invoice::getItemQuantity()
{
 return itemQuantity;
}
int Invoice::getItemPrice()
{
 return itemPrice;
}
int Invoice::getInvoiceAmount()
{
 return itemQuantity*itemPrice;
}
int main()
{
 Invoice Invoice1("edw07","pengukur Gergaji",10,35000);
 Invoice Invoice2("edw02","Gergaji",5,16000);
 cout << "Invoice1's nomor bagian awal adalah: "<< Invoice1.getPartNumber()<< "\ndan deskripsi bagian adalah: "<< Invoice1.getPartDescription()<<endl;
 cout<< "kualitas per item adalah: "<< Invoice1.getItemQuantity()<< "\nharga per item adalah: "<< Invoice1.getItemPrice()<< endl;
 cout<<"Invoice1's jumlah totalnya: "<<Invoice1.getInvoiceAmount()<<endl<<endl;
 cout << "Invoice2's nomor bagian awal adalah: "<< Invoice2.getPartNumber()<< "\ndan deskripsi bagian adalah: "<< Invoice2.getPartDescription()<<endl;
 cout<< "kualitas per item adalah: "<< Invoice2.getItemQuantity()<< "\nharga per item adalah: "<< Invoice2.getItemPrice()<< endl;
 cout<<"Invoice2's jumlah totalnya: "<<Invoice2.getInvoiceAmount()<<endl;
}

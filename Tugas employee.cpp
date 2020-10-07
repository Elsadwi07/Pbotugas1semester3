#include<iostream>
#include <string>
using namespace std;

class Employee
{
 public:
  Employee( string, string, int );
  void setFirstName( string );
  string getFirstName();
  void setLastName(string);
  string getLastName();
  void setMonthlySalary(int);
  int getMonthlySalary();
 private:
  string firstName;
  string lastName;
  int monthlySalary;
};
Employee::Employee( string first, string last, int salary)
{
 firstName=first;
 lastName=last;
 if(salary>0)
  monthlySalary=salary;
 else
 {
  monthlySalary=0;
  cout<<"Initial salary was invalid."<<endl;
 }
}
void Employee::setFirstName( string first)
{
 if ( first.length() <= 25 )
  firstName = first;
 if ( first.length() > 25 )
 {
  firstName = first.substr( 0, 25 );
  cout << "Name \"" << first <<"\" exceeds maximum length (25).\n"<< "Limiting firstName to first 25 characters.\n" << endl;
 }
}
void Employee::setLastName(string last )
{
 if ( last.length() <= 25 )
  lastName = last;
 if ( last.length() > 25 )
 {
  lastName = last.substr( 0, 25 );
  cout << "Name \"" << last <<"\" exceeds maximum length (25).\n"<< "Limiting lastName to first 25 characters.\n" << endl;
 }
}
void Employee::setMonthlySalary(int salary )
{
 if(salary>0)
  monthlySalary=salary;
 else
 {
  monthlySalary=0;
  cout<<"Initial salary was invalid."<<endl;
 }
}
string Employee::getFirstName()
{
 return firstName;
}
string Employee::getLastName()
{
 return lastName;
}
int Employee::getMonthlySalary()
{
 return monthlySalary;
}
int main()
{
 Employee Employee1("Elsa","Dwi",2500000);
 Employee Employee2("Fachreza","Neviyani",2000000);
 cout << "Nama karyawan 1: "<< Employee1.getFirstName()<<" "<< Employee1.getLastName()<<endl;
 cout<< "gaji bulanan: "<< Employee1.getMonthlySalary()<< " dan gaji tahun lalu: "<< Employee1.getMonthlySalary()*12<< endl;
 cout<<"setelah kenaikan 10%:"<<endl;
 int incrementedSalary1=Employee1.getMonthlySalary();
 incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
 Employee1.setMonthlySalary(incrementedSalary1);
 cout<< "gaji bulanan karyawan 1: "<< Employee1.getMonthlySalary()<< " dan gaji tahunan: "<< Employee1.getMonthlySalary()*12<<endl<<endl;
 
 cout << "Nama karyawan2: "<< Employee2.getFirstName()<<" "<< Employee2.getLastName()<<endl;
 cout<< "gaji bulanan: "<< Employee2.getMonthlySalary()<< " dan gaji tahun lalu: "<< Employee2.getMonthlySalary()*12<< endl;
 cout<<"setelah kenaikan 10%:"<<endl;
 int incrementedSalary2=Employee1.getMonthlySalary();
 incrementedSalary2=incrementedSalary2+(incrementedSalary2*0.1);
 Employee2.setMonthlySalary(incrementedSalary2);
 cout<< "gaji bulanan karyawan 2: "<< Employee1.getMonthlySalary()<< " dan gaji tahun lalu: "<< Employee1.getMonthlySalary()*12<< endl;
}

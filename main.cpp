#include <iostream>

#include "./projectfiles/Person.h"
#include "./projectfiles/Twitter.h"
#include "./projectfiles//Status.h"
#include "./projectfiles/Utility.h"
#include "./projectfiles/Accum.h"


using std::cout;
using std::endl;
using std::string;



bool isPrime(int x){
    bool prime = true;
    for (int i = 2; i <= x/i ; i=i+1) {
        int factor = x/i;
        if(factor * i == x){
            cout<< "factor found : " << factor << endl;
            prime=false;
            break;
        }

    }
    return prime;

}
bool is2MorePrime(int x ){
    x=+2;
    return isPrime(x);

}


template <class T> T deMax(const T &t1,const T &t2){
    return t1 < t2?t2:t1;
}





int main() {


     Person p1("Ligaye" , "Robert" , 123 );
     Person p2("Ligaroba" , "Robert " , 456 );

     // Const and Indirection
     int cpi=2;

     int* ptr1 = &cpi;

     int* const pc=ptr1 ; //pointer to a const

     int const * cpI =ptr1; //const to Pointer

     int const * const crazy =ptr1; // const pointer to const


     //  References
     int a =3;
     cout<<" a " << a <<endl;
     int& rA=a;
     rA=5;
     cout<<" a is : " << a << endl;

     Person p3("Kate " , "Gregory" , 123 );
     Person& rP3 = p3;
     rP3.setArbitraryNumber(345);
     cout<<" rP3 " << rP3.getName() << " " << rP3.getAbNumber()<<endl;

     // Pointers

    int* pA =&a;
    *pA=4;
    cout<<" a " << a <<endl;
    int b=100;
    pA=&b;
    (*pA)++;
    cout<<" a is : " << a << ", pA " << *pA<<endl;

    Person* pP3 =&p3;
    (*pP3).setArbitraryNumber(200);
    pP3->setArbitraryNumber(250);
    cout<<" pP3 " << (*pP3).getName() << " " << (*pP3).getAbNumber()<<endl;
    cout<<" pP3 " << pP3->getName() << " " << pP3->getAbNumber()<<endl;



     // Template Class Demo
     Accum<int> adding(0);
     adding+=3;
     adding+=5;
     cout<< " Accum<int> total " << adding.getTotal() << endl;

     Accum<string> concat("");
     concat+="Hellow" ;
     concat+=" world";
    cout<< " Accum<string> concat " << concat.getTotal() << endl;

    Accum<Person> people(0);
    people+=p1 ;
    people+=p2;
    cout<< " Accum<people> concat " << people.getTotal() << endl;


     // Template Function Demo
      cout<< " 33 Max 44 " << deMax(33,44)<<endl;
      cout<< " 3.3 Max 4.4 " << deMax<double>(3.3,4.4)<<endl;
      string s1="Hellow " ;
      string s2=" World";
      cout<< " String  " << deMax(s1,s2)<<endl;
      cout<< " Max of Class " << p1.getName() << " And " << p2.getName()<<
      "Max is " << deMax(p1,p2).getName() <<endl;

     /*
     // Operator Overloading

        cout << "P1" << endl;
        if(!(p1<p2))
             cout<< " Not " <<endl;
        cout<< " Less than P2 "<< endl;

        cout << "P1" << endl;
        if(!(p1<300))
            cout<< " Not " <<endl;
        cout<< " Less than 300 "<< endl;

        cout << "300 " << endl;
        if(!(300<p1))
            cout<< " Not " <<endl;
        cout<< " Less than P1 "<< endl;

        cout << "300 " << endl;
        if(!(300>p1))
            cout<< " Not " <<endl;
        cout<< " Greater than P1 "<< endl;


        // Scope testing
        {
        Twitter t1("ligs " , " Otis " , 21,"@ligaroba");
            string name = p1.getName();
            cout<<" Names : " << name <<endl;
        }
     cout<<"After InnerMost Block"<<endl;

     string name = p1.getName();
     //int i = p1.arbitraryNumber;

     cout<<" Full Name : " << name <<endl;

     // Enum Implementation

     Status s = Status::Pending;
     s=Status::Approved;

     FileError fe = FileError::notFound;
     fe =FileError::ok;

     NetworkError ne = NetworkError::disconnected;
     ne=NetworkError::ok;

     */


    return 0;
}

#include <iostream>

#include "./projectfiles/Person.h"
#include "./projectfiles/Twitter.h"
#include "./projectfiles//Status.h"

using std::cout;
using std::endl;
using std::string;


int main() {

     Person p1("Ligaye " , " Robert " , 21 );
        {
            Twitter t1("ligs " , " Otis " , 21,"@ligaroba");
            string name = p1.getName();
            cout<<" Names : " << name <<endl;
        }
     cout<<"After InnerMost Block"<<endl;

     string name = p1.getName();
     //int i = p1.arbitraryNumber;

     cout<<" Full Name : " << name <<endl;

     Status s = Status::Pending;
     s=Status::Approved;

     FileError fe = FileError::notFound;
     fe =FileError::ok;

     NetworkError ne = NetworkError::disconnected;
     ne=NetworkError::ok;

    return 0;
}

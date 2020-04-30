//
// Created by RLIGAYE on 4/27/2020.
//

#include "iostream"
#include "Person.h"
/* Before the Constructor body starts  to run all the member variables
 * are created and if they are integers that's fine you may define them on the body
 * so in cases of strings they will be constructed to their default values on the
 * Constructor initializer then you'll override that with different values in the Constructor body
 * Which cause double work for the same thing.
*
*/
Person::Person(std::string firstName, std::string lastName, int arbitraryNumber)
       : // this colon introduces initializers
       firstName(firstName),
        lastName(lastName),
        arbitraryNumber(arbitraryNumber){
        // Constructor Body : Normal to be empty cause all the work was done on initializers
        std::cout<< "Constructing ... " << std::endl;
        std::cout << getName() << " " << getAbNumber() << std::endl;
}
Person::Person() :arbitraryNumber(10){
    std::cout<< "Constructing ... " << std::endl;
    std::cout << getName() << " " << getAbNumber() << std::endl;

}
std::string Person::getName() const {
   return firstName + " " + lastName;
}

//Compare member function with an integer
bool Person::operator<(int comparator) {

    return getAbNumber()<comparator;
}
// Comparing two member functions that the function was called on another
bool Person::operator<(Person const& p) const {
   return getAbNumber()<p.getAbNumber();
}
// Compares i with pass by reference of p.getABNumber()
bool operator>(int i , const Person &p)  {
    return i>p.getAbNumber();
}

bool operator<(int i,const Person &p){
    return i<p.getAbNumber();
}
/*
bool operator<(const Person &p1,const Person &p2){
    return p1<p2;
}*/


Person::~Person() {
    std::cout<< "Destructing ... " << std::endl;
    std::cout << getName() << " " << getAbNumber() << std::endl;
};

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
        std::cout << firstName << " " << lastName << " " << arbitraryNumber << std::endl;
}
Person::Person() :arbitraryNumber(10){
    std::cout<< "Constructing ... " << std::endl;
    std::cout << firstName << " " << lastName << " " << arbitraryNumber << std::endl;

}
std::string Person::getName() {
   return firstName + " " + lastName;
}
Person::~Person() {
    std::cout<< "Destructing ... " << std::endl;
    std::cout << firstName << " " << lastName << " " << arbitraryNumber << std::endl;
};

//
// Created by RLIGAYE on 4/27/2020.
//

#include "Twitter.h"
#include <iostream>
#include <string>


using std::cout;
using std::endl;

Twitter::Twitter(std::string fName,
        std::string lName,
        int abNumber,
        std::string handle)
        :
        Person(fName,lName,abNumber),
        twitterHandle(handle){

    cout<< " Constructing twitter " << twitterHandle << endl;

}

Twitter::~Twitter() {
    cout<< " deconstructing twitter " << twitterHandle << endl;
}


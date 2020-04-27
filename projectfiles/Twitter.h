//
// Created by RLIGAYE on 4/27/2020.
//

#ifndef ALGORITHMS_TWITTER_H
#define ALGORITHMS_TWITTER_H

#pragma once
#include "Person.h"
#include <string>

class Twitter : public Person {
private :
    std::string twitterHandle;
public :
    Twitter(std::string fName,std::string lName,int abNumber,
    std::string twitterHandle) ;
    ~Twitter();
};


#endif //ALGORITHMS_TWITTER_H

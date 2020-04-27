//
// Created by RLIGAYE on 4/27/2020.
//
#ifndef ALGORITHMS_PERSON_H
#define ALGORITHMS_PERSON_H

#pragma once
#include <string>

class Person{
private:
    std::string firstName;
    std::string lastName;
    int arbitraryNumber;

public:
    Person(std::string firstName,
            std::string lastName,
            int arbitraryNumber );

    Person(); // default Constructor
    ~Person(); // Destructor


public:
    std::string getName();
};

#endif //ALGORITHMS_PERSON_H

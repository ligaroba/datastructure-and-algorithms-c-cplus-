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

    //friend bool operator<(int i, const Person &p);

public:
    Person(std::string firstName,
            std::string lastName,
            int arbitraryNumber );

    Person(); // default Constructor
    ~Person(); // Destructor


public:
    std::string getName() const ;
    int getAbNumber() const {return  arbitraryNumber;}
    void setArbitraryNumber(int number ) {arbitraryNumber=number;}
    // Operator OverLoading
    bool operator <(int comparator);
    bool operator <( const Person &p) const;



};

//Free Function used to compare (300<MyClass) where integer is 1st
bool operator>(int i , Person const& p);
//Less than
bool operator<(int i , Person const& p);

//bool operator<(Person const& p1 , Person const& p2);

#endif //ALGORITHMS_PERSON_H

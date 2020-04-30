//
// Created by RLIGAYE on 4/28/2020.
//

#ifndef ALGORITHMS_ACCUM_H
#define ALGORITHMS_ACCUM_H

template  <class T>
class Accum {
private :
    T total;
public :
    Accum(T start): total(start){};
    T operator+=(T const& t) {return total=total+t;};
    T getTotal() const {return total;};
};


// Template Specialization that handle a specific function from a generic
// template
template  <>
class Accum <Person>{
private :
    int total;
public :
    Accum(int start): total(start){};
    int operator+=(Person const& t) {return total=total+t.getAbNumber();};
    int getTotal() const {return total;};
};

#endif //ALGORITHMS_ACCUM_H

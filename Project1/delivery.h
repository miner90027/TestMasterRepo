/*
 * delivery.h
 * Aleks McCormick
 * 2021/09/01
 * Fall 2021 CS 311
 * Header file for Delivery class
 */

#ifndef FALL2021_CS311_DELIVERY_H
#define FALL2021_CS311_DELIVERY_H

#include <string> // for std::string
#include <cassert> // for assert

class Delivery {
    /*  Constructors */
public:
    Delivery(): Delivery("UNSPECIFIED", 0, 1)
    {}

    Delivery(std::string prdct, int qunt, int mon)
    {
        setProduct(prdct);
        setQuantity(qunt);
        setMonth(mon);
    }

    /*  Set data members */
    void setProduct(std::string prdct){
        _product = prdct;
    }

    void setQuantity(int qunt){
        _quantity = qunt;
    }

    void setMonth(int mon){
        _month = mon;
    }

    /*  Get data members */
    std::string getProduct(){
        return _product;
    }

    int getQuantity(){
        return _quantity;
    }

    int getMonth(){
        return _month;
    }

    /*  Data members */
private:
    std::string _product;
    int _month;
    int _quantity;
};


#endif //FALL2021_CS311_DELIVERY_H

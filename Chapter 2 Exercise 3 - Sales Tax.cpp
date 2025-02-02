// Chapter 2 Exercise 3 - Sales Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    int purchase = 95;
    float sateSalesTax = .04,
        countySalesTax = .02;
    //set decimal percision to 2 places after the decimal point. Ex 0.00
    cout << setprecision(2) << fixed << endl;

    cout << "The total state sales tax on $95 dollar purchase is $";
    cout << purchase * sateSalesTax << endl;

    cout << "The total county sales tax on $95 dollar purchase is $"; 
    cout << purchase * countySalesTax << endl << endl; 

    return 0;
}





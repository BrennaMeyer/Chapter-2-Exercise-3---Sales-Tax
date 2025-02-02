// Chapter 2 Exercise 3 - Sales Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int purchase;
    int stateSalesTax;
    int countySalesTax;

    int awmser;
    cout << "Please enter intial purchase:"; 
    cin >> purchase; 
    cout << "Please enter the states sales tax:";
    cin >> stateSalesTax;
    cout << "Please enter the county sales tax:";
    cin >> countySalesTax;

    cout << "The total state sales tax dollar purchase is $";
    cout << purchase * stateSalesTax << endl;

    cout << "The total county sales tax dollar purchase is $";
    cout << purchase * countySalesTax << endl << endl;

    return 0;
}
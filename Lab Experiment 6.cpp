// Lab Experiment 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Author:       Christopher Parker, cjp5907, Lab Day & Time
//Class :       CMPSC121
//Experiment:   02
//File:         P:/compsc121/experiments/exp02.cpp
//Purpose:      Division modulo division

//Academic Integrity Affidavit

/*I certify that, this program code is my work.Others may have
assited me with planningand concepts, but the coe was written,
solely, by me.

I understand that submitting code which is totally or partially
the product of other individuals is a violation of the Academic
Integrity Policy and accepted ethical precepts.falsified
execution results are also results of improper activities.Such
violations may result in zero credit for the assignment, reduced
credit for the assignment, or course failure.
*/

/*You are tasked with writing a program to process sales of a certain commodity. Its price is volatile 
and changes throughout the day. the input will come from the keyboard and will come from the keyboard
and be in the form of items and unit price:
36  9.50

Which means there was a sale of 36 units at 9.50. Your program should read in the transactions
(Enter at least 10 of them). Inicate the end of the list by entering -99 0. after the data is 
read, display number of transactions, total units sold, average units per order, largest 
transaction amount, smallest transaction amount, total revenue and average revenue per order.
*/


#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

    double unitPrice;
    int units;
    int totalUnits = 0;
    double averageUnits;
    double tempCostBig = 0;
    double tempCostSmall = 0;
    double largeTemp, smallestTemp = 0;
    double totalRevenue = 0;
    double averageRevenue;

    int transactions = 1;

    cout << "Enter transactions -99 0 to stop" << endl;

    do {
        cout << "Transaction #" << transactions << ":";
        cin >> units >> unitPrice;
    }
        totalUnits += units;
   
        if (units == -99 && unitPrice == 0) {
            transactions -= 1;
            totalUnits += 99;

        }
        else {
            tempCostBig = units * unitPrice;
            tempCostSmall = units * unitPrice;
        }

        totalRevenue += tempCostBig;
        transactions++;

     while (units != -99 && unitPrice != 0);


    transactions--;
    averageUnits = (double)totalUnits / (double)transactions;
    averageRevenue = totalRevenue / 10.00;

    cout << "Transaction Processing Report" << endl;
    cout << "Transactions processed:  " << setw(10) << transactions << endl;
    cout << "Units sold:  " << setw(23) << totalUnits << endl;
    cout << "Average units per order;  " << setw(15) << fixed << setprecision(2) << averageUnits << endl;
    cout << "Largest Transaction; " << setw(15) << setprecision(5) << largeTemp << endl;
    cout << "Smallest Transaction:  " << setw(15) << setprecision(5) << smallestTemp << endl;
    cout << "Total Revenue;  " << setw(15) << setprecision(2) << totalRevenue << endl;
    cout << "Average Revenue:  " << setw(15) << setprecision(2) << averageRevenue << endl;
}
    
    



return 0;
}


//
//  PROBLEM1.cpp
//  HOMEWORK
//
//  Created by Mj Monforte on 21/04/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    char package;
    int time, totalAmount, extraHours;
    
    cout << "Subscription Packages per month:" << endl;
    cout << "A: For P995 -- 10 hours of access. Additional hours are P20/hour." << endl;
    cout << "B: For P1495 -- 20 hours access. Additional hours are P10/hour." << endl;
    cout << "C: For P1995 -- unlimited access." << endl;
    cout << ' ' << endl;
    cout << "Enter the letter of your purchased package: "; cin >> package;
    cout << "Enter number of hours used: "; cin >> time;
    cout << ' ' << endl;
    
    switch(package)
    {
        case 'A':
        case 'a':
            if(time<=10)
            {cout << "Total Amount Due: P995";}
           else
           {extraHours = (time - 10) * 20;
                totalAmount = 995 + extraHours;
               cout << "Total Amount Due: P" << totalAmount;}
            break;
        case 'B':
        case 'b':
            if(time<=20)
            {cout << "Total Amount Due: P1495";}
            else
            {extraHours = (time - 20) * 10;
                totalAmount = 1495 + extraHours;
                cout << "Total Amount Due: P" << totalAmount;}
            break;
        case 'C':
        case 'c':
            cout << "Total Amount Due: P1995";
            break;
    }
    cout << ' ' << endl;
    return 0;
}

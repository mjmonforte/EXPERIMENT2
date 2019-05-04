//
//  PROBLEM2.cpp
//  HOMEWORK
//
//  Created by Mj Monforte on 21/04/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int demandCharge, lateCharge;
    double unpaidBal, gallons, waterBill, consumptionCharge;
    
    demandCharge = 35;
    lateCharge = 20;
    consumptionCharge = 1.10;
    
    cout << "Water Consumption\n\n";
    cout << "Enter number of gallons consumed recently and during the previous month: "; cin >> gallons;
    cout << "Enter unpaid balance: "; cin >> unpaidBal;
    
    if(unpaidBal>0)
    {
        waterBill = unpaidBal + demandCharge + lateCharge + (consumptionCharge * gallons);
        cout << "Total Water Bill: P" << waterBill;
    }
    else
    {
        waterBill = demandCharge + (consumptionCharge * gallons);
        cout << "Total Water Bill: P" << waterBill;
    }
    cout << ' ' << endl;
    cout << "Thank your for your transaction!\n";
    return 0;
}

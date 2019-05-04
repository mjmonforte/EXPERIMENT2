//
//  PROBLEM7.cpp
//  HOMEWORK
//
//  Created by Mj Monforte on 25/04/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int s, counter, num;
    
    cout << "Enter a number: "; cin >> num;
    
    while (num>0)
    {
        for (s=0, counter=1; counter<=num; counter++)
            s+=counter;
        
        cout << "The sum of 1 to " << num << " is: " << s << ' ' << endl;
        cout << "Please enter a number: ";
        cin >> num;
    }
    
    cout << ' ' << endl;
    cout << "Thank You!";
    return 0;
}

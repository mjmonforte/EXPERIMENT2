//
//  PROBLEM6.cpp
//  HOMEWORK
//
//  Created by Mj Monforte on 25/04/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include<iostream>

using namespace std;

int main()
{
    int n = 22, c, first = 0, second = 1, next;
    
    cout << "Fibonacci numbers: \n" << endl;
    
    for ( c = 0 ; c < n ; c++ )
    {
        if ( c <= 1 )
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << "," ;
    }
    
    return 0;
}

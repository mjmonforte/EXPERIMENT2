//
//  PROBLEM9.cpp
//  HOMEWORK
//
//  Created by Mj Monforte on 25/04/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int row, column;
    
    cout << "How many rows: "; cin >> row;
    cout << "How many columns: "; cin >> column;
    
    for(int i=0;i<row;i++)
    {
        for(int j=column;j>0;j--)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
    
}

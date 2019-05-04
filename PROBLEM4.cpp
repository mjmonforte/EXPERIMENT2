//
//  PROBLEM4.cpp
//  HOMEWORK
//
//  Created by Mj Monforte on 21/04/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    double firstNo, secondNo, thirdNo;
    
    cout << "Input three numbers\n";
    cout << "Enter First Number: "; cin >> firstNo;
    cout << "Enter Second Number: "; cin >> secondNo;
    cout << "Enter Third Number: "; cin >> thirdNo;
    cout << ' ' << endl;
    
    if(firstNo>secondNo && firstNo>thirdNo)
    cout << "The LARGEST of the three numbers is " << firstNo << '.' << endl;
    else if(secondNo>firstNo && secondNo>thirdNo)
    cout << "The LARGEST of the three numbers is " << secondNo << '.' << endl;
    else if(thirdNo>firstNo && thirdNo>secondNo)
    cout << "The LARGEST of the three numbers is " << thirdNo << '.' << endl;
    else if((firstNo==secondNo) && secondNo>thirdNo)
    cout << "The LARGEST of the three numbers is " << firstNo << '.' << endl;
    else if((secondNo==thirdNo) && thirdNo>firstNo)
    cout << "The LARGEST of the three numbers is " << secondNo << '.' << endl;
    else if((thirdNo==firstNo) && firstNo>secondNo)
    cout << "The LARGEST of the three numbers is " << thirdNo << '.' << endl;
    else
    cout << "The LARGEST of the three numbers is " << firstNo << '.' << endl;
    
    return 0;
    
}

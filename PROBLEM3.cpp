//
//  PROBLEM3.cpp
//  HOMEWORK
//
//  Created by Mj Monforte on 21/04/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    const float z = 2.5;
    int x,y;
    float V;
    
    
    cout << "Enter a value for x: "; cin >> x;
    cout << "Enter a value for y: "; cin >> y;
    
    if(x==1)
    {
        if(y>1 && y<5){
            V = x * y * z;
            cout << "V= " << V;}
        else if(y>=5){
            V = (x + (y/z));
            cout << "V= " << V;}
        else{
            V = x + y +z;
            cout << "V= " << V;}
    }
    
    else if(x==2)
    {
        if(y<=5){
            V = abs((x -y) / z);
            cout << "V= " << V;}
        else if(y>5){
            V = (x - sqrt(y +z));
            cout << "V= " << V;}
        else{
            V = x + y +z;
            cout << "V= " << V;}
    }
    
    else
    {
        V = x + y + z;
        cout << "V= " << V;
    }
    
    
    cout << ' ' << endl;
    return 0;
}

//
//  main.cpp
//  Birthday Cake Candles
//
//  Created by Parul Diwakar on 27/10/20.
//
/*Problem: You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
Example
 candles = [4,4,1,3]
The maximum height candles are  units high. There are  of them, so return . */


#include <iostream>
using namespace std;


int main() {
    long long n, MaxElement;
    cin >> n;
    long long candles[n];
    int count = 0;
    for(int i = 0; i < n; i++)
        cin >> candles[i];
    MaxElement = *max_element (candles, candles + n);
    
    for(int i = 0; i < n; i++){
        if (candles[i] == MaxElement)
            count++;
    }
    
    cout << count;
    return 0;
}

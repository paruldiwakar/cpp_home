//
//  main.cpp
//  Sub-array Division(Chocolate Bar Sliding window)
//
//  Created by Parul Diwakar on 27/10/20.
//

#include <iostream>
using namespace std;

int birthday(int s[], int n, int date, int month){
    int count = 0;
    
    if (n < month)
        return 0;
    
    for(int i = 0; i < (n - month +1); i++){
        int current_sum = 0;
        for (int j = 0; j < month; j++){
            current_sum = current_sum + s[i + j];
        }
        if (current_sum == date)
            count++;
    }
    
    return count;
}

int main(int argc, const char * argv[]) {
    
    int n, date, month;
    cin >> n;
    int s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    cin >> date >> month;
    cout << birthday(s, n, date, month);
    return 0;
}

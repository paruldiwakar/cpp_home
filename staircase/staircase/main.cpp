//
//  main.cpp
//  staircase
//
//  Created by Parul Diwakar on 26/10/20.
//

#include <iostream>
#include <iomanip>
using namespace std;

//    #
//   ##
//  ###
// ####
//#####

int main() {
    int n;
    cin >> n;
    for(int i = 0, space = n; i <=n && space > 0; i++, space--){
        cout << setw(space);
        for(int j = 0; j <= i; j++){
            cout << "#";
        }
        cout << "\n";
    }
    
    return 0;
}

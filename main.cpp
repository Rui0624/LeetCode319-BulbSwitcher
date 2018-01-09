//
//  main.cpp
//  LeetCode319_BulbSwitcher
//
//  Created by Rui on 1/8/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


class Solution {
public:
    int bulbSwitch(int n) {
        int res = 1;
        
        while(res * res <= n) //square of res if smaller than n, which means the res-th bulb will be on;
        {
            res++;
        }
        
        return res - 1;
    }
};

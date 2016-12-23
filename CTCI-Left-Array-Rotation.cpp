//
//  main.cpp
//  CTCI-Left-Array-Rotation
//
//  Created by Hye Sun Hong on 12/23/16.
//  Copyright © 2016 Hyesun. All rights reserved.
//



//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    
    /* while (k>0){
     int temp = a[0];
     for (int i=0; i<n-1; i++){
     a[i] = a[i+1];
     }
     a[n-1] = temp;
     k--; // subtracts k one at a time everytime it runs through the loop
     };
    return a; */
    
    
    vector<int> result(n);
    
    // Result[0:n-k-1] should be holding a[k:n-1]
    for (int x=0; x<n-k; x++){
        result[x] = a[k+x];
    };
    
    // Result[n-k:n-1] should hold a[0:k-1];
    for (int y=0; y<k; y++ ){
        result[y+n-k] = a[y];
    }
    return result;
   
    
}

int main(){
    int n;
    int k;
   // cin >> n >> k;
    n = 6; k = 5;
    vector<int> a(n);
/*    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
     }*/
    a = { 1, 2, 3, 4, 5, 6 };
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}

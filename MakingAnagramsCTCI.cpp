//
//  MakingAnagramsCTCI.cpp
//  
//
//  Created by Hye Sun Hong on 12/25/16.
//
//
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

int number_needed(string a, string b) {
    int s;
    int e; // start end indices
    int asize = a.size();
    int loc;
    
    loc = a.find(b[0]);
    return loc;
    //      http://stackoverflow.com/questions/651497/how-to-do-stdstring-indexof-in-c-that-returns-index-of-matching-string
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

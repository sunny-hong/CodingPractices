//
//  MakingAnagramsCTCI.cpp
//  
//
//  Created by Hye Sun Hong on 12/25/16.
//
//

/*Check out the resources on the page's right side to learn more about strings. The video tutorial is by Gayle Laakmann McDowell, author of the best-selling interview book Cracking the Coding Interview.
 
 
 Alice is taking a cryptography class and finding anagrams to be very useful. We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.
 
 Alice decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number?
 
 Given two strings,  and , that may or may not be of the same length, determine the minimum number of character deletions required to make  and  anagrams. Any characters can be deleted from either of the strings.
 
 This challenge is also available in the following translations:
 
 Chinese
 Russian
 Input Format
 
 The first line contains a single string, .
 The second line contains a single string, .
 
 Constraints
 1<=|a|, |b| <= 10^4
 It is guaranteed that  and  consist of lowercase English alphabetic letters (i.e.,  through ).
 Output Format
 
 Print a single integer denoting the number of characters you must delete to make the two strings anagrams of each other.
 
 Sample Input
 
 cde
 abc
 
 Sample Output
 
 4

 Explanation
 
 We delete the following characters from our two strings to turn them into anagrams of each other:
 
 Remove d and e from cde to get c.
 Remove a and b from abc to get c.
 We must delete  characters to make both strings anagrams, so we print  on a new line.
 
*/
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

/*int number_needed(string a, string b) {
    int s;
    int e; // start end indices
    int asize = a.size();
    int bsize = b.size();
    int loc;
    int i;

    // 5 choose 4?
//    loc = b.find(a[0]);
//    for (i=0; i++; i<asize-loc){
//        if (b[loc+i] != a[0+i]){
//            break;
//        }
//    }
//    
    
    return i*2;
    //      http://stackoverflow.com/questions/651497/how-to-do-stdstring-indexof-in-c-that-returns-index-of-matching-string
} */

int number_needed(string a, string b) {
    auto count = 0;
    vector<int> freq(26, 0);
    for (auto c : a) { ++freq[c - 'a']; }
    for (auto c : b) { --freq[c - 'a']; }
    for (auto val : freq) { count += abs(val); }
    return count;
}


int main(){
    string a;
  //  cin >> a;
    string b;
   // cin >> b;
    a = "aba";
    b = "baba";
    cout << number_needed(a, b) << endl;
    return 0;
}

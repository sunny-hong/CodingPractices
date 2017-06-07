//
//  main.cpp
//  Stack_GeeksForGeeks
//
//  Created by Hye Sun Hong on 6/5/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//Implement stack using array
//Show Topic Tags           FactSet    Kritikal Solutions    Visa
//Implement a Stack using Array .
//
//Input (To be used for Expected Output):
//
//The first line of the input contains an integer 'T' denoting the number of test cases. Then T test cases follow.
//First line of each test case contains an integer Q denoting the number of queries .
//A Query Q is of 2 Types
//(i) 1 x   (a query of this type means  pushing 'x' into the stack)
//(ii) 2     (a query of this type means to pop element from stack and print the poped element)
//
//The second line of each test case contains Q queries seperated by space.
//
//Output:
//The output for each test case will  be space separated integers having -1 if the stack is empty else the element poped out from the stack .
//You are required to complete the two methods push which take one argument an integer 'x' to be pushed into the stack  and pop which returns a integer poped out from the stack.
//
//Constraints:
//1<=T<=100
//1<=Q<=100
//1<=x<=100
//
//Example:
//Input
//1
//5
//1 2 1 3 2 1 4 2
//
//Output
//3 4
//
//Explanation:
//
//In the first test case for query
//1 2    the stack will be {2}
//1 3    the stack will be {2 3}
//2       poped element will be 3 the stack will be {2}
//1 4    the stack will be {2 4}
//2       poped element will be 4
//
//
//
//**For More Examples Use Expected Output**
//

//
//#include <string>
//#include <stdexcept>
//#include <iostream>
//
//class Palindrome
//{
//public:
//    static bool isPalindrome(const std::string& word)
//    {
//        int half= word.length()/2 + word.length()%2;
//        
//        int diff; bool result;
//        for (int i=0; i<half; i++){
//            //std::cout<<word[word.length()-i-1]<<" ";
//            
//            //word[]
//            diff = word[i] - word[word.length()-i-1];
//            std::cout<<diff;
//            if (diff == 0 || diff == 32){
//                result = 1;
//                
//            }else{
//                return 0;
//            }
//        }
//        return 1;
//        //throw std::logic_error("Waiting to be implemented");
//    }
//};
//
//#ifndef RunTests
//int main()
//{
//    std::cout << Palindrome::isPalindrome("Deleveled");
//}
//#endif

#include <iostream>
#include <string>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::string stra = "a";
    std::string strb = "b";
    std::string strA = "A";
    
    int diff;
//    diff = char(stra) - char(strb);
    std::cout<<diff;
    
    
    return 0;
}

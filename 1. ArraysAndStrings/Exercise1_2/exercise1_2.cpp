//#include<iostream>
//#include "exercise1_2.h"
//


//void exercise1_2::reverse(char* str)
//{
//    char *ptrEnd = str;
//    char temp;
//    
//    if (str)
//    {
//        while (*ptrEnd)
//        {
//            ptrEnd++;
//        }
//        ptrEnd--;
//        
//        while (str < ptrEnd)
//        {
//            temp = *str;
//            *str++ = *ptrEnd;
//            *ptrEnd-- = temp;
//        }
//    }
//}

//int exercise1_2::run()
//{
//    char input[][10] = { "abcde", "cat" };
//    
//    for (int i = 0; i < 2; i++)
//    {
//        cout << "reversing the string: " << input[i] << endl;
//        reverse(input[i]);
//        cout << "reverse of input string is " << input[i] << endl;
//    }
//    
//    return 0;
//}

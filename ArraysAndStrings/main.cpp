//
//  main.cpp
//  Exercise1_6
//
//  Created by Hye Sun Hong on 1/1/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//
//  Given an image represented by NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

//  Challenges I faced: 1. Syntax. attempted "vector<int> rotate_image(int matrix){}" but failed for some reason. I know vector<int> func_name(vector<int> input){} works...

//http://rextester.com/VEY26796

#include <iostream>

using namespace std;


const int n = 4;
const int m = 4;


void rotateMatrix(int t[n][m]) {
    int a[n][m];
    
    // transpose and reverse but need another matrix
    for (int i = 0; i<n; ++i){
        for (int j=0; j<m; ++j ){
            // a[j][i]= t[i][j];  ---> transposes
            // transpose + flip needed. aka column 1 and column (end) will be swapped. And column 1+1 and end-1 will be swapped.
            a[j][n-i-1]= t[i][j];
            
        }
        
    }
    
    // copy the matrix
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            t[i][j] = a[i][j];
        }
    }
}



void printMatrix(int t[n][m]) {
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t[n][m] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printMatrix(t);
    rotateMatrix(t);
    cout << endl;
    printMatrix(t);
    
    
}

////Title of this code
//
//
//#include <iostream>
//
//using namespace std;
//
//
//const int n = 4;
//const int m = 4;
//
//
///*
// Rotate by +90:
// Transpose
// Reverse each row
// 
// Rotate by -90:
// Transpose
// Reverse each column
// 
// Rotate by +180:
// Method 1: Rotate by +90 twice
// Method 2: Reverse each row and then reverse each column
// 
// Rotate by -180:
// Method 1: Rotate by -90 twice
// Method 2: Reverse each column and then reverse each row
// Method 3: Reverse by +180 as they are same
// */
//
//
//void rotateMatrix2(int t[n][m]) {
//    
//    // transpose
//    for (int i = 0; i < n; ++i)
//        for (int j = i + 1; j < m; ++j)
//            swap(t[i][j], t[j][i]);
//    
//    // reverse the rows
//    for (int i = 0; i < n; ++i)
//        for (int j = 0; j < m / 2; ++j)
//            swap(t[i][j], t[i][m - j - 1]);
//}
//
//
//void rotateMatrix(int t[n][m]) {
//    int dest[n][m];
//    
//    // transpose and reverse but need another matrix
//    for (int i = 0; i < n; ++i)
//        for (int j = 0; j < m; ++j)
//            dest[j][n - i - 1] = t[i][j];
//    
//    // copy the matrix
//    for (int i = 0; i < n; ++i)
//        for (int j = 0; j < m; ++j)
//            t[i][j] = dest[i][j];
//}
//
//
//
//void printMatrix(int t[n][m]) {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << t[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int dest[n][m];
//    int t[n][m] = {
//        {5, 1, 2, 6},
//        {1, 1, 9, 3},
//        {1, 1, 2, 3},
//        {8, 1, 2, 7}
//    };
//    
//    printMatrix(t);
//    rotateMatrix2(t);
//    //rotateMatrix(t);
//    //rotateMatrix2(t);
//    //rotateMatrix(t);
//    cout << endl;
//    printMatrix(t);
//    
//    
//}

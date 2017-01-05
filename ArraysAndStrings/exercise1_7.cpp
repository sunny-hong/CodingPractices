//
//  main.cpp
//  Exercise1_7
//
//  Created by Hye Sun Hong on 1/5/17.
//  Copyright © 2017 Hyesun. All rights reserved.
//
//  Write an algorithm such that if an element is 0, its entire row and column sets to 0 .

//  What i learned: 1. setting an array with zero. 2. finding index/position of where non-zeros are at.
#include <iostream>

const int r = 5; const int c = 6;

void set_zeros(int matrix[r][c]){
    int check[r][c] = {{0}};
    
    for (int i=0; i<r; ++i){
        for (int j=0; j<c; ++j){
            if (matrix[i][j] == 0){
                check[i][j] = 1;
            }
        }
    }
    
    for (int i=0; i<r; ++i){
        for (int j=0; j<c; ++j){
            if ( check[i][j] == 1){
                for(int k=0; k<r; ++k){
                    matrix[k][j] = 0;
                }
                for(int k=0; k<c; ++k){
                    matrix[i][k] = 0;
                }
            }

        }
    }
    
}

void print_matrix(int matrix[r][c]){
    for (int i=0; i<r; ++i){
        for (int j=0; j<c; ++j){
            std::cout<< matrix[i][j] << " ";
        }
        std::cout<<std::endl;
    }
}


int main() {
    
    std::cout<<"Print Original Matrix"<<std::endl;
    int a[r][c] =
    {{9, 1, 2, 1, 1, 2},
        {8, 7, 5, 0, 2, 9},
        {2, 1, 0, 2, 1, 2},
        {9, 4, 7, 5, 1, 3},
        {8, 9, 3, 4 ,3 ,2} };
    print_matrix(a);
    std::cout<<std::endl;
    set_zeros(a);
    std::cout<<"Print Programmed Matrix"<<std::endl;
    print_matrix(a);
    std::cout<<std::endl;
    return 0;
}

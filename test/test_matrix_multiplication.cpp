#include "matrix_multiplication.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// ######################### Source code of multiplyMatrices in src/matrix_mult


TEST(MatrixMultiplicationFailureTest, TestMultiplyMatrices) {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::vector<std::vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {58, 64},
        {139, 154}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";

/*  Expected equality of these values:
  C
    Which is: { { 58, 64 }, { 143, 161 } }
  expected
    Which is: { { 58, 64 }, { 139, 154 } }
Matrix multiplication test failed! :(((()*/
}

TEST(MatrixMultiplicationPassTest, TestMultiplyMatrices) {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::vector<std::vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {58, 64},
        {147, 160}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
/*

[----------] 1 test from MatrixMultiplicationPassTest
[ RUN      ] MatrixMultiplicationPassTest.TestMultiplyMatrices
Error 6: Result matrix contains a number bigger than 100!
Error 6: Result matrix contains a number bigger than 100!
Error 12: The number of rows in A is equal to the number of columns in B!
Error 14: The result matrix C has an even number of rows!
Error 20: Number of columns in matrix A is odd!
*/
}


TEST(MatrixMultiplicationFailureTest2, TestMultiplyMatrices2) {
    std::vector<std::vector<int>> A = {
        {1, 1, 1},
        {1, 1, 1}
    };
    std::vector<std::vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {2044, 30},
        {27, 30}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
/*
[----------] 1 test from MatrixMultiplicationFailureTest2
[ RUN      ] MatrixMultiplicationFailureTest2.TestMultiplyMatrices2
Error 10: A row in matrix A contains more than one '1'!
Error 12: The number of rows in A is equal to the number of columns in B!
Error 14: The result matrix C has an even number of rows!
Error 20: Number of columns in matrix A is odd!
[       OK ] MatrixMultiplicationFailureTest2.TestMultiplyMatrices2 (0 ms)
[----------] 1 test from MatrixMultiplicationFailureTest2 (0 ms total)

*/
}

TEST(MatrixMultiplicationFailureTest4, TestMultiplyMatrices4) {
    std::vector<std::vector<int>> A = {
        {-50, -50},
        {-70, -10}

    };
    std::vector<std::vector<int>> B = {
        {-60, -70},
        {-80, -90}
        
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {10,-20},
        {-10,-80}
        
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
/*[----------] 1 test from MatrixMultiplicationFailureTest3
[ RUN      ] MatrixMultiplicationFailureTest3.TestMultiplyMatrices3
Segmentation fault (core dumped)*/
}


TEST(MatrixMultiplicationFailureTest3, TestMultiplyMatrices3) {
    std::vector<std::vector<int>> A = {
        {1}

    };
    std::vector<std::vector<int>> B = {
        {2}
        
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {2}
        
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
/*[----------] 1 test from MatrixMultiplicationFailureTest3
[ RUN      ] MatrixMultiplicationFailureTest3.TestMultiplyMatrices3
Segmentation fault (core dumped)*/
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

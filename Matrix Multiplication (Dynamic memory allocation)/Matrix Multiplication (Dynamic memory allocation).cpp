#include <iostream>
using namespace std;
int main()
{
    // Dynamic Memory Allocation in C++ for 2D Array
    int matrix_1_row;
    int matrix_1_column;
    cout << "Enter row of 1st matrix : ";
    cin >> matrix_1_row;
    cout << "Enter column of 1st matrix : ";
    cin >> matrix_1_column;
    // dynamically create array of pointers of size matrix_1_row
    int** array_1 = new int* [matrix_1_row];
    // dynamically allocate memory of size matrix_1_column for each row
    for (int i = 0; i < matrix_1_row; i++)
    {
        array_1[i] = new int[matrix_1_column];
    }
    // assign values to allocated memory
    for (int i = 0; i < matrix_1_row; i++)
    {
        for (int j = 0; j < matrix_1_column; j++)
        {
            cout << "Enter element " << i + 1 << j + 1 << " : ";
            cin >> array_1[i][j];
        }
    }
    // print the 2D array
    for (int i = 0; i < matrix_1_row; i++)
    {
        for (int j = 0; j < matrix_1_column; j++)
        {
            std::cout << array_1[i][j] << "\t";
        }
        std::cout << std::endl;
    }


    int matrix_2_row;
    int matrix_2_column;
    cout << "Enter row of 2nd matrix : ";
    cin >> matrix_2_row;
    cout << "Enter column of 2nd matrix : ";
    cin >> matrix_2_column;
    // dynamically create array of pointers of size matrix_2_row
    int** array_2 = new int* [matrix_2_row];
    // dynamically allocate memory of size matrix_2_column for each row
    for (int i = 0; i < matrix_2_row; i++)
    {
        array_2[i] = new int[matrix_2_column];
    }
    // assign values to allocated memory
    for (int i = 0; i < matrix_2_row; i++)
    {
        for (int j = 0; j < matrix_2_column; j++)
        {
            cout << "Enter element " << i + 1 << j + 1 << " : ";
            cin >> array_2[i][j];
        }
    }
    // print the 2D array
    for (int i = 0; i < matrix_2_row; i++)
    {
        for (int j = 0; j < matrix_2_column; j++)
        {
            std::cout << array_2[i][j] << "\t";
        }
        std::cout << std::endl;
    }


    // Result
    int result_row = matrix_1_row;
    int result_column = matrix_2_column;
    // dynamically create array of pointers of size result_row
    int** array_3 = new int* [result_row];
    // dynamically allocate memory of size result_column for each row
    for (int i = 0; i < result_row; i++)
    {
        array_3[i] = new int[result_column];
    }


    // Matrix multiplication
    for (int i = 0; i < matrix_1_row; i++)
    {
        for (int j = 0; j < matrix_2_column; j++)
        {
            array_3[i][j] = 0;
            for (int k = 0; k < matrix_1_column; k++)
            {
                array_3[i][j] += array_1[i][k] * array_2[k][j];
            }
        }
    }


    // Printing result
    cout << "Result : " << endl;
    for (int i = 0; i < result_row; i++)
    {
        for (int j = 0; j < result_column; j++)
        {
            std::cout << array_3[i][j] << "\t";
        }
        std::cout << std::endl;
    }


    // deallocate memory using delete[] operator 1st matrix
    for (int i = 0; i < matrix_1_row; i++)
    {
        delete[] array_1[i];
    }
    delete[] array_1;
    // deallocate memory using delete[] operator 2nd matrix
    for (int i = 0; i < matrix_2_row; i++)
    {
        delete[] array_2[i];
    }
    delete[] array_2;
    // deallocate memory using delete[] operator result
    for (int i = 0; i < result_row; i++)
    {
        delete[] array_3[i];
    }
    delete[] array_3;


    return 0;
}
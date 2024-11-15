// Spiral form
// link: https://leetcode.com/problems/spiral-matrix/submissions/1377341356/

#include <iostream>
using namespace std;

void spiral(int matrix[][3], int row, int col)
{
    int top = 0, right = col - 1, bottom = row - 1, left = 0;

    while (top <= bottom && left <= right)
    {
        // print top
        for (int j = left; j <= right; j++)
        {
            cout << matrix[top][j] << " ";
        }
        top++;

        if (top <= bottom)
        {
            for (int i = top; i <= bottom; i++)
            {
                cout << matrix[i][right] << " ";
            }
            right--;
        }

        if (left <= right)
        {
            for (int j = right; j >= left; j--)
            {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }

        for (int i = bottom; i >= top; i--)
        {
            cout << matrix[i][left] << " ";
        }
        left++;
    }
}

int main()
{
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    spiral(matrix, 3, 3);
}
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(const vector<vector<int>> &matrix, int target)
{
    if (matrix.empty() || matrix[0].empty())
        return false;

    int m = matrix.size();
    int n = matrix[0].size();
    int row = 0;
    int col = n - 1;

    while (row < m && col >= 0)
    {
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    int target;
    cout << "Nhập số cần tìm: ";
    cin >> target;

    if (searchMatrix(matrix, target))
    {
        cout << "Tìm thấy " << target << " trong ma trận." << endl;
    }
    else
    {
        cout << "Không tìm thấy " << target << " trong ma trận." << endl;
    }

    return 0;
}

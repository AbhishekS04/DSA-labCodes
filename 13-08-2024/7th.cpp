//! WAP to multiply 2 matrices.
#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q;
    cout << "Enter size of first matrix: ";
    cin >> m >> n;
    cout << "Enter size of second matrix: ";
    cin >> p >> q;

    if (n != p)
        return cout << "Matrices cannot be multiplied.", 0;

    int first[m][n], second[p][q], result[m][q] = {};

    cout << "Enter elements of first matrix: ";
    for (int i = 0; i < m * n; i++)
        cin >> first[i / n][i % n];

    cout << "Enter elements of second matrix: ";
    for (int i = 0; i < p * q; i++)
        cin >> second[i / q][i % q];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < n; k++)
                result[i][j] += first[i][k] * second[k][j];

    cout << "Product of the matrices:\n";
    for (int i = 0; i < m * q; i++)
        cout << result[i / q][i % q] << (i % q == q - 1 ? "\n" : " ");

    return 0;
}

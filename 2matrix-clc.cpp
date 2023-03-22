#include <iostream>
using namespace std;
int main()
{
    int i, j, o, A[3][3], B[3][3], sum;
    // i for rows
    // j for columns
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "enter 1st matrix values A" << i << j << " ";
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << "__________________________\n";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "enter 1st matrix values B" << i << j << " ";
            cin >> B[i][j];
        }
        cout << endl;
    }
    cout << "__________________________\n";
    cout << "Choose your option\n1. the addition of two matrix\n2. the substraction of two matrix\n3. the multiplication of two matrix\n4. the transpose of two matrix\n5. the uppertriangle of two matrix\n";
    cin >> o;
    switch (o)
    {

    case 1:

        cout << "the Addition of two matrix is :\n";

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << (A[i][j] + B[i][j]) << "\t";
            }
            cout << endl;
        }
        break;
    case 2:
        cout << "the sustraction of two matrix is :\n";

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << (A[i][j] - B[i][j]) << "\t";
            }
            cout << endl;
        }
        break;
    case 3:
        printf("the multiplication of two matrix is :\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sum = 0;
                for (int k = 0; k < 3; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
                cout << sum << "\t";
            }
            cout << endl;
        }
        break;
    case 4:
        cout << "the transpose of frist matrix is :\n";

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << A[j][i] << "\t";
            }
            cout << endl;
        }
        cout << "the transpose of second matrix is :\n";

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << B[j][i] << "\t";
            }
            cout << endl;
        }
        printf("the transpose of second matrix is :\n");
        break;
    case 5:
        cout << "the upper triangle matrix of frist matrix is :\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i <= j)
                {
                    cout << A[i][j] << "\t";
                }
                else
                {
                    cout << "0\t";
                }
            }
            cout << endl;
        }
        cout << "the upper triangle matrix of second matrix is :\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i <= j)
                {
                    cout << B[i][j] << "\t";
                }
                else
                {
                    cout << "0\t";
                }
            }
            cout << endl;
        }
        break;
    default:
        cout << "invalid option";
    }
    return 0;
}
extern bool is_more_positive(int vals[], int len);
#include <iostream>
using namespace std;
int main()
{
    int vals[] = {-1, 1, -2, 2, -3, 3, 0, 0, -5};
    int vals_length = 9;
    bool res = is_more_positive(vals, vals_length);

    cout << "Enter new elements : ";
    for (int i = 0; i < vals_length; i++)
    {
        cin >> vals[i];
    }

    res = is_more_positive(vals, vals_length);
    for (int i = 0; i < vals_length; i++)
    {
        cout << vals[i] << " ";
    }
    if (res == true)
    {
        cout << "The number of positive elements is greater than the number of negative elements." << endl;
    }
    else
    {
        cout << "The number of positive elements is not greater than the number of negative elements." << endl;
    }
    return 0;
}
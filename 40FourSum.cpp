// four sum problrm (i am solving this without using function)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {-2, -1, -1, 1, 1, 2, 2};
    int tar = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue; // remove duplication
        for (int j = i + 1; j < arr.size();)
        {
            int p = j + 1, q = arr.size() - 1;
            while (p < q)
            {
                int sum = arr[i] + arr[j] + arr[p] + arr[q];
                if (sum < tar)
                {
                    p++;
                }
                else if (sum > tar)
                {
                    q--;
                }
                else
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[p] << " " << arr[q] << endl;
                    p++;
                    q--;
                    while (p < q && arr[p] == arr[p - 1])
                        p++; // remove duplication
                }
            }
            j++;
            while (j < arr.size() && arr[j] == arr[j - 1])
                j++; // remove duplication
        }
    }
    return 0;
}

// tc = o(n^3 logn)
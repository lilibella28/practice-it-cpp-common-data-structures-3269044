#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    // TODO: implement
    int left = 0;
    int right = size - 1;
    T mid;
    while (left <= right)
    {

        mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            cout << "I am index" << mid << endl;
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int myArray[] = {2, 3, 4, 5, 6, 7};
    size_t size = 6;
    
     int target = 3;
    int result = findItem(myArray, size, target);

        if (result != -1)
    {
        cout << "Value found " << target << " at index " << result << endl;
    }
    else
    {
        cout << "No found" << endl;
    }

    return 0;
}

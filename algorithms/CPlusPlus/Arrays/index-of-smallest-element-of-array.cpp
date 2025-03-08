//index of smallest element of array
/* Example :
size of array =5
Let array be ,arr[5]={9,4,1,5,8}
here smallest element of array is 1 which is at index 2 of array 
output = 2 that is index of smallest element of array.
Time complexity = O(n)
*/
#include <iostream>
#include <vector> // Include vector header

using namespace std;

int main() {
    int size, j;
    cout << "Enter the size of array: ";
    cin >> size;

    // Input validation: Check for non-positive size
    if (size <= 0) {
        cerr << "Error: Array size must be positive." << endl;
        return 1; // Exit with an error code
    }

    // Use std::vector instead of a raw array
    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    //considering the element at zero index to be smallest
    int min = arr[0];
    int smallest_index = 0;
    //comparing min to all other elements
    for (j = 0; j < size; j++) {
        if (min > arr[j]) {
            min = arr[j];
            smallest_index = j;
        }
    }
    cout << "Index of smallest element of array is " << smallest_index;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int size,j;
//     cout<<"enter the size of array";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     //considering the element at zero index to be smallest
//     int min=arr[0];
//     int smallest_index=0;
//     //comparing min to all other elements
//     for(j=0;j<size;j++)
//     {
//         if(min>arr[j])
//         {
//             min=arr[j];
//             smallest_index=j;
//         }
//     }
//     cout<<"index of smallest element of array is"<<smallest_index;
// }

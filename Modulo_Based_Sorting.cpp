/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;

int main(){
    unsigned int n, k;
    cin >> n >> k;
    unsigned int arr[n];
    for(unsigned int i = 0; i < n; ++i)
        cin >> arr[i];
    
    for(unsigned int i =0; i < n; ++i)
        for(unsigned int j = 0; j < n-1; ++j)
            if(arr[j]%k > arr[j+1]%k)
                {
                    unsigned int tmp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = tmp;
                }
        
     for(unsigned int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    
    return 0;
}
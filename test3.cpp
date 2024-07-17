//Write a program to find the count of 3 multiples in a given input integer array. 
//Include a function named divisibleBy3 that accepts 2 arguments and returns an int. 
//The first argument is the input array and the second argument is an int that corresponds to the size of 
//the array. The function returns an int that corresponds to the count of 3 multiples. 
//If the size of the array is negative or if any element in the array is negative, print “Invalid Input”
//and terminate the program.
//Input and Output Format: 
//Input consists of n+1 integers. The first integer corresponds to n, the number of elements in the array. The next 'n' integers correspond to the elements in the array. 
//Output consists of an integer that corresponds to the count of 3 multiples 
//Assume that the maximum number of elements in the array is 20. 
//Sample Input 1: 
//8 1 6 3 5 61 80 102 9 
//Sample Output 1: 4 
//Sample Input 2: -5 
//Sample Output 2: Invalid Input 
//Sample Input 3: 5 23 2 -200 
//Sample Output 3: 
//Invalid Input
#include <iostream>
using namespace std;

int divisibleBy3(int arr[], int size) {
    if (size < 0) {
        cout << "Invalid Input" << endl;
        exit(0);
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << "Invalid Input" << endl;
            exit(0);
        }
    }

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = divisibleBy3(arr, n);
    cout <<"number divisible by 3"<< count << endl;

    return 0;
}
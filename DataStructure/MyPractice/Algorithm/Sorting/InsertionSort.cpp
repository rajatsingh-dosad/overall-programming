
#include<iostream>

using namespace std;

int main() {

    int arr[] = {7,2,2,2,77,3};

    for(int i=1;i<5;i++) {

        for(int j=0;j<i;j++) {

            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<5;i++) {

        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}
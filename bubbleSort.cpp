#include <iostream>

using namespace std;

bool unSorted(int arr[]){

int length = 7;

for(int i= 1; i < length; i++){
    if(arr[i]< arr[i-1])
        return true;
}

return false;

}



int main()
{
    cout << "Hello world!" << endl;

    int arr[7] = {7,3,8,5,6,2,0};
    int length = 7;

    cout<<"Unsorted: ";
    for(int i = 0; i < length; i++){
        cout<< arr[i]<<" ";
    }
    cout<<"\n";

    int temp;

    //Bubble sort


    while(unSorted(arr)){
    for(int i = 1; i < length; i++){
        if(arr[i]<arr[i-1]){
            temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;

        }

    }
    }
cout<<"Sorted: ";
    for(int i =0; i < length; i++){
        cout<< arr[i]<< " ";
    }

    cout<<"\n Um...";



    return 0;
}
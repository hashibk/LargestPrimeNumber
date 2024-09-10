#include <iostream>
using namespace std;

int findlargestprimenum(int *arr, int size){

    int found=0;
    int highest=-1;

    for (int i=0;i<size;i++){                       //outer loop
        if (arr[i]>2){
            for (int j=2;j<=sqrt(arr[i]);j++){      //inner loop
                if (arr[i]%j==0){
                    found=1;
                    break;
                }
            }
            if (found==0 && arr[i]>highest){
                highest=arr[i];
            }
        }
        else if (arr[i]==2 && highest<2){
            highest=2;
        }

        found=0;
        
    }

    return highest;
}

/*
    time complexity of outer loop is O(n) where n is the size of the array
    time complexity of inner loop is O(sqrt(m)) where m is the largest element in the array
    total time complexity is O(n.sqrt(m))
*/



int main(){
    int x=7;
    int arr[7]= {5, 5, 11, 11, 2, 2, 17};

    cout<<findlargestprimenum(arr,x)<<endl;
}
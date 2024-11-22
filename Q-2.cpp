#include<iostream>

using namespace std;

    
    int cube(int size){
            int arr[size][size];
            int *ptr[size][size];

    

   
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
           cout << "arr["<< i <<"]["<< j <<"]: ";
           cin >> arr[i][j] ;
        }
    }

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            ptr[i][j] = &arr[i][j];
        } 
          
    }

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            
            int mul = *ptr[i][j];
            cout << mul * mul * mul <<  " ";

        } 
        cout << endl;
          
    }

    
    }



int main(){

   int size;

   cout << "Enter size of array: ";
   cin >> size;

   cube(size);
    

}



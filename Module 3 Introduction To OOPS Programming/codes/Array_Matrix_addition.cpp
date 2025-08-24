#include<iostream>
using namespace std;
int main(){
    cout << "Matrix Addition for 2x2 Matrix:"<<endl;
    cout<<"Enter Elements at A Matrix:" <<endl;
    int A[2][2];
    int B[2][2];
    int sum[2][2];
    //For Element A
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Enter Element at index of["<<i<<"]["<<j<<"]:"<<endl;
            cin>>A[i][j];
        }
    
    }

    //Prints MAtrix;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << A[i][j] <<" ";
        }
        cout<<endl;
    }

 //For Element B
    cout<<"Enter Elements at B Matrix:" <<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Enter Element at index of["<<i<<"]["<<j<<"]:"<<endl;
            cin>>B[i][j];
        }
    
    }
    //Prints MAtrix;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << B[i][j] <<" ";
        }
        cout<<endl;
    }

    //Sum of Two Matrix
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum[i][j] = A[i][j] + B[i][j]; 
        }
    }
    cout<< "Sum of A and B MAtrix is:" <<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<sum[i][j]<<"";
        }
        cout << endl;
    }
}
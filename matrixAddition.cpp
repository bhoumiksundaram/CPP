#include <iostream>
using namespace std;
int main() {
    int n {};
    int m {};
    
    int mat1[3][3] {};
    int mat2[3][3] {};
    int mat3[3][4] {};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            cin >> mat1[i][j];
            
        }
    }
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            cout<<mat1[i][j] <<" ";
            
        }
        cout<<'\n';
    }

// 
	cout<<"MATRIX 2:";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            cin >> mat2[i][j];
            
        }
    }
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
            cout<<mat2[i][j] <<" ";
            
        }
        cout<<'\n';
    }
 
 
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
             mat3[i][j] = mat1[i][j]+mat2[i][j];
            
        }

    }
 
 
       for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; ++j) {
             cout<<mat3[i][j]<<" "; ;
            
        }
        cout<<'\n';
    }
 
}

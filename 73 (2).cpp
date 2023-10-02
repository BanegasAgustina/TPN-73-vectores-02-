#include<bits/stdc++.h>
using namespace std;

vector<int> SumarVectores(vector<int> A,vector<int> B) {
    vector<int> C;
    for(int i = 0; i < A.size(); ++i) {
        C.push_back(A[i] + B[i]);
    }
    return C;
}

void imprimir(vector<int> vec) {
    for(int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << ' ';
    }
    cout << endl;
}

int main() {
    srand(time(0));
   
    vector<int> A(10), B(10);

   
    for(int i = 0; i < 10; ++i) {
        A[i] = rand() % 1500;
        B[i] = rand() % 1500;
    }
   
    vector<int> C = SumarVectores(A, B);
   
 
    cout << "Vector A: ";
    imprimir(A);
    cout << "Vector B: ";
    imprimir(B);
    cout << "Vector C: ";
    imprimir(C);

    return 0;
}




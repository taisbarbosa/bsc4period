#include <algorithm>
#include <iostream>

void merge(int* vector, int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int* E = new int[n1];
    int* D = new int[n2];
    for (int i = 0; i < n1; i++){
        E[i] = vector[p-i];
    }
    for (int i = 0; i < n2; i++){
        D[i] = vector[q+1+i];
    }
    
    int k = p;
    int i = 0;
    int j = 0;
    while ((i<n1)&&(j<n2)){
        if (E[i]<=D[j]){
            vector[k] = E[i];
            i++;
        }else{
            vector[k] = D[j];
            j++;
        }
        k++;
    }
    while (i<n1){
        vector[k] = E[i];
        i++;
        k++;
    }
    while (j<n2){
        vector[k] = D[j];
        j++;
        k++;
    }    
    delete[] E;
    delete[] D;
}
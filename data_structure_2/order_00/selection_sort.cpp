#include <algorithm>
#include <iostream>

int pos_max(int* vector, int start, int end){
    int max = start;
    for (int i = start+1; i < end; i++)
    {
        if (vector[i]>vector[max])
        {
            max=i;
        }
        
    }
    return max;
    
}

int selection_sort(int* vector, int n){
    for (int i = n-1; i > 0; i--)
    {
        int p = pos_max(vector,0,i);
        std::swap(vector[p], vector[i]);
    }
}

int main(){
    int v[]={3,0,4,6,1,5,2};
    int n = 7;

    selection_sort(v, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << "\n";

    return 0;
}
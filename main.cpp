#include <iostream>
using namespace std;
#define MAX_SIZE 50
void maxHeap(int *a, int n,  int i){
  int j = 2*i;
  if( j <= n){
    if( j < n){
      if( a[j+1] > a[j]){
        j=j+1;
      }
    }
    if(a[i] < a[j]){
      int aux = a[i];
      a[i]=a[j];
      a[j]=aux;
      maxHeap(a,n,j);
    }
  }
}


void print_heap(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout<< a[i]<<endl;
    }
    
}

void buildMaxHeap(int *a, int n) {  
    for (int i = n/2; i >= 0; i--) {
        maxHeap(a, n, i);
    } 
}
int main() {
  int a[MAX_SIZE] = {1,7,98,12,45,36,74};
  buildMaxHeap(a, 7);
  print_heap(a,7);

}
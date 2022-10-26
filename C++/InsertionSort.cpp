#include <iostream>

using namespace std;
void insertionsort(int *data, int n) {
   int j,k;
   for(int i = 1; i<n; i++) {
      k = data[i];
      j = i;
      while(j > 0 && data[j-1]>k) {
         data[j]=data[j-1];
         j--;
      }
      data[j] = k;  
   }
}


int main()
{

int n;



cout << "Enter the number of elements: "<<endl;  
cin >> n;
int data[n]; 
cout << "Enter the sequence: "<< endl;  
for(int i = 0; i<n; i++) {
      cin >> data[i];
   }
   

for ( int i = 0; i < n; i++){
    cout <<data[i] << " ";
}
insertionsort(data, n);
cout<<endl<<"Array Sorted after using insertionsort is"<<endl;

for ( int i = 0; i < n; i++){
    cout << data[i] << " ";
}
 cout << endl;

    return 0;
}


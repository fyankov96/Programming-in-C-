// We first import some useful libraries
#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int l;
    int sizeOfDataSet;
    int *data = new int[sizeOfDataSet];
    int m = 0;

    cin >> l;
    cin >> sizeOfDataSet;


      for (int counter = 0; counter < sizeOfDataSet; counter++){

        // Filling the array;
        cin >> data[counter];

        if(data[counter] > m){
            m = data[counter];
        }   
      }

      bool check = false;

      if((m % l) == 0){
          check = true;;
      }

      double k = ceil((double)m / l);

      for (int i = 1; i <= l; i++){

          int count = 0;
          int min = ((i - 1) * k);
          int max = (i * k);

          for (int i = 0; i < sizeOfDataSet; i++){              
              if (data[i] >= min && data[i] < max)
              {
                  count++;
              } else if(check && data[i] == max){
                  count++;
                  check = false;
              }
          }

          cout << min << ": " << count << endl;       
    }
    delete[] data;
}
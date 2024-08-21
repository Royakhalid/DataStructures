#include <iostream>

using namespace std;
void funAverage(const int numbers[], int size) {

    int sum = 0;
   
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

  
    double average = static_cast<double>(sum) / size;

   
    cout << "The average of the numbers is " << average << endl;
}

int main() {
   
    int numbers[10] = {5, 12, 2, 13, 24, 30, 40, 20, 22, 60};

  
    funAverage(numbers, 10);

    return 0;
}
#include <iostream>     // std::cout
#include <algorithm>    // std::count_if
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

int randomNumber() { 
    return rand() % 100; 
}

void print(int x){
    cout << x << " ";
}

int main () {
  srand(time(0));
  vector<int> myvector(10);
  generate(myvector.begin(), myvector.end(), randomNumber);
  for_each(myvector.begin(), myvector.end(), print);

  return 0;
}
#include <iostream>     // std::cout
#include <algorithm>    // std::count_if
#include <vector>       // std::vector

using namespace std;

void print(int x){
    cout << x << " ";
}

int main () {
  vector<int> myvector;
  myvector.push_back(1);
  myvector.push_back(1);
  myvector.push_back(1);
  myvector.push_back(2);
  myvector.push_back(2);
  myvector.push_back(2);
  myvector.push_back(1);
  myvector.push_back(1);
  myvector.push_back(1);
  unique(myvector.begin(), myvector.end());
  for_each(myvector.begin(), myvector.end(), print);

  return 0;
}
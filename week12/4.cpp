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
  myvector.push_back(10);
  myvector.push_back(10);
  myvector.push_back(11);
  myvector.push_back(11);
  myvector.push_back(1);
  myvector.push_back(1);
  myvector.push_back(1);
  vector<int> :: iterator it = unique(myvector.begin(), myvector.end());
  myvector.resize(distance(myvector.begin(), it));
  for_each(myvector.begin(), myvector.end(), print);

  return 0;
}
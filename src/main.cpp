#include <iostream>
#include "bande_bi_infini.hpp"

int main()
{
  using namespace std;
  bande_bi_infini<int> b(0);
  cout << b.get() << endl;
  b.forward();
  b.set(10);
  b.backward();
  b.forward();
  cout << b.get() << endl;
  return 0;
}

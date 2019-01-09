#include <iostream>
#include "level.hpp"

using namespace std;

int main(int argc,char **argv){
  if (argc!=2) {printf("Need File\n");return 1;}
  auto map = read_file(argv[1]);
  int i;
  cin >> i;
  printf("%c\n",i);
  printf("%d\n",i);
  level l(map);
  while (l.step()) {}
  cout << l.get_out() << endl;
  return 0;
}

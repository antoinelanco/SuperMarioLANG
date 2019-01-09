#include <iostream>
#include "bande_bi_infini.hpp"
#include "mario.hpp"
#include "read.hpp"

using namespace std;

int main(int argc,char **argv){
  if (argc!=2) {printf("Need File\n");return 1;}

  auto map = read_file(argv[1]);
  size_t height = map.size();
  size_t width = map[0].size();
  // cout << "H: " << height << endl;
  // cout << "W: " << width << endl;
  bande_bi_infini<int> b(0);
  


  return 0;
}

#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


vector<vector<char>> read_file (string name){
  size_t max_line_size = 0;
  size_t number_line = 0;
  unsigned char token[] =
  {' ','=','|','#','"',')','(','+','-','.',':',',',';','>','<','^','!','[','@'};
  ifstream myfile(name);
  vector<vector<char>> result;
  vector<char> tmp;
  string line;
  while (getline(myfile,line)){
    number_line++;
    tmp.clear();
    for (char &ch: line) {
      if (find(begin(token),end(token),ch) != end(token))
        tmp.push_back(ch);
      else
        tmp.push_back(' ');
    }
    max_line_size = max(max_line_size,tmp.size());
    result.push_back(tmp);
  }
  myfile.close();
  for (size_t i = 0; i < number_line; i++) {
    result[i].resize(max_line_size,' ');
  }
  return result;
}

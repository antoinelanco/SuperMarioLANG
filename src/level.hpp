#pragma once
#include <iostream>
#include <vector>

#include "bande_bi_infini.hpp"
#include "mario.hpp"
#include "read.hpp"

using namespace std;

class level {
private:
  mario m;
  vector<vector<char>> map;
  size_t height,width;
  bande_bi_infini<int> b;
  string out;

public:
  level (vector<vector<char>> map) :b(0){
    this->map = map;
    this->height = map.size();
    this->width = map[0].size();
    this->out = "";
  }

  string get_out(){return this->out;}

  bool step(){
    return false;
  }

  void one_step(){
    char codechar = this->map[this->m.x][this->m.y];
    switch(codechar){
		case '=': case '|': case '#': case '"':
			cout << "fail" << endl;
    case ':':
      int i;
      cin >> i;
      cout << i;

    }

  }


};

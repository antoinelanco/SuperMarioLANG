#pragma once
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>

#include "bande_bi_infini.hpp"
#include "mario.hpp"
#include "read.hpp"

using namespace std;

#define RIGHT (0)
#define LEFT (1)

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
    if (this->m.x < 0 || this->m.x >= this->wigth ||
        this->m.y < 0 || this->m.y >= this->height) {
      return false;
    }
    if(!one_step())return false;
    move();
    return true;
  }

  void move(){
    
  }

  bool one_step(){
    char codechar = this->map[this->m.x][this->m.y];
    if (this->m.skip) {
      if(strchr("=|#\")(+-.:,;><^![@",codechar)!=NULL)this->m.skip=false;
      return true;
    }
    switch(codechar){

      case '=': case '|': case '#': case '"': // " a vefier é
        cout << "Died" << endl;
        return false;

      case ')': this->b.forward(); break;
      case '(': this->b.backward(); break;
      case '+': this->b.inc(); break;
      case '-': this->b.dec(); break;
      case '.': printf("%c ", this->b.get()); break;
      case ':': printf("%d ", this->b.get()); break;
      case ',': char tmp_c; cin >> tmp_c; this->b.set((int)tmp_c); break;
      case ';': int tmp_i; cin >> tmp_i; this->b.set(tmp_i); break;
      case '>': this->m.dir = RIGHT; this->m.walking = true; break;
      case '<': this->m.dir = LEFT; this->m.walking = true; break;
      case '^': break; // impl
      case '!': this->m.walking = false; break;
      case '[': this->m.skip = true; break;
      case '@': break; // impl

      default:
        break;
    }

    return true;

  }


};

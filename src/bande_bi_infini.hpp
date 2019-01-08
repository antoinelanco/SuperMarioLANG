#pragma once
#include <vector>

using namespace std;

template<class T>class bande_bi_infini{
	vector<T> pos,neg;
  T val;
  int index;
public:
  bande_bi_infini<T> (T val): val(val), index(0){
    pos.resize(10,val);
    neg.resize(10,val);
  }
  T& get(){return index<0?neg[-index-1]:pos[index];}
  void set(T v){ (index<0?neg[-index-1]:pos[index]) = v;}
  void forward(){
    index++;
    if(index >= int(pos.size()))
    pos.resize(pos.size()+10,val);
  }
  void backward(){
    index--;
    if(index >= int(neg.size()))
    neg.resize(neg.size()+10,val);
  }
};

#ifndef _NODE_
#define _NODE_

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class node
{
public:
  node *parent;
  bool visited;
  pair<int, int> position;
  float cost;

  node(node *parenti, pair<int, int> positioni, float costi)
      : parent(parenti), position(positioni), cost(costi)
  {
  }
};

#endif //_NODE_
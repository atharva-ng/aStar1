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
  float cost{9999999};

  node(node *parenti, pair<int, int> positioni, float costi)
      : parent(parenti), position(positioni), cost(costi)
  {
  }

  // bool operator=(const node &rhs) const
  // {
  //   this->parent = rhs.parent;
  //   this->visited = rhs.visited;
  //   this->position = rhs.position;
  //   this->cost = rhs.cost;
  // }

  bool operator>(const node &rhs) const
  {
    if (this->cost > rhs.cost)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool operator<(const node &rhs) const
  {
    if (this->cost < rhs.cost)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool operator==(node &rhs) const
  {
    if (this->cost == rhs.cost)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  bool operator!=(node &rhs) const
  {
    if (this->cost != rhs.cost)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

#endif //_NODE_
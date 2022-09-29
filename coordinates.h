#ifndef _COORDINATES_
#define _COORDINATES_

#include <iostream>
#include <vector>
#include <utility>

class coordinates
{

public:
  vector<pair<int, int>> coordinatesVec;

  coordinates(pair<int, int> position)
  {
    coordinatesVec.push_back(position);
  }

  coordinates()
  {
  }

  void setCoordinates(pair<int, int> p1)
  {
    coordinatesVec.push_back(p1);
  }
  void print()
  {
    for (const auto &k : coordinatesVec)
    {
      cout << k.first << " , " << k.second << endl;
    }
    cout << "=============================================" << endl;
  }
};

#endif //_COORDINATES_
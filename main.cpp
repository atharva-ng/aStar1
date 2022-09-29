#include <iostream>
#include <vector>
#include <utility>
#include "node.h"
#include "coordinates.h"

using namespace std;

void setGrid(vector<vector<int>> &grid)
{
  grid.at(1).at(1) = 1;
  grid.at(1).at(2) = 1;
  grid.at(1).at(3) = 0;
  grid.at(1).at(4) = 1;
  grid.at(1).at(5) = 1;
  grid.at(1).at(6) = 1;
  grid.at(1).at(7) = 1;
  grid.at(1).at(8) = 1;
  grid.at(2).at(1) = 1;
  grid.at(2).at(2) = 1;
  grid.at(2).at(3) = 0;
  grid.at(2).at(4) = 1;
  grid.at(2).at(5) = 0;
  grid.at(2).at(6) = 0;
  grid.at(2).at(7) = 0;
  grid.at(2).at(8) = 1;
  grid.at(3).at(1) = 1;
  grid.at(3).at(2) = 1;
  grid.at(3).at(3) = 1;
  grid.at(3).at(4) = 1;
  grid.at(3).at(5) = 1;
  grid.at(3).at(6) = 1;
  grid.at(3).at(7) = 1;
  grid.at(3).at(8) = 1;
  grid.at(4).at(1) = 1;
  grid.at(4).at(2) = 0;
  grid.at(4).at(3) = 0;
  grid.at(4).at(4) = 0;
  grid.at(4).at(5) = 0;
  grid.at(4).at(6) = 1;
  grid.at(4).at(7) = 0;
  grid.at(4).at(8) = 1;
  grid.at(5).at(1) = 1;
  grid.at(5).at(2) = 1;
  grid.at(5).at(3) = 1;
  grid.at(5).at(4) = 1;
  grid.at(5).at(5) = 1;
  grid.at(5).at(6) = 1;
  grid.at(5).at(7) = 1;
  grid.at(5).at(8) = 1;
}

int Neighbour(coordinates &emptyBlocks, vector<vector<int>> &grid, pair<int, int> currentPos)
{
  if (grid.at(currentPos.first).at(currentPos.second) == 1)
  {
    for (int hori = -1; hori <= 1; hori++)
    {

      for (int vert = -1; vert <= 1; vert++)
      {
        if (currentPos.first + hori > 0 && currentPos.first + hori < 6 && currentPos.second + vert > 0 && currentPos.second + vert < 9)
        {
          if (hori == 0 && vert == 0)
          {
            continue;
          }
          else if (grid.at(currentPos.first + hori).at(currentPos.second + vert) == 1)
          {
            emptyBlocks.setCoordinates(make_pair(currentPos.first + hori, currentPos.second + vert));
          }
        }
      }
    }
  }
  else
  {

    cout << "Try a feasible position" << endl;
  }
  return 0;
}

int main()
{
  vector<vector<int>> grid{
      {10, 10, 10, 10, 10, 10, 10, 10, 10},
      {0, 0, 0, 0, 0, 0, 0, 0, 10},
      {0, 0, 0, 0, 0, 0, 0, 0, 10},
      {0, 0, 0, 0, 0, 0, 0, 0, 10},
      {0, 0, 0, 0, 0, 0, 0, 0, 10},
      {0, 0, 0, 0, 0, 0, 0, 0, 10},
  };
  setGrid(grid);

  pair<int, int> currPos;
  currPos = make_pair(1, 8);

  coordinates emptyBlocks;
  Neighbour(emptyBlocks, grid, currPos);
  emptyBlocks.print();
}
#ifndef Coordinate_H
#define Coordinate_H

typedef struct 
{
  float x;
  float y;
  float z;
} Coordinate;

void setCoordinate(Coordinate *coor, float x, float y, float z);

#endif // Coordinate_H

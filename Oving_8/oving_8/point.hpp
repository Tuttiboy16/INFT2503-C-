#pragma once

template <typename Type1, typename Type2>
class Point {
private:
  Type1 x;
  Type2 y;

public:
  Point(Type1 x, Type2 y) : x(x), y(y) {}
  Point operator+(const Point &other);
  bool operator>(const Point &other);
  Type1 getX();
  Type2 getY();
};

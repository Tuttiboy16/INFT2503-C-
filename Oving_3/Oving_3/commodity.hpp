#ifndef OPPGAVE_3_COMMODITY_HPP
#define OPPGAVE_3_COMMODITY_HPP
#endif //OVING3_COMMODITY_HPP

#include <string>

#pragma once

using namespace std;

class Commodity {
public:
  Commodity(string name_, int id_, double price_);
  string get_name() const;
  int get_id() const;
  double get_price() const;
  double get_price(int number) const;
  void set_price(double price);
  double get_price_with_sales_tax(int number) const;

private:
  string name;
  int id;
  double price;
};

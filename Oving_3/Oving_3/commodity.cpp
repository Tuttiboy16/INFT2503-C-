#include "commodity.hpp"

const double sales_tax = 1.25;

Commodity::Commodity(string name_, int id_, double price_) : name(name_), id(id_), price(price_){};

string Commodity::get_name() const {
  return this->name;
}

int Commodity::get_id() const {
  return this->id;
}

double Commodity::get_price() const {
  return this->price;
}

double Commodity::get_price(int number) const {
  return this->price * number;
}

void Commodity::set_price(double price) {
  this->price = price;
}

double Commodity::get_price_with_sales_tax(int number) const {
  return (this->price * number) * sales_tax;
}

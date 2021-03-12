#include <string>
#include <iostream>
#include <memory>
#include <map>
#include <cctype>

enum OpType {
  Subtraction,
  Addition,
  Division,
  Multiplication,
  Exponentation,
};

enum OpAssoc {
  RightToLeft,
  LeftToRight,
};

struct OpTraits {
  int precedence;
  OpAssoc assoc;
};

const std::map<OpType, OpTraits> precendence = {
  { Subtraction, { 0, LeftToRight } },
  { Addition, { 0, LeftToRight } },
  { Division, { 1, LeftToRight } },
  { Multiplication, { 1, LeftToRight } },
  { Exponentation, { 2, RightToLeft } },
};

struct Expression {
  virtual long double value() const noexcept = 0;
};

struct Operation : public Expression {
  explicit Operation(OpType type): type_(type) {};

  long double value() const noexcept override {
    return 0; // TODO
  };

private:
  OpType type_;
  std::shared_ptr<Expression> lhs_, rhs_;
};

struct Constant : public Expression {
  explicit Constant(long double v): val(v) {};

  long double value() const noexcept override {
    return val;
  };

private:
  long double val;
};

int parse(const std::string& str) {
  for (char c : str) {
    if (!std::isspace(c)) {

    }
  }

  /* TODO */
  return 0;
}

int main(int argc, char** argv) {
  if (argc == 1) {
    std::cerr << "usage: " << argv[0] << " <expression>\n";
    return 1;
  }


  return 0;
}

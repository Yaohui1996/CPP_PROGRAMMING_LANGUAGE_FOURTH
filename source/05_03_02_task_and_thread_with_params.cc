#include <cstddef>
#include <iostream>
#include <thread>
#include <vector>

void f(const std::vector<double>& v) {
  std::cout << "exe function f()!" << std::endl;
  for (size_t i = 0; i != v.size(); ++i) {
    std::cout << i;
    if (i != v.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;
}

struct F {
  std::vector<double> v;
  explicit F(const std::vector<double>& vv) : v(vv) {}
  void operator()() {
    std::cout << "exe operator F()!" << std::endl;
    for (size_t i = 0; i != v.size(); ++i) {
      std::cout << i;
      if (i != v.size() - 1) {
        std::cout << ", ";
      }
    }
    std::cout << std::endl;
  }
};

int main() {
  std::vector<double> v(10);
  for (size_t i = 0; i != 10; ++i) {
    v[i] = i;
  }

  std::thread t1{f, v};
  std::thread t2{F(v)};

  t1.join();
  t2.join();
  return 0;
}

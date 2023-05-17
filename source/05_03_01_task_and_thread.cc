#include <iostream>
#include <thread>

void f() { std::cout << "exe function f()!" << std::endl; }

struct F {
  void operator()() { std::cout << "exe operator F()!" << std::endl; }
};

int main() {
  std::thread t1{f};
  std::thread t2{F()};

  t1.join();
  t2.join();
  return 0;
}

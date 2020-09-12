#include <string>
#include "BWString.h"

int main(){
  const char *hello_char = "Hello char* !";
  puts(hello_char);


  std::string hello_std{"Hello std::string !"};
  puts(hello_std.c_str());


  BWString hello_bw{"Hello BWString !"};
  puts(hello_bw.c_str());

  return 0;
}
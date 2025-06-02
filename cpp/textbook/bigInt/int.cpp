#include "template.h"
using namespace std;
int main() {
  /*
  Integer<10> a(12345);
  cout << a << endl;
  Integer<2> b(10);
  cout << b << endl;
  Integer<16> c(255);
  cout << c << endl;
  Integer<10> d(-10);
  cout << d << endl;
  string s = "12345";
  cout << fromRange << endl;
  cout << b << endl;
  cout << "以下为原始输入: " << endl;
	Integer<10> e(22);
  Integer<10> f(22);
  if(e == f) cout << "是\n";
  Integer<10> x(10);
  auto result = b * x;
  Integer<10> g(5);
  Integer<10> z = result / g;
  cout << result << endl;
  cout << z << endl;
  result /= g;
  cout << Integer<10>(result) << endl;
  e %= g;
  cout << e << endl;*/
  Integer<16> a(456);
  Integer<2> b(10);
  Integer<3> c("1010");
  Integer<10> d(12);
  Integer<10> e(22);
  auto f = a+b;
	cout <<"a: "<< a << endl
		<< "b: " << b << endl
		<< "c: " << c << endl
		<< "d: " << d << endl
		<< "e: " << e << endl
		<< "f: " << f << endl
		<< "a<b: " << (a < b ? "true" : "false") << endl
		<< "a>b: " << (a > b ? "true" : "false") << endl
		<< "d+e: " << d + e << endl
		<< "a+b: " << a + b << endl
		<< "c*d: " << c * d << endl
		<< "d/e: " << d / e << endl
		<< "e%d: " << e % d << endl
		<< "f%d: " << f % d << endl
		<< "a+b+c+d+e: " << a + b + c + d + e << endl
		<< "e*d: " << e * d << endl;
  return 0;
}
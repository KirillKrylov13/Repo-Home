#include <iostream>
#include<string>

using namespace std;

//template< typename U > 
//class Pair< string, U > {};		использование списка аргументов шаблона в объявлении основного шаблона не допускается


 template<typename T>
 class StringValuePair
 {
 public:
	 StringValuePair(string value1,T value2)
	 {
		 this->value1 = value1;
		 this->value2 = value2;
	 }
	 string first()
	 {
		 return value1;
	 }
	 T second()
	 {
		 return value2;
	 }

 private:
	 string value1;
	 T value2;
 };


 int main()
 {
	 StringValuePair<int> svp("Amazing", 7);
	 std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
	 return 0;
 }
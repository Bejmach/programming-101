#include <iostream>
#include <string>

// using UnityEngine
// use
// include

// fn, func

// typy danych
// int -> liczby całkowite
// float -> liczby zmienno przecinkowe
// x => x.00
// 1.2, 1.10519582
// bool -> prawda/fałsz (true/false)
// char -> 'c' 00010101
// string -> "Hello World!" (char[])
/*

void jump()  { //starts here
		
	rigidbody.addForce(Vector3.up * jump_power);

} // ends here

*/

/*class Name : MonoBehaviour{

}*/

using namespace std;

class Person{
	protected:
		string pesel;

	public:
		string name;
		string surname;

		Person(){}

		void SetPesel(string _pesel){
			this->pesel = _pesel;
		}
		string GetPesel(){
			return this->pesel;
		}
};


class Worker : public Person{
	public:
		int salary;

		void PrintRaport(){
			cout<<this->pesel<<": "<<this->salary<<endl;
		}
};


class Math{
	public:
		static int add(int x, int y){
			return x + y;
		};
};

namespace test {
void print() {
  std::string world = "Hello World!";

  std::cout << world << std::endl;
}
} // namespace test

using namespace test;

int main() {
  /*char c = '0';

  print();

  Person person = Person();

  cout<<person.GetPesel()<<person.surname<<endl;

  person.SetPesel("1234");

  cout<<person.GetPesel()<<endl;

  cout<<Math::add(5, 10)<<endl;*/


  Worker worker;

  worker.name = "Jan";
  worker.surname = "Kowalski";
  worker.SetPesel("1234");
  worker.salary = 4500;

  cout<<worker.name<<" "<<worker.surname<<endl;
  worker.PrintRaport();
}

/*


// c++
#include <iostream>

using namespace std;

int main(){
	cout<<"Hello World!"<<endl;
	return 0;
}


// python
print("Hello World!")
*/

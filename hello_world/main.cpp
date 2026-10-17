// #include służy do dodawania bibliotek lub innych plików do programu
// <> -> dodanie ze ścieżki globalnej, np. biblioteka iostream
// "" -> dodawanie ze ścieżki lokalnej, np. plik something.h zrobiony obok danego pliku
// 
// W innuch językach też są podobne działania
// rust => use *
// odin => include "*"
// c# => using *
#include <iostream>


// using namespace
// funkcje lub stałe często znajdują się w swojej przestrzeni, i aby je wywołać należy użyć formatu namespace::function
// cpp pozwala na pominięcie tego używając "using namespace" co przekłada się na wolniejszy czas kompilacji,
// bo kompilator musi szukać w 2 miejscach zamiast 1
// 
// Nie każdy język to posiada, bo np. c# uwzględnia to na etapie include-a
// Gdyby nie to, to pisanie kodu w Unity, by miało "UnityEngine" przed wystąpieniami funkcji/danych unity, np. UnityEngine::Vector3
using namespace std;


// main to funkcja która zaczyna działanie kodu. Jest to jedna z rzeczy która jest stała w większości języków, np. c#, rust, odin, java
// wyjątki od reguły to np. python, bo python w praktyce siedzi na starcie w main-ie. c# też pozwala na skipnięcie main-a co może być przydatne
// w przypadku kodu czysto funkcyjnego, ale nie da się wtedy zrobić klas w tego typu pliku
int main(int argc, char *argv[]){

	// cout i endl to streamy(?) które są dodawane z biblioteki iostream
	// cout mówi gdzie ma być wypisany napis
	// endl dodaje nową linię na koniec. Da się też użyć "\n" w napisie
	cout<<"Hello World!"<<endl;
	// std::cout<<"Hello World!"<<std::endl; też działa
	// cout<<"Hello World!";
}

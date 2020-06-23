/*
 * Напишите функцию BuildMapValuesSet, принимающую на вход словарь map<int, string> и возвращающую множество значений
 * этого словаря:
 *
 * set<string> BuildMapValuesSet(const map<int, string>& m) {
  // ...
}*/
/*
#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;
*/
set<string> BuildMapValuesSet(const map<int, string>& m) {
    set<string> val;
    for (auto item : m) {
       val.insert(item.second);
    }
    return val;
}
/*

int main() {
    set<string> values = BuildMapValuesSet({
                                                   {1, "odd"},
                                                   {2, "even"},
                                                   {3, "odd"},
                                                   {4, "even"},
                                                   {5, "odd"}
                                           });

    for (const string& value : values) {
        cout << value << endl;
    }
    return 0;

}*/
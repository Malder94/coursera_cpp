/*
 * Реализуйте справочник столиц стран.
 *
 * На вход программе поступают следующие запросы:
 * CHANGE_CAPITAL country new_capital — изменение столицы страны country на new_capital, либо добавление такой страны
 * с такой столицей, если раньше её не было.
 * RENAME old_country_name new_country_name — переименование страны из old_country_name в new_country_name.
 * ABOUT country — вывод столицы страны country.
 * DUMP — вывод столиц всех стран.
 *
 * Формат ввода
 *
 * В первой строке содержится количество запросов Q, в следующих Q строках — описания запросов. Все названия стран
 * и столиц состоят лишь из латинских букв, цифр и символов подчёркивания.
 *
 * Формат вывода
 *
 * Выведите результат обработки каждого запроса:
 * В ответ на запрос CHANGE_CAPITAL country new_capital выведите
 * Introduce new country country with capital new_capital, если страны country раньше не существовало;
 * Country country hasn't changed its capital, если страна country до текущего момента имела столицу new_capital;
 * Country country has changed its capital from old_capital to new_capital, если страна country до текущего момента
 * имела столицу old_capital, название которой не совпадает с названием new_capital.
 * В ответ на запрос RENAME old_country_name new_country_name выведите
 * Incorrect rename, skip, если новое название страны совпадает со старым, страна old_country_name не существует
 * или страна new_country_name уже существует;
 * Country old_country_name with capital capital has been renamed to new_country_name, если запрос корректен и страна
 * имеет столицу capital.
 *
 * В ответ на запрос ABOUT country выведите
 * Country country doesn't exist, если страны с названием country не существует;
 * Country country has capital capital, если страна country существует и имеет столицу capital.
 *
 * В ответ на запрос DUMP выведите
 * There are no countries in the world, если пока не было добавлено ни одной страны;
 * последовательность пар вида country/capital, описывающую столицы всех стран, если в мире уже есть хотя бы одна
 * страна. При выводе последовательности пары указанного вида необходимо упорядочить по названию страны и разделять
 * между собой пробелом.
 * */

#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, int> BuildCharCounters(const string& word) {
    map<char, int> letters;

    for (const char& w : word) {
        if (letters.count(w) == 0) {
            letters[w] = 1;
        } else {
            ++letters[w];
        }
    }

    return letters;
}

void ChangeCapital(map<string, string>& world) {
    string country, capital;

    cin >> country >> capital;

    if (world.count(country) == 0) {
        cout << "Introduce new country " << country << " with capital " << capital << endl;
        world[country] = capital;
    } else {
        if (world[country] == capital) {
            cout << "Country " << country << " hasn't changed its capital" << endl;
        } else {
            cout << "Country " << country << " has changed its capital from " << world[country] << " to " << capital << endl;
            world[country] = capital;
        }
    }


}

void Rename(map<string, string>& world) {
    string oldCountryName, newCountryName;
    cin >> oldCountryName >> newCountryName;

    bool isRight = oldCountryName == newCountryName || world.count(oldCountryName) == 0 || world.count(newCountryName) == 1;

    if (!isRight) {
        cout << "Country " << oldCountryName << " with capital " <<  world[oldCountryName] << " has been renamed to " << newCountryName << endl;
        world[newCountryName] = world[oldCountryName];
        world.erase(oldCountryName);
    } else {
        cout << "Incorrect rename, skip\n";
    }
}

void About(map<string, string>& world) {
    string country;

    cin >> country;

    if (world.count(country) == 1) {
        cout << "Country " << country << " has capital " << world[country] << endl;
    } else {
        cout << "Country " << country << " doesn't exist" << endl;
    }
}

void Dump (const map<string, string>& world) {
    if (world.size() == 0) {
        cout << "There are no countries in the world\n";
    } else {
        for (auto w : world) {
            cout << w.first << '/' << w.second << endl;
        }
    }
}

int main() {
    int n = 0; // Число команд
    map <string, string> world;

    cin >> n;

    while (n > 0) {
        string command;
        cin >> command;

        if (command == "CHANGE_CAPITAL") { ChangeCapital(world);}

        if (command == "RENAME") {Rename(world);}

        if (command == "ABOUT") {About(world);}

        if (command == "DUMP") {Dump(world);}
        n--;
    }

    return 0;
}
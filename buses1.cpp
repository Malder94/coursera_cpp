/*
 * Реализуйте систему хранения автобусных маршрутов. Вам нужно обрабатывать следующие запросы:
 * NEW_BUS bus stop_count stop1 stop2 ... — добавить маршрут автобуса с названием bus и stop_count остановками с
 * названиями stop1, stop2, ...
 * BUSES_FOR_STOP stop — вывести названия всех маршрутов автобуса, проходящих через остановку stop.
 * STOPS_FOR_BUS bus — вывести названия всех остановок маршрута bus со списком автобусов, на которые можно пересесть
 * на каждой из остановок.
 * ALL_BUSES — вывести список всех маршрутов с остановками.
 *
 * Формат ввода
 *
 * В первой строке ввода содержится количество запросов Q, затем в Q строках следуют описания запросов.
 * Гарантируется, что все названия маршрутов и остановок состоят лишь из латинских букв, цифр и знаков подчёркивания.
 * Для каждого запроса NEW_BUS bus stop_count stop1stop2 ... гарантируется, что маршрут bus отсутствует, количество
 * остановок больше 0, а после числа stop_count следует именно такое количество названий остановок, причём все названия
 * в каждом списке различны.
 *
 * Формат вывода
 *
 * Для каждого запроса, кроме NEW_BUS, выведите соответствующий ответ на него:
 * На запрос BUSES_FOR_STOP stop выведите через пробел список автобусов, проезжающих через эту остановку, в том порядке,
 * в котором они создавались командами NEW_BUS. Если остановка stop не существует, выведите No stop.
 * На запрос STOPS_FOR_BUS bus выведите описания остановок маршрута bus в отдельных строках в том порядке, в котором они
 * были заданы в соответствующей команде NEW_BUS. Описание каждой остановки stop должно иметь вид Stop stop:
 * bus1bus2 ..., где bus1bus2 ... — список автобусов, проезжающих через остановку stop, в порядке, в котором они
 * создавались командами NEW_BUS, за исключением исходного маршрута bus. Если через остановку stop не проезжает ни один
 * автобус, кроме bus, вместо списка автобусов для неё выведите no interchange. Если маршрут bus не существует, выведите
 * No bus.
 * На запрос ALL_BUSES выведите описания всех автобусов в алфавитном порядке. Описание каждого маршрута bus должно иметь
 * вид Bus bus: stop1stop2 ..., где stop1stop2 ... — список остановок автобуса bus в порядке, в котором они были заданы
 * в соответствующей команде NEW_BUS. Если автобусы отсутствуют, выведите No buses.
 *
 * Предупреждение
 * Условие задачи выше содержит много важных деталей. Если вы не уверены в том, что не упустили ни одной, перечитайте
 * условие ещё раз.
 * */

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void NewBus (map<string, vector<string>>& buses, map<string, vector<string>>& stops) {
    string bus, stop;
    vector<string> newStops;
    int count;
    bool isAppendBus = false;

    cin >> bus >> count;

    while (count > 0) {
        cin >> stop;
        newStops.push_back(stop);
        if (stops.count(stop) == 0){
            stops[stop].push_back(bus);
        } else {
            for (auto b : stops[stop]) {
                if (b != bus) {
                    isAppendBus = true;
                } else {
                    isAppendBus = false;
                }
            }

            if (isAppendBus) {
                stops[stop].push_back(bus);
            }
        }
        count--;
    }

    buses[bus] = newStops;
}

void BusesForStop(map<string, vector<string>>& stops) {
    string stop;
    cin >> stop;

    if (stops.count(stop) == 0) {
        cout << "No stop\n";
    } else {
        for (auto s : stops[stop]) {
            cout << s << ' ';
        }
        cout << endl;
    }
}

void StopsForBus(map<string, vector<string>>& buses, map<string, vector<string>>& stops) {
    string bus;
    cin >> bus;

    if (buses.count(bus) == 0) {
        cout << "No bus\n";
    } else {
        for (auto s : buses[bus]) {
            cout <<"Stop " << s << ": ";

            if (stops[s].size() == 1 && stops[s][0] == bus) {
                cout << "no interchange\n";
            } else {
                for (auto b : stops[s]) {
                    if (b != bus) {
                        cout << b << ' ';
                    }
                }
                cout << endl;
            }

        }
    }
}

void AllBuses(map<string, vector<string>>& buses) {
    if (buses.empty()) {
        cout << "No buses\n";
    } else {
        for (auto b : buses){
            cout << "Bus " << b.first << ": ";
            for (auto s : b.second) {
                cout << s << ' ';
            }
            cout << endl;
        }
    }

}

int main() {
    int q = 0; // Число команд
    map <string, vector<string>> buses;
    map <string, vector<string>> stops;

    cin >> q;

    while (q > 0) {
        string opcode;
        cin >> opcode;

        if (opcode == "NEW_BUS") { NewBus(buses, stops);}

        if (opcode == "BUSES_FOR_STOP") {BusesForStop(stops);}

        if (opcode == "STOPS_FOR_BUS") {StopsForBus(buses, stops);}

        if (opcode == "ALL_BUSES") {AllBuses(buses);}
        q--;
    }

    return 0;
}
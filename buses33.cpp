/*
 * В этой задаче вам нужно присваивать номера автобусным маршрутам.
 * А именно, для каждого маршрута, заданного множеством названий остановок, нужно либо выдать новый номер
 * (первому маршруту — 1, второму — 2 и т. д.), либо вернуть номер существующего маршрута, которому соответствует такое
 * множество остановок.
 * В отличие от задачи «Автобусные остановки — 2», наборы остановок, которые можно получить друг из друга перестановкой
 * элементов или добавлением/удалением повторяющихся, следует считать одинаковыми.
 *
 * Формат ввода
 * Сначала вводится количество запросов Q, затем Q описаний запросов.
 * Каждый запрос представляет собой положительное количество остановок N, за которым следуют разделённые пробелом N
 * названий остановок соответствующего маршрута (не обязательно различных). Названия остановок состоят лишь из
 * латинских букв и символов подчёркивания.
 *
 * Формат вывода
 * Выведите ответ на каждый запрос в отдельной строке.
 * Если маршрут с данным набором остановок уже существует, в ответ на соответствующий запрос выведите
 * Already exists for i, где i — номер маршрута с таким набором остановок. В противном случае нужно выделить введённому
 * набору остановок новый номер i и вывести его в формате New bus i.
 * */

#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
    int q = 0; // Число команд
    map <set<string>, int> routes;

    cin >> q;

    while (q > 0) {
        int n = 0; // Запросы
        string stop;


        cin >> n;
        set<string> stops;

        while (n > 0) {
            cin >> stop;
            stops.insert(stop);
            n--;
        }

        if (routes.count(stops) == 0) {
            int newValue = routes.size();
            routes[stops] = ++newValue;
            cout << "New bus " << newValue << endl;
        } else {
            cout << "Already exists for " << routes[stops] << endl;
        }
        q--;
    }

    return 0;
}
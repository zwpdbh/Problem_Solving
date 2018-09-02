//
// Created by zwpdbh on 2018/9/1.
//

#include <iostream>
#include <queue>    // priority queue adapter definition

using namespace std;

int main()
{
    priority_queue<double> priorities;

    priorities.push(3.2);
    priorities.push(9.8);
    priorities.push(5.4);

    cout << "Popping from priorities: ";

    while (!priorities.empty()) {
        cout << priorities.top() << ' ';
        priorities.pop();
    }

    cout << endl;

}
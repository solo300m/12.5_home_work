#include <iostream>
#include <cassert>

using namespace std;

float travelTime(float distance, float speed)
{
    assert(distance >= 0 && speed > 0);
    return distance / speed;
}
int main()
{
    float distance = 0.0f;
    float speed = 0.0f;
    float time = 0.0f;
    cout << "Введите длину пути: ";
    cin >> distance;
    cout << "Введите скорость: ";
    cin >> speed;
    time = travelTime(distance, speed);

    cout << "Время в пути составило: " << time << "\n";
}
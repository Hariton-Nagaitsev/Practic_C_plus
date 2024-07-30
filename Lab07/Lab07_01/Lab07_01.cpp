#include <iostream>

struct Time
{
    int hours;
    int minutes;
    int seconds;

    void ShowTime()
    {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};

Time InputTime();
Time AddTime(const Time&, const Time&);
Time DiffTime(const Time&, const Time&);

int main()
{
    system("chcp 1251");

    Time t1 = InputTime();
    t1.ShowTime();

    Time t2 = InputTime();
    t2.ShowTime();

    AddTime(t1, t2).ShowTime();
    DiffTime(t1, t2).ShowTime();

    return 0;
}

Time InputTime()
{
    Time t;

    std::cout << "\nВведите количество часов: ";
    std::cin >> t.hours;

    std::cout << "Введите количество минут: ";
    std::cin >> t.minutes;
    if (t.minutes >= 60) {
        t.hours += t.minutes / 60;
        t.minutes = t.minutes % 60;
    }

    std::cout << "Введите количество секунд: ";
    std::cin >> t.seconds;
    if (t.seconds >= 60) {
        t.minutes += t.seconds / 60;
        t.seconds = t.seconds % 60;
    }
    return t;
}

Time AddTime(const Time& t1, const Time& t2)
{
    Time t;
    t.hours = t1.hours + t2.hours;

    t.minutes = t1.minutes + t2.minutes;
    if (t.minutes >= 60) {
        t.hours += t.minutes / 60;
        t.minutes = t.minutes % 60;
    }

    t.seconds = t1.seconds + t2.seconds;
    if (t.seconds >= 60) {
        t.minutes += t.seconds / 60;
        t.seconds = t.seconds % 60;
    }
    return t;
}

Time DiffTime(const Time& t1, const Time& t2)
{
    Time t;

    t.hours = t1.hours - t2.hours;
    if (t.hours < 0) {
        t.minutes += t.hours * 60;
        t.hours = 0;
    }

    t.minutes = t1.minutes - t2.minutes;
    if (t.minutes < 0) {
        t.seconds += t.minutes * 60;
        t.minutes = 0;
    }

    t.seconds = t1.seconds - t2.seconds;
    if (t.seconds < 0) {
        t.seconds = 0;
    }
    return t;
}

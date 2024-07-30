#include <iostream>
#include <stdexcept>
#include <cmath>
#include "Time.h"

void Time::validate_time(int hours, int minutes, int seconds) {
    if (hours < 0 || minutes < 0 || seconds < 0) {
        throw std::invalid_argument("Время не может быть отрицательным.");
    }
}

void Time::set_hours(int hour) {
    if (hour < 0) {
        throw std::invalid_argument("Часы не могут быть отрицательными.");
    }
    this->hours = hour;
}

int Time::get_hours() const {
    return this->hours;
}

void Time::set_minutes(int minute) {
    if (minute < 0) {
        throw std::invalid_argument("Минуты не могут быть отрицательными.");
    }
    this->minutes = minute;
}

int Time::get_minutes() const {
    return this->minutes;
}

void Time::set_seconds(int second) {
    if (second < 0) {
        throw std::invalid_argument("Секунды не могут быть отрицательными.");
    }
    this->seconds = second;
}

int Time::get_seconds() const {
    return this->seconds;
}

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int hours, int minutes, int seconds) {
    validate_time(hours, minutes, seconds);
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds = seconds % 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes = minutes % 60;
    }
    this->set_hours(hours);
    this->set_minutes(minutes);
    this->set_seconds(seconds);
}

Time Time::AddTime(const Time& t) const {
    int new_hours = this->hours + t.hours;
    int new_minutes = this->minutes + t.minutes;
    int new_seconds = this->seconds + t.seconds;

    if (new_seconds >= 60) {
        new_minutes += new_seconds / 60;
        new_seconds = new_seconds % 60;
    }

    if (new_minutes >= 60) {
        new_hours += new_minutes / 60;
        new_minutes = new_minutes % 60;
    }

    return Time(new_hours, new_minutes, new_seconds);
}

Time Time::operator+(const Time& t) const {
    return this->AddTime(t);
}

Time Time::operator-(const Time& t) const {
    int total_seconds_1 = this->hours * 3600 + this->minutes * 60 + this->seconds;
    int total_seconds_2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
    int diff_seconds = std::abs(total_seconds_1 - total_seconds_2);

    int hours = diff_seconds / 3600;
    int minutes = (diff_seconds % 3600) / 60;
    int seconds = diff_seconds % 60;

    return Time(hours, minutes, seconds);
}

Time Time::operator+(double d) const {
    int total_seconds = this->hours * 3600 + this->minutes * 60 + this->seconds;
    total_seconds += static_cast<int>(std::round(d));

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    return Time(hours, minutes, seconds);
}

Time operator+(double d, const Time& t) {
    return t + d;
}

bool Time::operator==(const Time& t) const {
    return this->hours == t.hours && this->minutes == t.minutes && this->seconds == t.seconds;
}

void Time::ShowTime() const {
    std::cout << get_hours() << ":" << get_minutes() << ":" << get_seconds() << std::endl;
}

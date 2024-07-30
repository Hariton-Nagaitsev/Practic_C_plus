#pragma once

class Time {
public:
    void set_hours(int);
    int get_hours() const;
    void set_minutes(int);
    int get_minutes() const;
    void set_seconds(int);
    int get_seconds() const;

    Time();
    Time(int, int, int);

    Time AddTime(const Time&) const;
    void ShowTime() const;

private:
    int hours;
    int minutes;
    int seconds;

    void validate_time(int hours, int minutes, int seconds);
};

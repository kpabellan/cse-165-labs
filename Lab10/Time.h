#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time {
  private:
    int hour;
    int minute;
    int second;

    void format() {
      int totalSeconds = hour * 3600 + minute * 60 + second;
      hour = (totalSeconds / 3600) % 24;
      minute = (totalSeconds % 3600) / 60;
      second = totalSeconds % 60;
    }

  public:
    Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {
      format();
    }

    Time(const Time &time) : hour(time.hour), minute(time.minute), second(time.second) {}

    ~Time() {}

    int getHours() {
      return hour;
    }

    int getMinutes() {
      return minute;
    }

    int getSeconds() {
      return second;
    }

    void setHours(int hour) {
      this->hour = hour;
      format();
    }

    void setMinutes(int minute) {
      this->minute = minute;
      format();
    }

    void setSeconds(int second) {
      this->second = second;
      format();
    }

    Time operator+(const Time &time) {
      int totalSeconds = second + time.second;
      int carryMinutes = totalSeconds / 60;
      int seconds = totalSeconds % 60;

      int totalMinutes = minute + time.minute + carryMinutes;
      int carryHours = totalMinutes / 60;
      int minutes = totalMinutes % 60;

      int hours = hour + time.hour + carryHours;

      return Time(hours, minutes, seconds);
    }

    Time operator++(int) {
      Time temp(*this);
      ++(*this);
      return temp;
    }
  
    Time operator++() {
      hour++;
      format();
      return *this;
    }

    void print() {
      std::cout << hour << " hours, " << minute << " minutes, " << second << " seconds " << std::endl;
    }
};

#endif
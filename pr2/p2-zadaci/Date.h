#ifndef DATE_H
#define DATE_H

class Date {
  int day;
  int month;
  int year;

public:
  Date(const int day, const int month, const int year);
  Date() = default;

  // setters
  void setDay(int day);
  void setMonth(int month);
  void setYear(int year);
  // getters
  int getDay() const;
  int getMonth() const;
  int getYear() const;
};

#endif
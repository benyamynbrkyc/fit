#ifndef DATE_H
#define DATE_H

class Date {
   private:
    int _day;
    int _month;
    int _year;

   public:
    void create(int day, int month, int year, bool& err);
    bool isValid(int day, int month, int year);
    int getDay();
    int getMonth();
    int getYear();
    void setDay(int day, bool& err);
    void setMonth(int month, bool& err);
    void setYear(int year, bool& err);
    void copy(Date d);
    void addDays(int numOfDays);
    int diffDays(Date d);
};

#endif
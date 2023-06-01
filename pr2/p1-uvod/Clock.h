#ifndef CLOCK_H
#define CLOCK_H

class Clock {
   private:
    int time;

   public:
    Clock();
    ~Clock();
    void tick();
    int getTime() const;
};

#endif
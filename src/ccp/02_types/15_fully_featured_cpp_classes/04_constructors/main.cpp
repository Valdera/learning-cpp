#include <cstdio>

class ClockOfTheLongNow {
   private:
    int year;

   public:
    ClockOfTheLongNow() {
        year = 2019;
    }

    ClockOfTheLongNow(int year_in) {
        year = year_in;
    }

    void add_year() {
        year++;
    }

    bool set_year(int new_year) {
        if (new_year < 2019) return false;
        year = new_year;
        return true;
    }

    int get_year() {
        return year;
    }
};

int main() {
    ClockOfTheLongNow clock{2020};
    printf("Year: %d\n", clock.get_year());
}
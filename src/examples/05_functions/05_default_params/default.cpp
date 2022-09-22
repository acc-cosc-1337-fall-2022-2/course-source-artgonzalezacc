#include "default.h"

double get_weekly_pay(double salary)
{
    return salary / 52;
}

double get_weekly_pay(double hours, double rate)
{
    return hours * rate;
}

double get_total(double amount, double rate)
{
    return amount * rate;
}

double get_total(double amount, int num, double rate)
{
    return amount * num * rate;
}
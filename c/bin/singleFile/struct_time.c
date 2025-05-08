#include <stdio.h>
#include <stdbool.h>

struct time {
  int year;
  int month;
  int date;
};

bool checkYear(int year) 
{ 
    if (year % 400 == 0) 
        return true; 
  
    else if (year % 100 == 0) 
        return false; 
  
    else if (year % 4 == 0) 
        return true; 

    return false; 
} 

int getday(int month) {
  int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int count = 0;
  for(int i = 0; i < month - 1; i++) {
    count += days_in_month[i];
  }
  return count;
}


int main() {
  struct time time;
  scanf("%d %d %d", &time.year, &time.month, &time.date);
  int days;
  if(checkYear(time.year)) {
    days = getday(time.month);
    days += 1 + time.date;
  } else {
    days = getday(time.month);
    days += time.date;
  }
  printf("%d\n", days);
  return 0;
}
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
struct interval {
    int first;
    int second;
};

int sum_intervals(const struct interval *v, size_t n)
{
  int over_min = v[0].first;
  int over_max = v[0].second;
  int res = 0;
  size_t z = 0;
  while (z < n)
  {
    z++;
    for (size_t i = 1; i<n; i++) 
    {
      if ((v[i].first >= over_min) && (v[i].first <= over_max)) {
        if (v[i].second > over_max) {
          over_max = v[i].second;
        }
      } else if ((v[i].second >= over_min) && (v[i].second <= over_max)) {
        if (v[i].first < over_min) {
          over_min = v[i].first;
        }
      }
    }
  }
  
  
  
  for (size_t i = 1; i<n; i++) {
    if ((v[i].first >= over_min) && (v[i].first <= over_max)) {
      if (v[i].second > over_max) {
        over_max = v[i].second;
      }
    } else if ((v[i].second >= over_min) && (v[i].second <= over_max)) {
      if (v[i].first < over_min) {
        over_min = v[i].first;
      }
    } else {
      res += abs(v[i].first - v[i].second);
    }
  }
  
  printf("%d\n", res);
  return abs(over_min-over_max)+res;
}
int sum(int* numbers, int numbersCount)
{
  if (numbersCount < 2) return 0;
  int result= 0;
  int min = numbers[0];
  int max = numbers[0];
  for (int i = 0; i < numbersCount; i++) {
    result += numbers[i];
    if (min < numbers[i]) min = numbers[i];
    if (max > numbers[i]) max = numbers[i];
  }
  return result-min-max; 
}
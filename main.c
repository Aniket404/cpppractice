#include <stdio.h>
#include <time.h>

int main() {

  const char filename[] = "file";

  struct info_t { char first_name[81]; int birth_date; };
  struct info_t info;

#ifdef pass1

  printf("Enter your first name: ");
  if (scanf("%80s", info.first_name) != 1) {
    printf("Invalid input for first name\n");
    return 1;
  }

  printf("Enter your birth date in the form yyyymmdd: ");
  if (scanf("%8d", &info.birth_date) != 1) {
    printf("Invalid input for birth date\n");
    return 1;
  }

  FILE *fptr = fopen(filename, "wb");
  if (!fptr) {
    printf("Cannot open file %s for writing\n", filename);
    return 1;
  }

  if (fwrite(&info, sizeof(info), 1, fptr) != 1) {
    printf("Error writing to file\n");
    fclose(fptr);
    return 1;
  }

  fclose(fptr);

#elif defined(pass2)

  FILE *fptr = fopen(filename, "rb");
  if (!fptr) {
    printf("Cannot open file %s for reading\n", filename);
    return 1;
  }

  if (fread(&info, sizeof(info), 1, fptr) != 1) {
    printf("Error reading from file\n");
    fclose(fptr);
    return 1;
  }
  fclose(fptr);

  int birth_date = info.birth_date;
  int year = birth_date / 10000;
  birth_date -= year * 10000;
  int month = birth_date / 100;
  birth_date -= month * 100;
  int day = birth_date;

  time_t calendartime = time(NULL);
  if (calendartime == (time_t)(-1)) {
    printf("Calendar time not available\n");
    return 1;
  }

  struct tm *localtime_ptr = localtime(&calendartime);
  if (!localtime_ptr) {
    printf("Error retrieving local time\n");
    return 1;
  }

  int current_year = localtime_ptr->tm_year + 1900;
  int current_month = localtime_ptr->tm_mon + 1;  // tm_mon is 0-based
  int current_day = localtime_ptr->tm_mday;

  int age = current_year - year;

  // Check if the birthday has not occurred yet this year
  if (current_month < month || (current_month == month && current_day < day)) {
    age--;
  }

  printf("%s, you are %d years old\n", info.first_name, age);

#else
  //#error "You must include -Dpass1 or -Dpass2"
#endif

  return 0;
}

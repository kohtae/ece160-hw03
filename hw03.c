typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  // TODO: add fields here for major and year
  char *major;
  int year;

} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
    // TODO: handle other cases
    case MAJOR_AND_NAME:
    printf("%s %s &s\n", s.major, s.first_name, s.last_name);
    break;
    case YEAR_AND_NAME:
    printf("%d %s %s \n", s.year, s.first_name, s.last_name);
    break;
  }
}

/*
	argv[1] will be the Mode integer
	argv[2...] will be student info in the form [first_name, last_name, major, year]
	the fields are all strings (char[])
	except year is a number (int)
*/
int main(int argc, char* argv[]) {
  // TODO: parse argv to populate student structs 
  // for now, here's two hardcoded students:
  int count_student = argc - 2, count_type = 1 ;

  while ( 0 < count_student){
    int name1 = count_type + 1;
    int name2 = count_type + 2;
    int mjr = count_type + 3;
    int yr = count_type + 4;
    Student s1;
    s1.first_name = argv[name1];
    s1.last_name = argv[name2];
    s1.major = argv[mjr];
    s1.year = atoi(yr]);
    if (atoi(argv[1]) == 0){
      print_student(NAME_ONLY, s1);
    }
    else if (atoi(argv[1]) == 1);{
      print_student(MAJOR_AND_NAME, s1);
    }
    else if (atoi(argv[1]) == 2){
      print_student(YEAR_AND_NAME, s1);
    }
count_student = count_student - 4;
count_type = count_type + 4;

  }
  return 0;
}

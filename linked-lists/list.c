#include "list.h"

list_t* list_new() {
  printf("lol\n");
  exit(1);
}

void list_delete() {
  printf("lol\n");
  exit(1);
}

node_t* list_add_item(list_t* list, void* data) {
  printf("lol\n");
  exit(1);
}

node_t* list_get(list_t* list, size_t i) {
  printf("lol\n");
  exit(1);
}

void list_print_contents(list_t* list) {
  printf("lol\n");
  exit(1);
}

void list_reverse(list_t* list) {
  printf("lol\n");
  exit(1);
}

int main() {
  list_t* list = list_new();

  char* one = "one";
  char* two = "two";
  char* three = "three";
  char* four = "four";
  char* five = "five";

  list_add_item(list, one);
  list_add_item(list, two);
  list_add_item(list, three);
  list_add_item(list, four);
  list_add_item(list, five);

  printf("\nHere's us traversing through the list:\n");
  list_print_contents(list);

  printf("\nHere's us traversing through the list by repeated random access:\n");
  for (int i = 0; i < 5; ++i) {
    printf("%s\n", list_get(list, i)->data);
  }

  printf("\nHere's the same list backwards:\n");
  list_reverse(list);
  list_print_contents(list);

  // I encourage you to mess with this data structure a little bit. Try some
  // weird inputs. Try inserting elements in an infinite loop and see what
  // happens. Always push things to the limit. There are people who are
  // satisfied with what is comfortable and typical. Then there are the people
  // who want to go to the edges of the world just to see what it's like. In
  // life, there's nothing wrong with falling into the first camp. I suspect at
  // some point in our lives we all do. However in computer science, the desire
  // and ability to push things to the edge is what makes the difference between 
  // the developer and the engineer.

  list_delete(list);

  return 0;
}


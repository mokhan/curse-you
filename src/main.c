#include <ncurses.h>

void hello_world() {
  initscr();
  printw("Hello world!!!");
  refresh();
  getch();
  endwin();
}

int main(int argc, const char *argv[])
{
  hello_world();
  return 0;
}

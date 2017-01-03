#include <ncurses.h>

int main(int argc, const char *argv[])
{
  initscr();
  printw("Hello world!!!");
  refresh();
  getch();
  endwin();
  return 0;
}

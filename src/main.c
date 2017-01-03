#include <ncurses.h>
#include <string.h>

void hello_world() {
  initscr();
  printw("Hello world!!!");
  refresh();
  getch();
  endwin();
}

void printw_example(){
  char mesg[]="Just a string";
  int row,col;
  initscr();
  getmaxyx(stdscr,row,col);
  mvprintw(row/2, (col-strlen(mesg))/2, "%s", mesg);
  mvprintw(row-2, 0, "this screen has %d rows and %d columns\n",row,col);
  printw("Try resizing your window (if possible) and then run this program again");
  refresh();
  getch();
  endwin();
}

int main(int argc, const char *argv[])
{
  hello_world();
  printw_example();
  return 0;
}

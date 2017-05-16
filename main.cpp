//
// Created by artur on 3/31/17.
//

#include <iostream>
#include <ncurses.h>
int main(){
  initscr();
  int ch;
  raw();
  keypad(stdscr, TRUE);
  noecho();
  printw("temporary text here");
  ch = getch();
  printw(ch+"");
  refresh();
// getch();
  endwin();

  return 0;
}

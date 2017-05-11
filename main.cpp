//
// Created by artur on 3/31/17.
//

#include "main.h"
#include <iostream>
#include <ncurses.h>
int main(){
  initscr();
  int ch;
  raw();
  keypad(stdscr, TRUE);
  noecho();
  printw("Bolden the below")
  ch = getch();
  refresh();
  getch();
  endwin();

  return 0;
}

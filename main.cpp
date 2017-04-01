//
// Created by artur on 3/31/17.
//

#include "main.h"
#include <iostream>
#include <ncurses.h>
int main(){
  initscr();
  printw("hai");
  refresh();
  getch();
  endwin();

  return 0;
}

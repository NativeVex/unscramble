//
// Created by artur on 3/31/17.
//

#include <iostream>
#include <ncurses.h>
int main(){
  initscr();
  char str[80]; 
  raw();
  keypad(stdscr, TRUE);
  noecho();
  printw("temporary text here");
  getstr(str);
 // printw(str); // apparently this doesn't 
  printf(str); //this works, str is written to. 
  refresh();
//  mvprintw("you typed %s", str);
  getch();
  printw("you entered %s", str);
  refresh();
  getch();
  endwin();

  return 0;
}

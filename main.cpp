//
// Created by artur on 3/31/17.
//

#include <iostream>
#include <ncurses.h>
#include <curses.h>

int main(){
  initscr();
  char str[80]; 
  raw();
  keypad(stdscr, TRUE);
  noecho();
  printw("Type in your scramble sentence. Scramble each word of your sentence.\n");
  //cbreak();
  getstr(str); 
  printf(str); //this works, str is written to. 
  refresh();
  getch();
  printw("you entered %s", str);
  refresh();
  getch();
  endwin();

  return 0;
}

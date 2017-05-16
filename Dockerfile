from gcc:4.9.4
workdir /unscramble
add . /unscramble
env term xterm
run ls
run g++ main.cpp -o main -lncurses

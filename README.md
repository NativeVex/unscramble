##How to compile and run this stuff
docker build . -t "test"
docker run -ti test
//this should open up the interactive terminal for the container. If you want to modify the files, write to main.cpp and rebuild using the above commands.

##Once in the container
you can run ./main when you're ready to run main.cpp, assuming you didn't rename main.cpp to anything else. If you need to compile any other files, include said instructions in the Dockerfile that's in the same folder as this document. If you commit a broken Dockerfile I will find you and I will reset you.

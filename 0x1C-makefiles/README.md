If you want to run or update a task when certain files are updated, the make utility can come in handy. The make utility requires a file, Makefile (or makefile), which defines set of tasks to be executed. You may have used make to compile a program from source code. Most open source projects use make to compile a final executable binary, which can then be installed using make install.

Let's start by printing the classic "Hello World" on the terminal. Create a empty directory myproject containing a file Makefile with this content:

say_hello:
        echo "Hello World"

Now run the file by typing make inside the directory myproject. The output will be:

$ make
echo "Hello World"
Hello World

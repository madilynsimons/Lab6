# Variable for compiler
CC=gcc
# Variable for compiler options
CFLAGS=-c -fPIC -I.
# Variable for cleanup command
# to clean .o file
CLEANUP=rm -rf *o

# Entry point and exit point for call to "make".
# all is the target and compile is dependency.
# makeRanLib will be completed before all.
all: makeLink

# Execute this after makeLib
# Creates an index inside the library
makeLink: makeLib
#	ln -sf libArray.so.0.0 libArray.so.0
	ln -sf libArray.so.0 libArray.so

# Execute this after all Array object files are created
# Create a library file libArray.a
makeLib: add.o add_from_con.o avg.o clear_vector.o copy.o copy_range.o create_vector.o dbl_equals.o delete_vector.o divv.o dot.o empty_vector.o equals.o fill.o get_from_con.o insert.o mul.o print_vec.o read_from_file.o reverse.o search.o sort.o stdv.o sub.o sum.o swap.o var.o write_to_file.o zeros.o
	ar rc libArray.a add.o add_from_con.o avg.o clear_vector.o copy.o copy_range.o create_vector.o dbl_equals.o delete_vector.o divv.o dot.o empty_vector.o equals.o fill.o get_from_con.o insert.o mul.o print_vec.o read_from_file.o reverse.o search.o sort.o stdv.o sub.o sum.o swap.o var.o write_to_file.o zeros.o

# Create object files
toUpper.o: toUpper.c
	$(CC) $(CFLAGS) toUpper.c

add.o: add.c
	$(CC) $(CFLAGS) add.c

add_from_con.o: add_from_con.c
	$(CC) $(CFLAGS) add_from_con.c

avg.o: avg.c
	$(CC) $(CFLAGS) avg.c

clear_vector.o: clear_vector.c
	$(CC) $(CFLAGS) clear_vector.c

copy.o: copy.c
	$(CC) $(CFLAGS) copy.c

copy_range.o: copy_range.c
	$(CC) $(CFLAGS) copy_range.c

create_vector.o: create_vector.c
	$(CC) $(CFLAGS) create_vector.c

dbl_equals.o: dbl_equals.c
	$(CC) $(CFLAGS) dbl_equals.c

delete_vector.o: delete_vector.c
	$(CC) $(CFLAGS) delete_vector.c

divv.o: divv.c
	$(CC) $(CFLAGS) divv.c

dot.o: dot.c
	$(CC) $(CFLAGS) dot.c

empty_vector.o: empty_vector.c
	$(CC) $(CFLAGS) empty_vector.c

equals.o: equals.c
	$(CC) $(CFLAGS) equals.c

fill.o: fill.c
	$(CC) $(CFLAGS) fill.c

get_from_con.o: get_from_con.c
	$(CC) $(CFLAGS) get_from_con.c

insert.o: insert.c
	$(CC) $(CFLAGS) insert.c

mul.o: mul.c
	$(CC) $(CFLAGS) mul.c

print_vec.o: print_vec.c
	$(CC) $(CFLAGS) print_vec.c

read_from_file.o: read_from_file.c
	$(CC) $(CFLAGS) read_from_file.c

reverse.o: reverse.c
	$(CC) $(CFLAGS) reverse.c

search.o: search.c
	$(CC) $(CFLAGS) search.c

sort.o: sort.c
	$(CC) $(CFLAGS) sort.c

stdv.o: stdv.c
	$(CC) $(CFLAGS) stdv.c

sub.o: sub.c
	$(CC) $(CFLAGS) sub.c

sum.o: sum.c
	$(CC) $(CFLAGS) sum.c

swap.o: swap.c
	$(CC) $(CFLAGS) swap.c

var.o: var.c
	$(CC) $(CFLAGS) var.c

write_to_file.o: write_to_file.c
	$(CC) $(CFLAGS) write_to_file.c

zeros.o: zeros.c
	$(CC) $(CFLAGS) zeros.c

# This compiles the executable file test.exe
# using the static library libArray.a
compile:
	gcc -o test.exe main.c -L. -lArray

# Run the executable with the library path
run:
	LD_LIBRARY_PATH="." ./test.exe

# Remove object
clean:
	$(CLEANUP)

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

student: $(OBJ)
	gcc $(OBJ) -o app

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJ) app



# app: main.o stud_add.o stud_show.o stud_del.o
	# gcc main.o stud_add.o stud_show.o stud_del.o -o app

# main.o: main.c
	# gcc -c main.c

# stud_add.o: stud_add.c
	# gcc -c stud_add.c

# stud_show.o: stud_show.c
	# gcc -c stud_show.c

# stud_del.o: stud_del.c
	# gcc -c stud_del.c 
	
	
# To execute all c files directly 
#SRC = $(wildcard *.c)

#all:
	#gcc $(SRC) -o student

app: main.o stud_add.o stud_show.o
	gcc main.o stud_add.o stud_show.o -o app

main.o: main.c
	gcc -c main.c

stud_add.o: stud_add.c
	gcc -c stud_add.c

stud_show.o: stud_show.c
	gcc -c stud_show.c

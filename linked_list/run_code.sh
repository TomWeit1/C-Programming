gcc -c linked_list_class.c -o linked_list_class.o
ar rcs lib_linked_list.a linked_list_class.o
gcc -c tester.c -o tester.o
gcc -o tester tester.o -L. -l_linked_list
./tester
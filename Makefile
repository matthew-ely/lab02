NAME = primesum
NAME2 = exclusive
NAME3 = endtime

compile:
	g++ -Wall -pedantic-errors -o $(NAME) $(NAME).cpp
	g++ -Wall -pedantic-errors -o $(NAME2) $(NAME2).cpp
	g++ -Wall -pedantic-errors -o $(NAME3) $(NAME3).cpp

run: compile
	./$(NAME)
	./$(NAME2)
	./$(NAME3)

clean:
	rm -f $(NAME)
	rm -f $(NAME2)
	rm -f $(NAME3)

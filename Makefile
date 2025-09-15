CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Phony target to allow 'make N' even if a file named 'N' exists
.PHONY: all clean $(MAKECMDGOALS)

# A specific rule to handle compiling and running questao-N.c
# The '$@' is an automatic variable that represents the target (e.g., '1')
# The '$<' is an automatic variable that represents the first prerequisite (e.g., 'questao-1.c')
# The '$(MAKECMDGOALS)' is a special variable that holds the names of the targets given on the command line
$(MAKECMDGOALS):
	# Compile questao-$(MAKECMDGOALS).c into questao-$(MAKECMDGOALS).out
	$(CC) $(CFLAGS) atividade-3/questao-$@.c -o atividade-3/questao-$@.out
	# Run the compiled binary
	./atividade-3/questao-$@.out

# Rule to remove generated binaries and object files
clean:
	rm -f *.out
CC = g++
OBJ = $(SRC:.cpp=.o)
CFLAGS = -std=c++17
SRC = main.cpp
EXEC = program

all: $(EXEC)
	@echo "build complete"
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $@
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(EXEC)
	@echo "Cleaned up object and executable files."

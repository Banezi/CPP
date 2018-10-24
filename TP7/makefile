GXX=g++

SRC=$(wildcard *.cpp)
EXE=test

GXXFLAGS+=-Wall -Wextra -MMD -g -O2
LDFLAGS=

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(GXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(GXX) $(GXXFLAGS) -o $@ -c $<

clean:
	@rm -rf build core *.gch

exe:
	@make
	@./$(EXE)

-include $(DEP)



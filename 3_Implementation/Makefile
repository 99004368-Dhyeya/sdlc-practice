PROJ_NAME = driver

TEST_PROJ_NAME = test_$(PROJ_NAME)

SRC = src/newton_raphson.c src/bisection.c src/regula_falsi.c src/root_function.c \
src/simpson_1_3.c src/trapezoidal.c src/simpson_3_8.c src/numerical_integration.c \
src/forward_difference.c src/backward_difference.c src/two_point_difference.c src/numerical_differentiation.c

TEST_SRC = test/test.c \
unity/unity.c

INC = -I inc 

INC_T = -I unity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
    RM = rm -rf
    FixPath = $1
	EXEC = out
   endif
endif

.PHONY : all run clean

all: $(SRC)
	gcc main.c $(SRC) $(INC) -lm -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run: $(PROJ_NAME).$(EXEC)
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(SRC) $(INC) $(INC_T) -lm -o $(TEST_PROJ_NAME).$(EXEC)
	./$(TEST_PROJ_NAME).$(EXEC)

coverage: $(PROJ_NAME).$(EXEC)
	gcc -fprofile-arcs -ftest-coverage main.c $(SRC) $(INC) -lm -o $(PROJ_NAME).$(EXEC)
	./$(PROJ_NAME).$(EXEC) < input.txt
	gcov -a main.c

staticcheck: 
	cppcheck --enable=all --suppress=missingIncludeSystem main.c $(SRC) inc/anm.h $(INC)

memcheck:
	valgrind ./$(PROJ_NAME).$(EXEC)

clean:
	$(RM) *.$(EXEC) *.gcov *.gcda *.gcno 

analyze: all run test coverage staticcheck memcheck clean
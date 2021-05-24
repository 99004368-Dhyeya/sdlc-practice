PROJ_NAME = driver

TEST_PROJ_NAME = test_$(PROJ_NAME)

SRC = src/root.c\
src/trigo_calc.c\
src/trigo.c\
src/Bisection.c\
src/value_accept.c\
src/calculation.c\
src/Newton_Raphson.c\
src/choice.c\
src/function_plot.c\
src/pbPlots.c\
src/plot_pointer_function.c\
src/points_function_plot.c\
src/supportLib.c\
src/testWritePNG.c\
src/calculateTime.c\
src/startTime.c\
src/endTime.c\
src/PDE_heat.c\
src/Gauss_siedel.c\
src/laplace.c\
src/odenm.c\
src/user_Choice.c


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

.PHONY : all test run clean

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
	$(RM) *.$(EXEC) *.gcov *.gcda *.gcno *.png

analyze: all run test coverage staticcheck memcheck clean
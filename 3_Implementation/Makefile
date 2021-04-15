# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = 3_Implementation
TEST_PROJ_NAME = Test_$(PROJ_NAME)


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

SRC = main.c\
src\create_account.c\
src\deposit.c\
src\display_account.c\
src\search.c\
src\withdraw.c

#TEST_SRC = test/test.c \
#unity/unity.c 
#INC_H = inc
#INC_T = unity

INC = inc

$(PROJECT_NAME):$(SRC)
	gcc -I $(INC) $(SRC)  -o main.exe 
	
	
run : $(PROJECT_NAME)
	$(PROJECT_NAME)

#test:
#	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(PROJECT_NAME))
#	./$(call FixPath,$(PROJECT_NAME))

#to delete all the exe files	
clean :
	rm -rf *exe
#del /q .exe didnt work
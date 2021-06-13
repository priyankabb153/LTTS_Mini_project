# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME = bank
TEST_PROJ_NAME = Test_$(PROJ_NAME)

#BUILD_DIR = Build

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
src\display_account.c\
src\deposit.c\
src\get_account_balance.c\
src\withdraw.c\
src\write_to_file.c



TEST_SRC = test\test.c \
	unity/unity.c 

INC_H=inc
INC= -Iunity

$(PROJECT_NAME):$(SRC)
	gcc -I $(INC_H) $(SRC)  -o main.exe 


#$(BUILD_DIR):
#	mkdir $(BUILD_DIR)


#all:$(BUILD_DIR)
#	gcc main.c $(SRC) $(INC) -I $(INC_H) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

	
#test: $(SRC) $(TEST_SRC)
#	gcc -I $(INC_H) $(INC) $(TEST_SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
#	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))


#test:
#	gcc -I $(INC) $(INC_H) $(TEST_SRC) $(SRC) -o $(PROJECT_NAME).exe
#gcc -I $(INC_H)  $(INC) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC)) 
#	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
  
#test:
#   gcc -I unity -I inc test.c src/create_account.c src/deposit.c src/display_account.c src/search.c src/withdraw.c unity/unity.c -o test.exe

#to delete all the exe files	
clean :
	rm -rf *exe
#del /q .exe didnt work
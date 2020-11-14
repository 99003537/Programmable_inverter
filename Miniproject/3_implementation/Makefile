all: run doc test clean 
#all provides sequence of command
SRC = main.c test/test_inverter.c src/delay.c  src/error_cal.c  src/sequence.c  src/set_iload.c  src/Dutycycle.c unity/unity.c 

#TEST_SRC=main.c test/test_inverter.c src/delay.c  src/error_cal.c  src/sequence.c  src/set_iload.c  src/Dutycycle.c unity/unity.c unity/unity.h unity/unity_internals


BUILD=build

TEST_OUTPUT=$(BUILD)/Test_$(PROJECT_NAME).exe

$(BUILD):
	mkdir build

INC = -Iunity -Iheader


PROJECT_NAME= INVERTER.exe


TEST_OUTPUT= $(BUILD)/Test_$(PROJECT_NAME).exe



$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)


run: $(PROJECT_NAME)
	$(PROJECT_NAME)


doc: 
	make -C documentation


test: $(BUILD)
	gcc $(SRC) $(INC) -o $(TEST_OUTPUT) 

	./$(TEST_OUTPUT)
	
	
clean:
	rm -rf $(PROJECT_NAME) documentation/html

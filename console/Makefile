CPP=g++
CPP_OPTS=-Wall -std=c++11
CPP_OPTS_DEBUG=$(CPP_OPTS) -D_DEBUG

ARCHIVE=ar
ARCHIVE_OPTS=rcs

SRC_DIR=./src
OBJ_DIR=./obj
LIB_DIR=./lib
BIN_DIR=./bin

INCLUDE=-I./include

CLEAN_DIRS=$(OBJ_DIR) $(LIB_DIR) $(BIN_DIR)A

CONSOLE_SRC=$(SRC_DIR)/console.cpp
CONSOLE_OBJ=$(OBJ_DIR)/console.o
CONSOLE_LIB=$(LIB_DIR)/libconsole.a
CONSOLE_DEP=-lconsole

PROGRAM=$(BIN_DIR)/console_test

TEST_SRC=$(SRC_DIR)/test.cpp
TEST_PROGRAM=-o $(PROGRAM)

test: $(CONSOLE_SRC) console_lib
	$(CPP) $(CPP_OPTS) $(INCLUDE) $(TEST_SRC) -L$(LIB_DIR) $(CONSOLE_DEP) $(TEST_PROGRAM)

console_obj: $(CONSOLE_SRC)
	$(CPP) $(CPP_OPTS) $(INCLUDE) -c $(CONSOLE_SRC) -o $(CONSOLE_OBJ)

console_obj_debug: $(CONSOLE_SRC)
	$(CPP) $(CPP_OPTS_DEBUG) $(INCLUDE) -c $(CONSOLE_SRC) -o $(CONSOLE_OBJ)

console_lib: console_obj
	$(ARCHIVE) $(ARCHIVE_OPTS) $(CONSOLE_LIB) $(CONSOLE_OBJ)
	$(ARCHIVE) -t $(CONSOLE_LIB)

console_lib_debug: console_obj_debug
	$(ARCHIVE) $(ARCHIVE_OPTS) $(CONSOLE_LIB) $(CONSOLE_OBJ)
	$(ARCHIVE) -t $(CONSOLE_LIB)

clean:
	rm -rf $(OBJ_DIR)/*
	rm -rf $(LIB_DIR)/*
	rm -rf $(BIN_DIR)/*




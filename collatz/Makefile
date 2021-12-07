CPP=g++
BIN=collatz
BIN_TEST=collatz_test
SRC=lib/collatz.cpp
SRC_MAIN=main.cpp
SRC_TEST=test.cpp

TEST_CLI=test/test-cli.sh

all: build

build:
	$(CPP) -o $(BIN) $(SRC_MAIN) $(SRC)


test: test-lib test-cli

test-lib: build-test
	./$(BIN_TEST)

test-cli: build
	./$(TEST_CLI)


build-test:
	$(CPP) -o $(BIN_TEST) $(SRC_TEST) $(SRC)

clean:
	rm $(BIN) $(BIN_TEST)

.PHONY: build-test test build
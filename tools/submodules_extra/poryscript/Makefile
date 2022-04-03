ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

.PHONY: all clean

all: poryscript$(EXE)
	@:

poryscript$(EXE):
	go build

clean:
	git clean -f -x -d

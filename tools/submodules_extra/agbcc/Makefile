ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

.PHONY: all clean

all: agbcc$(EXE) agbcc_arm$(EXE) old_agbcc$(EXE)
	@:

agbcc$(EXE):
	./build.sh
	./install.sh ../..

clean:
	git clean -f -x -d

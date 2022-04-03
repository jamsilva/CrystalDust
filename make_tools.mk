
MAKEFLAGS += --no-print-directory

TOOLDIRS := $(filter-out tools/submodules_extra,$(wildcard tools/*))

.PHONY: all pre-tools $(TOOLDIRS)

all: pre-tools $(TOOLDIRS)

$(TOOLDIRS):
	@$(MAKE) -C $@

pre-tools:
	git submodule update --recursive --init
	cp -r tools/submodules_extra/* tools

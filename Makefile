PROJECT_NAME=p02_strings
DIRPATH=$(shell realpath .)
DIRNAME=$(shell basename $(DIRPATH))

cmake:
	cmake -S . -B build

build: cmake
	cd build; make

clean:
	rm -rf build

tar:
	cd ..; tar cvfz $(DIRNAME)/p02-strings-JoseAngel-PortilloGarcia.tar.gz --exclude-from=./$(DIRNAME)/.gitignore $(DIRNAME)
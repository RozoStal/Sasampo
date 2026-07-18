.PHONY: build-release

build-release:
	cmake -B build-release -DCMAKE_BUILD_TYPE=Release
	cmake --build build-release
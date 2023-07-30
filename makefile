releaseDir = ./release-build
debugDir = ./debug-build

RED=\033[1;31m
NC=\033[0m # No Color

setup:
	mkdir -p $(releaseDir)
	mkdir -p $(debugDir)

	cd $(releaseDir) && cmake -DCMAKE_BUILD_TYPE=Release ..
	cd $(debugDir) && cmake -DCMAKE_BUILD_TYPE=Debug ..

ifneq ("$(wildcard $(releaseDir))", "")
build-release:
	cd $(releaseDir) && cmake --build .

run-release:
	printf "$(RED)Buidling logi-sim (release):$(NC)"
	make build-release
	printf "\n$(RED)Running logi-sim (release):$(NC)"
	$(releaseDir)/logi-sim
else
build-release:
	@echo "Directory $(releaseDir) not fond. Try running 'make setup' first."

run-release:
	@echo "Directory $(releaseDir) not fond. Try running 'make setup' first."
endif

ifneq ("$(wildcard $(debugDir))", "")
build-debug:
	cd $(debugDir) && cmake --build .

run-debug:
	printf "$(RED)Buidling logi-sim (debug):$(NC)"
	make build-debug
	printf "\n$(RED)Running logi-sim (debug):$(NC)"
	$(debugDir)/logi-sim
else
build-debug:
	@echo "Directory $(debugDir) not fond. Try running 'make setup' first."

run-debug:
	@echo "Directory $(debugDir) not fond. Try running 'make setup' first."
endif
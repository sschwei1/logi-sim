ifdef OS
# windows stuff
	printCommand = echo

	releaseDir = release-build
	debugDir = debug-build

	createReleaseDir = if not exist "./$(releaseDir)" mkdir $(releaseDir)
	createDebugDir = if not exist "./$(debugDir)" mkdir $(debugDir)

	cmakeFlags = -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -G "MinGW Makefiles"
else
# unix stuff
	RED=\033[1;31m
	NC=\033[0m # No Color
	printCommand = printf

	releaseDir = ./release-build
	debugDir = ./debug-build

	createReleaseDir = mkdir -p $(releaseDir)
	createDebugDir = mkdir -p $(debugDir)
endif

setup:
	$(createReleaseDir)
	$(createDebugDir)

	cd $(releaseDir) && cmake -DCMAKE_BUILD_TYPE=Release $(cmakeFlags) ..
	cd $(debugDir) && cmake -DCMAKE_BUILD_TYPE=Debug $(cmakeFlags) ..

ifneq ("$(wildcard $(releaseDir))", "")
build-release:
	cd $(releaseDir) && cmake --build .

run-release:
	$(printCommand) "$(RED)Buidling logi-sim (release):$(NC)"
	make build-release
	$(printCommand) "\n$(RED)Running logi-sim (release):$(NC)"
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
	$(printCommand) "$(RED)Buidling logi-sim (debug):$(NC)"
	make build-debug
	$(printCommand) "\n$(RED)Running logi-sim (debug):$(NC)"
	$(debugDir)/logi-sim
else
build-debug:
	@echo "Directory $(debugDir) not fond. Try running 'make setup' first."

run-debug:
	@echo "Directory $(debugDir) not fond. Try running 'make setup' first."
endif
# Logi Sim
## Overview
- [Setup and Run](#setup-project)

## Setup and Run
When initally pull the project you need to run the setup first
```sh
make setup
```

The project can be easily built in either relese or debug using the following commands
```sh
make build-debug
make build-release
```
Depending on the build target the executeable is either found in `./debug-build` or `./release-build`, both folders are created and initialised with cmake when running the `setup`.
The executeable itself is called `logi-sim`

There is also the possibility to directly build and run the project by using
```sh
make run-debug
make run-release
```

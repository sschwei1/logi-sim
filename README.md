# Logi Sim
## Overview
- [Setup and Run](#setup-and-run)
- [Roadmap](#roadmap)

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

## Roadmap
Here is a quick roadmap on what things are currently implemented, what is currentl worked on and on what to expect in the future.

- :heavy_check_mark:   Fully implemented
- :wrench:   In progress
- :x:   Planned in the future

|Progress|Description|
|:--|:--|
|:heavy_check_mark:|Implement logic gates to simulate circuits|
|:x:|Add UI to create circuits at runtime using SFML|
|:x:|Add possibility to create complex logic blocks (consisting of other gates/blocks) and re-use them|
|:x:|Add possibility to store/load blocks using the file system|

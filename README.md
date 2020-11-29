# FileTransfer

Simple client-server apps to transfer file.

## Requirements

- [Boost 1.58.0](https://www.boost.org/users/history/version_1_58_0.html) or later.
- C++11 compiler.

## Building for Windows

- Install boost.asio.
- Install MS Visual Studio 2015 with update 5.
- Add `BOOST_ROOT` with boost's directory path to environment variables.
- Open solution `FileTransfer.sln` and build.

## Building for Linux

- Install cmake.
- Open terminal in project root directory:
```
mkdir build && cd build
cmake ..
make
```

## Building for OS X

- Install cmake:
```
brew install cmake
```

- Install boost:
```
brew install boost
```

- Open terminal in project root directory:
```
mkdir build && cd build
cmake ..
make
```

## Running

- Start **server** to accept files:
```
server <port> <outDirectory>
```
- Start **client** to transfer file `<transferFilePath>`:
```
client <serverAddress> <serverPort> <transferFilePath>
```
- Transferred file will be at `<outDirectory>`.

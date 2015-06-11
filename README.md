# Requirements
- MS Visual Studio 2015 with update 5
- boost 1.58.0

# Building for Windows
- Install boost.asio
- Add `BOOST_ROOT` with boost's directory path to environment variables
- Open solution and build

# Running
- start server to accept files
```
server <port> <workDirectory>
```
- start client to transfer file
```
client <address> <port> <filePath>
```


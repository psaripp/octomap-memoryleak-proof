# Memory leak proof in octomap

In octomap `deleteNode` leaks memory. This small repo recreates the issue and verifies it's presence.

## Prerequisites

- Valgrind
- [Octomap](https://github.com/OctoMap/octomap)

## Steps to reproduce 

- Install Valgrind
- Compile and install Octomap

- Configure and compile this repo
```
mkdir build
cd build
cmake ../
make
```

- Run with valgrind 
```
valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
         ./ocotmap-memoryleak-poc
cat valgrind-out.txt
```


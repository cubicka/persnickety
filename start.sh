echo $1 > .env
mkdir -p $1
cp template.cpp $1/solution.cpp
code $1/solution.cpp
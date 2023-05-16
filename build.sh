if [ -d "build" ]
then
    echo "build will be cleaned..."
    rm -rf build
    echo "build has been cleaned!"
fi
echo "create build..."
mkdir build
echo "create build finished!"
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
make -C build -j8
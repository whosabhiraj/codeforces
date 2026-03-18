while getopts "n:" flag; do
    case "${flag}" in
        n) name=${OPTARG} ;;
        *) echo "Invalid option: -${OPTARG}" && exit 1 ;;
    esac
done

echo ran $name
g++ -o exec/$name $name.cpp
./exec/$name

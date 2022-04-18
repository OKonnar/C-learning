clear
make
if [ $? != 0 ]
then
    printf "\e[1;31m-[ failed to make ]\n\e[0;37m"
    exit 84
else
    printf "\e[1;32m-[ build successful ]-\n\e[0;37m"
fi
printf "\e[1;37m"
$exe
mkdir -p info
find . -maxdepth 1 -executable -type f ! -name "*.sh" | ( read exe; xxd $exe > info/xxd.txt )
# find . -maxdepth 1 -executable -type f ! -name "*.sh" | ( read exe; strings $exe > info/strings.txt )
find . -maxdepth 1 -executable -type f ! -name "*.sh" | ( read exe; readelf -a $exe > info/readelf.txt )
find . -maxdepth 1 -executable -type f ! -name "*.sh" | ( read exe; objdump -d $exe > info/objdump.txt )
find . -maxdepth 1 -executable -type f ! -name "*.sh" | ( read exe; hexdump -d $exe > info/hexdump.txt )
find . -maxdepth 1 -executable -type f ! -name "*.sh" | ( read exe; strace $exe 2> info/strace.txt 1> /dev/null)
for file in ./info/*.txt
do
    printf '\e[1;35m[ %s ]\e[1;37m has been created\n' "$file"
done
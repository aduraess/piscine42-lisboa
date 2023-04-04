find . -type f \( -name '*.sh' \) | xargs basename -s.sh
# Find all files (not folders) with a name that ends in .sh
#and transforms the name of the file in an argument to detect
#what the file extension is with basename and remove it

cat /etc/passwd | cut -d ":" -f 1 | grep -v '#' | sed -n 'n;p;n' | rev | sort -r | sed -n ''$FT_LINE1','$FT_LINE2'p' | tr "\n" "," | sed 's/,/, /g' | sed 's/, $/./'
# show only the first field of the file(delimited by : ) ignoring comments
#skipping 2 lines starting from the second reversing the lines and sorting by
#reverse alphabetic order and showing only lines between the 2 variables
#replacing new lines with (commas and space) then making the last line end in .

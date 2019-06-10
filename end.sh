name=$(tail .env)
./red < $name/1.txt > output.txt
code output.txt
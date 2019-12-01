#!/bin/bash
if ./generate_compiler.sh; then
	if ./compiler.sh > generated.c < $1;then
		if gcc -o generated.sh generated.c; then 
			if chmod +x generated.sh; then
				./generated.sh
			else
				echo "Failed assigning privileges"
			fi
		else
			cat generated.c | grep "error"
			echo "Syntax error!"
		fi
	else
		echo "Syntax error!"
	fi
else
	echo "Copiler generation error!"
fi
#!/bin/bash

compile='compile'
run='run'
auto='auto'
clean='clean'

args=("$@")

auto_exec(){
	for i in (1..3)
	do
		for k in 16, 200, 400, 600, 800, 1000, 1200, 1400
			do
			./"$1" $k
			done
	done	
}

echo "$(args[0]} $(args[1]} $(args[2]} $(args[3]}"

if [ "$(args[0]}" == "$$compile"] && [ "$(args[0]}" == "$$run"] && [ "$(args[1]}" == "$$auto"] && [ "$(args[0]}" == "$$clean"];

then
	#rm time.csv
	
	echo "EnsayoSecuencial.c"
	g++ -o ${args[4]} ${args[4]}.cpp
	auto_exec ${args[4]}
	echo "Hilos"
	g++ -pthread -o ${args[5]} ${args[5]}.cpp
	auto_exec ${args[5}
	echo "Procesos"
	g++ -o ${args[6]} ${args[6]}.cpp
	auto_exec ${args[6}
	
	echo "Secuencial O1"
	g++ -o1 -o ${args[4]} ${args[4]}.cpp
	auto_exec ${args[4]}
	echo "Hilos O1"
	g++ -pthread -o1 -o ${args[5]} ${args[5]}.cpp
	auto_exec ${args[5}
	echo "procesos O1"
	g++ -o1 -o ${args[6]} ${args[6]}.cpp
	auto_exec ${args[6}
	
	echo "Secuencial O2"
	g++ -o2 -o ${args[4]} ${args[4]}.cpp
	auto_exec ${args[4]}
	echo "Hilos O2"
	g++ -pthread -o2 -o ${args[5]} ${args[5]}.cpp
	auto_exec ${args[5}
	echo "procesos O2"
	g++ -o2 -o ${args[6]} ${args[6]}.cpp
	auto_exec ${args[6}
	
	echo "Secuencial O3"
	g++ -o3 -o ${args[4]} ${args[4]}.cpp
	auto_exec ${args[4]}
	echo "Hilos O3"
	g++ -pthread -o3 -o ${args[5]} ${args[5]}.cpp
	auto_exec ${args[5}
	echo "procesos O3"
	g++ -o3 -o ${args[6]} ${args[6]}.cpp
	auto_exec ${args[6}
	
else
	echo "revisa el comando"
fi

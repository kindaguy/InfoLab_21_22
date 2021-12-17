libRandomTama.o: libRandomTama.h libRandomTama.C
	g++ -c libRandomTama.C

createLinSample.o: createLinSample.C
	g++ -c createLinSample.C

createLinSample.x: createLinSample.o libRandomTama.o
	g++ createLinSample.o libRandomTama.o -o createLinSample.x

analyzeSample.o: analyzeSample.C
	g++ -c analyzeSample.C

analyzeSample.x: analyzeSample.o myArrayMisura.o
	g++ analyzeSample.o ../TamaLib/libstatTama.o myArrayMisura.o -o  analyzeSample.x

myArrayMisura.o: myArrayMisura.h myArrayMisura.C
	g++ -c myArrayMisura.C


compila: createLinSample.x

esegui: createLinSample.x
	./createLinSample.x parametri.dat dati.dat
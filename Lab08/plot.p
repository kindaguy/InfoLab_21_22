#Set output to png file
set term svg

#Set output 
set output  'varN.svg'

#Set title
set title 'Var(N)'

#Nomi assi

set xlabel "n_punti"

#Actual plot

plot "risVarianza.dat" using 1:3 with linespoint pointsize 3


set output 'media.svg'

set title 'Media(N)'

plot "risVarianza.dat" using 1:2 with linespoint pointsize 3 linetype 1





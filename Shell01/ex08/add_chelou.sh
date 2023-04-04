echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\\\"\?" "01234" | tr "mrdoc" "01234" | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"
# criar a expressão de adição depois traduzir a primeira var em
#numberos, traduzir a segunda var em numeros, executar um
#comando que diz: input base é 5 e output base é 23 porque
#a obase tem de ser expressada na base de ibase ent 13 em base
#de 5 é 23, depois calcula o que estava no echo e transforma
#o que saiu do calculo em base: gtaio luSnemf

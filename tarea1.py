#Estudiante: Santiago Arango Henao

#Punto 1 



def verificarDiagonales(mat):
    
    resultado = True
    
    for fila in range(len(mat)):
        if mat[fila][fila] == mat[fila][-fila-1] and resultado == True:
            resultado = True 
        else:
            resultado = False
    return resultado
            
				
print(verificarDiagonales([[11, 23, 76, 34, 11],
                        [14, 30, 92, 30, 101],
                        [12, 45, 58, 92, 22],
                        [74, 56, 49, 56, 100],
                        [99, 5, 28, 47, 99]]))

#Punto 2 

listaEnteros = ([42, 12, 90, 90, 12, 42])

def esCapicua(listaEnteros):
    
    resultado1 = True
    cont = 0
    
    while cont < len(listaEnteros) and resultado1 == True:
            if listaEnteros[cont] == listaEnteros[-cont-1]:
                resultado1 = True
                cont += 1
            else:
                resultado1 = False
    return resultado1
print(esCapicua(listaEnteros))


#Punto 3


def diferenciaListas(listaB,listaA):
    
    listaRep = []
    listaR = []
    bandera = 0
    i = 0
    
    while i < len(listaA):
        
        flag = 0
        j = 0
        
        while j < len(listaB):
            if listaA[i] == listaB[j] and listaA[i] not in listaRep:
                flag = 1
                listaRep.append(listaA[i])
            j+=1
            
        if flag == 0:
            listaR.append(listaA[i])

        i+=1
    print(listaR)

diferenciaListas([40, 10, 22, 12, 33, 33, 33],[41, 22, 31, 15, 13, 12, 33, 19])

    


#Punto 4
def mostrarPrimos(N):

    print("Numeros primos entre 1 y 100")

    listaPrimos = []
    
    for i in range(2,N):
        j = 2
        bandera = 0
        contador = 0
        while bandera == 0 and j < i:
            if i % j == 0:
                contador += 1
            if contador == 1:
                bandera = 1
            j+=1
                
        if bandera == 0 or i == 2:
            listaPrimos.append(i)

    for z in range(len(listaPrimos)):

        if z < len(listaPrimos)-1:
            print("-->",listaPrimos[z],end=",")
        else:
            print("-->",listaPrimos[z])
        print()
        
            

    print("Números entre 1 y ", N , " con suma de dígitos con valor primo:")

    
    lista2 = []
    
    for i in range(2,N):
        j = 2
        bandera = 0
        contador = 0
        x = 0
        y = 0
        while bandera == 0 and j < i:
            if i % j == 0:
                contador += 1
            if contador == 1:
                bandera = 1
            j+=1
                
        if bandera == 0 or i == 2:
            x = i // 10
            y = i % 10
            bandera2 = 0
            contador2 = 0
            b = 2
            
            while bandera2 == 0 and b < (x+y):
                if (x+y) % b == 0:
                    contador2 += 1
                if contador2 == 1:
                    bandera2 = 1
                b+=1
                    
            if bandera2 == 0 or (x+y) == 2:
                lista2.append(i)

    for z in range(len(lista2)):

        if z < len(lista2)-1:
            print(lista2[z],end=",")
        else:
            print(lista2[z])

    


mostrarPrimos(1000)

#punto 5

def sumaValoresMatriz(disp,lista):

    contador = 0
    var = 0
    
    for i in disp:
        for j in range(len(disp[i])):
            x = (i,disp[i][j][0])
            if x in lista:
                var += disp[i][j][1]
    print(var)
        


sumaValoresMatriz({0 : [(0, 1), (5, 4), (7, 5)],
		   1 : [(6, 4), (7, 7)],
		   2 : [(0, 2), (1, 2), (4, 9), (6, 1)],
		   4 : [(2, 8), (3, 1), (5, 7)],
		   6 : [(0, 3), (5, 6), (7, 2)],
		   7 : [(0, 4), (1, 4), (2, 7)],
		   8 : [(1, 9), (3, 8), (5, 7), (7, 6)]},[(0, 0), (8, 3), (3, 5), (7, 2), (4, 3), (4,6)])



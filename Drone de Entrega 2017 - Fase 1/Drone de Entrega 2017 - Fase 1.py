A = int(input("Qual a altura da caixa?"))
B = int(input("Qual a largura da caixa?"))
C = int(input("Qual a profundidade da caixa?"))
H = int(input("Qual a altura da janela ?"))
L = int(input("Qual a largura da janela?"))

if(A <= H) and (B <= L):
    print ("S")
elif(A <= L) and (B <= H):
    print ("S")
elif(A <= H) and (C <= L):
    print ("S")
elif(A <= L) and (C <= H):
    print ("S")
elif(B <= H) and (C <= L):
    print ("S")
elif(B <= L) and (C <= H):
    print ("S")
else:
    print ("N")
if __name__ == "__main__":  
    print("Digite seu salário para que informemos o desconto proporcional e o valor final.")

    salario = float(input("Digite seu salario:"))
    desc = salario * 0.11
    
    if desc < 570.88: 
        salario_final = salario - desc
    elif desc > 570.88:   
        salario_final = salario - 570.88
 
    print("O desconto foi de {0}".format(desc))
    print("O salario final é {0}".format(salario_final))

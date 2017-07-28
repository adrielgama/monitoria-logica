if __name__ == "__main__":
    print("Bem vindo ao verificador de números negativos.")

    num = int(input("Digite um número: "))

    print("O número {0} é {1}".format(num, 'negativo' if num < 0 else 'positivo.'))

if __name__ == "__main__":
    print("Bem vindo ao modulador de números.")
    num = int(input("Digite um número: "))
    print("O módulo do número {0} é {1}".format(num, (num * -1 if num < 0 else num)))

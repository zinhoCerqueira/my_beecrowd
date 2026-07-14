def cifra_vigenere(palavra, chave):

    resposta = ""

    for i in range(len(palavra)):

        valor_palavra = ord(palavra[i]) - ord('a')
        valor_chave = ord(chave[i % len(chave)]) - ord('a')

        novo_valor = (valor_palavra + valor_chave) % 26

        resposta += chr(novo_valor + ord('a'))

    return resposta


palavra_chave = input()
quantidade_cripto = int(input())

for _ in range(quantidade_cripto):

    mensagem = input()

    resultado = []

    for palavra in mensagem.split():

        if palavra[0] in "aeiou":
            resultado.append(palavra)
        else:
            resultado.append(cifra_vigenere(palavra, palavra_chave))

    print(" ".join(resultado))
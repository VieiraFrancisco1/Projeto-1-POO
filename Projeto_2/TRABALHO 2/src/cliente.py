class Cliente:
    def __init__(self, nome, cpf):
        self.__cpf = cpf  # Atributo privado
        self.nome = nome

    # Exibe os dados do cliente
    def mostrar_info(self):
        return f"Cliente: {self.nome} | CPF: {self.__cpf}"

    # Retorna o CPF (getter)
    def get_cpf(self):
        return self.__cpf

    # Permite mudar o nome do cliente
    def alterar_nome(self, novo_nome):
        self.nome = novo_nome

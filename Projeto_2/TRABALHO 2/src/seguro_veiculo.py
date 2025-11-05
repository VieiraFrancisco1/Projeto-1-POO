from datetime import datetime

class SeguroVeiculo:
    def __init__(self, cliente, valor, vigencia):
        self.vigencia = vigencia
        self.cliente = cliente
        self.valor = valor

    # Calcula o valor do seguro com base em um valor base e taxa
    def calcular_valor(self, base, taxa):
        self.valor = base * (1 + taxa)
        return self.valor

    # Verifica se o seguro ainda está dentro da vigência
    def vigencia_valida(self, data_atual):
        inicio, fim = self.vigencia.split(" a ")
        data_atual = datetime.strptime(data_atual, "%Y-%m-%d")
        inicio = datetime.strptime(inicio, "%Y-%m-%d")
        fim = datetime.strptime(fim, "%Y-%m-%d")
        return inicio <= data_atual <= fim

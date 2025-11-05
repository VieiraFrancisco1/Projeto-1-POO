from seguro_veiculo import SeguroVeiculo

class SeguroCarro(SeguroVeiculo):
    def __init__(self, cliente, carros, valor, vigencia):
        super().__init__(cliente, valor, vigencia)
        self.carros = carros  # lista de objetos Carro

    def mostrar_info(self):
        detalhes = "\n".join([carro.mostrar_detalhes() for carro in self.carros])
        return (f"== SEGURO DE CARROS ==\n{detalhes}\n"
                f"{self.cliente.mostrar_info()}\n"
                f"Valor total: R${self.valor:.2f}\nVigência: {self.vigencia}")

    def calcular_valor(self, base, taxa):
        self.valor = base * (1 + taxa + 0.05)
        return self.valor


class SeguroMoto(SeguroVeiculo):
    def __init__(self, cliente, moto, valor, vigencia):
        super().__init__(cliente, valor, vigencia)
        self.moto = moto

    def mostrar_info(self):
        return (f"== SEGURO DE MOTO ==\n{self.moto.mostrar_detalhes()}\n"
                f"{self.cliente.mostrar_info()}\n"
                f"Valor: R${self.valor:.2f}\nVigência: {self.vigencia}")

    def calcular_valor(self, base, taxa):
        self.valor = base * (1 + taxa - 0.02)
        return self.valor

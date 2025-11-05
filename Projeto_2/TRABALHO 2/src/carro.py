class Carro:
    def __init__(self, marca, modelo, ano, cor, placa):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
        self.__placa = placa  # Encapsulamento aplicado
        self.cor = cor

    # Mostra todas as informações do carro
    def mostrar_detalhes(self):
        return (f"{self.marca} {self.modelo} ({self.ano}) - Cor: {self.cor}, "
                f"Placa: {self.__placa}")

    # Atualiza a cor do veículo
    def mudar_cor(self, nova_cor):
        self.cor = nova_cor

    # Retorna a placa (getter)
    def get_placa(self):
        return self.__placa

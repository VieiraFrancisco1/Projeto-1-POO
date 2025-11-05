from cliente import Cliente
from carro import Carro
from seguro import SeguroCarro

def main():
    cliente1 = Cliente("João Silva", "123.456.789-00")

    carro1 = Carro("Toyota", "Corolla", 2020, "Branco", "XYZ-1234")
    carro2 = Carro("Honda", "Civic", 2021, "Prata", "ABC-5678")

    # o seguro aceita uma lista de carros

    seguro1 = SeguroCarro(cliente1, [carro1, carro2], 2500.0, "2024-01-01 a 2025-01-01")

    print(seguro1.mostrar_info())
    print()

    carro1.mudar_cor("Preto")
    print("Carro atualizado:")
    print(carro1.mostrar_detalhes())
    print()

    data_teste = "2024-06-15"
    print(f"Seguro válido em {data_teste}? {seguro1.vigencia_valida(data_teste)}")

if __name__ == "__main__":
    main()

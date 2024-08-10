# Cálculo de Distâncias com C++ e JavaScript

Este projeto demonstra como calcular distâncias geográficas usando a fórmula de Haversine, com implementações em C++ e JavaScript. Embora o exemplo fornecido utilize as cidades de Nova York e Los Angeles, o código pode ser facilmente adaptado para calcular a distância entre quaisquer outros pontos geográficos, bastando alterar as coordenadas.

## Tecnologias Utilizadas

- **Node.js**: Ambiente de execução para JavaScript.
- **C++**: Para a implementação otimizada do cálculo de distância.
- **JavaScript**: Para a implementação do cálculo de distância usando métodos nativos.
- **GYP**: Ferramenta para gerar arquivos de build.

## Instalação

1. Clone o repositório:
   
   `git clone https://github.com/E-RAPHA/haversine-nodeJS-addon` \
   `cd haversine-nodeJS-addon`
   
2. Instale o node-gyp globalmente:
   
   `npm install -g node-gyp`
   
3. Configure e compile o módulo C++:
  
   `node-gyp configure` \
   `node-gyp build`
   

## Exemplo de Uso

No código de exemplo, a distância entre Nova York e Los Angeles é calculada. No entanto, você pode substituir essas coordenadas por quaisquer outras para calcular a distância entre diferentes pontos.

Para calcular a distância entre os pontos fornecidos, execute o seguinte comando:

`node index.js`

O resultado exibido no console mostrará a distância calculada em quilômetros tanto pela implementação em C++ quanto pela implementação em JavaScript.

## Sobre a Fórmula de Haversine







A fórmula de Haversine calcula a distância entre dois pontos na superfície de uma esfera (como a Terra) utilizando suas latitudes e longitudes. A fórmula é especialmente útil para calcular distâncias geográficas e é amplamente utilizada em aplicações de mapeamento.

## Desempenho

A seguir estão os tempos de execução para calcular distâncias entre pontos utilizando diferentes abordagens: C++, JavaScript nativo e `JS-geolib`. Os tempos são medidos em milissegundos para diferentes volumes de cálculos.

| Distâncias Calculadas | Tempo total em C++ (ms) | Tempo total em JavaScript (ms) | Tempo total com JS-geolib (ms) |
|------------------------|--------------------------|--------------------------------|--------------------------------|
| 10                     | 0.0803                   | 0.1018                         | 1.5550                         |
| 100                    | 0.1380                   | 0.9546                         | 4.2650                         |
| 1000                   | 1.0299                   | 1.7123                         | 46.1140                        |
| 10000                  | 6.7842                   | 10.5629                        | 235.7440                       |
| 100000                 | 41.3767                  | 51.6662                        | 2346.7940                      |
| 1000000                | 279.3835                 | 459.9832                       | 21449.5490                     |
| 10000000               | 2812.6088                | 4426.7255                      | 201892.8210                    |
| 100000000              | 26781.4014               | 43999.1706                     | 2029203.6720                   |

### Análise de Performance


Esses resultados mostram que o addon C++ é altamente eficiente para cálculos de grande escala, tornando-o uma escolha ideal para aplicações que exigem alta performance em processamento de distâncias geográficas.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir um problema ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).

## Contato

- Se tiver dúvidas ou sugestões, entre em contato pelo contato@raphaelburad.com.br

---

- Caso você tenha gostado, coloque uma ⭐ no projeto!

### Referências

*   **Python e a Fórmula de Haversine**: [Leia mais](https://louwersj.medium.com/calculate-geographic-distances-in-python-with-the-haversine-method-ed99b41ff04b)
*   **Resolvendo problemas com C++**: [Vídeo Tutorial](https://www.youtube.com/watch?v=CJqERG2rBaU)


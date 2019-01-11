**RESUMO**



JUNIOR, José Carlos Fernandes de O.; _Custo Computacional,_ 2019. 5 f. Trabalho de Algoritmo e Estrutura de Dados (Graduação em Engenharia Mecânica) - Instituto Politécnico, Universidade do Estado do Rio de Janeiro, Nova Friburgo, 2019.



Com o avanço da tecnologia, cada dia mais, necessitamos de mais capacidade de processamento para que seja possível que essa tecnologia seja utilizada. Desempenho, capacidade de armazenamento, dentre outros, são fatores que, juntos aos demais, são de total importância no desenvolvimento tecnológico. Dito isso, a busca por pela otimização de programas computacionais é de grande importância para que todo este processo ocorra da melhor forma possível. Ao tratarmos de otimização computacional, devemos analisar a eficiência dos algoritmos usados,  nos aspectos espacial e temporal, onde, no temporal, temos o quão rápido um algoritmo é executado e, no espacial, o espaço extra que o algoritmo necessita, sendo esta análise feita de acordo com o tamanho da entrada que é dada na função e o tempo de execução que o computador gera, para executar toda essa função. Estas, podem ser medidas, contando o número de vezes que a operação básica do algoritmo é executada, no caso temporal, e medida contando o número de unidade de memória consumidas pelo algoritmo, no caso da espacial. Destes dois, hoje, o tempo de execução ainda continua sendo o mais significativo. O importante a ser tratado na otimização computacional, vale ressaltar, não se resume simplesmente a reduzir o tamanho de um algoritmo, mas sim retirar partes indesejadas, que estão apenas ocupando um espaço indesejado sem resultar grande valor ao resultado final. Neste trabalho, tem-se como objetivo analisar e comparar o custo de dois tipos de buscas, a &quot;ingênua&quot; e a binária, com o intuito de observar como diferentes algoritmos, utilizados com a mesma finalidade, podem representar uma diferença de custo computacional entre o pior caso e o melhor caso.  Para isso, será analisado o número de iterações necessárias para realizar ambas as buscas e tamanho da entrada. De maneira a resolver o problema proposto, foi-se utilizado as ferramentas computacionais como o Microsoft Visual Studio 2017® e o Gnuplot. Para a realização do teste do algoritmo, utilizou-se um computador Intel® Core™ i5, com 8 gb de memória ram. No trabalho, implementou-se um código para realização de dois tipos de busca: binária e &quot;ingênua&quot;. Junto a estas buscas, foram realizados testes, cinco para cada tipo de busca, pegando elementos do início do vetor, do meio do vetor, do final do vetor e 2 testes onde os elementos não se encontravam no vetor, onde estes que não se encontravam, falharam, como deveria ocorrer. Feito isso, utilizou-se o Gnuplot para a realização da plotagem dos gráficos relacionados às buscas, onde no Gráfico 1, que demostra a busca ingênua, tem-se um gráfico de número de iterações por tamanho de entrada que mostra um resultado linear, como esperado, visto que em uma busca ingênua a complexidade é da ordem O(n). Já no Gráfico 2, que demonstra a busca binária, tem-se um gráfico de número de iterações por tamanho de entrada no caso binário, que mostra um resultado logarítmico, visto que na busca binária a complexidade é da ordem O(log2n). Por seguir o paradigma da divisão e conquista, a busca binária se mostra mais eficiente, principalmente em casos onde são utilizadas entradas maiores, pois faz a busca muito mais rapidamente (menor custo computacional) se utilizando de muito menos iterações, se comparada á busca &quot;ingênua&quot;. Se tratando da geração de gráficos na ferramenta Gnuplot, foi-se utilizado os comandos: p&#39;dadosingenuo.dat&#39; using 1:2, x para busca ingênua e p&#39;dados.dat&#39; using 1:2 , &#39;logdois.dat&#39; using 1:2 para a busca binária.

Palavras-chave: Busca. Ingênua. Binária. Custo computacional. Otimização.

                                                        
**LISTA DE ILUSTRAÇÕES**



Gráfico 1 - Número de iterações por tamanho de entrada no caso ingênuo.................................................05
Gráfico 2 - Número de iterações por tamanho de entrada no caso binário .......................................................................................................................05







































**SUMÁRIO**



**REFERÊNCIAS**........................................................................................................04

        **APÊNDICE A –** Gráficos de custo computacional dos algoritmos de busca ingênua e binaria, dado pelo tamanho da entra e o número de iterações....................................................................................................05





**REFERÊNCIAS**



KOERICH, Alessandro L. – Fundamentos da Análise da Eficiencia de Algoritmos – 2006 – [https://www.ic.unicamp.br/~ripolito/peds/mc102z/aula2/notacaoAssintotica.pdf](https://www.ic.unicamp.br/~ripolito/peds/mc102z/aula2/notacaoAssintotica.pdf) – em: 26/12/2018.

BOTELHO, Amanda – Custo Computacional – 2016 – [https://www.trabalhosgratuitos.com/Exatas/Engenharia/Custo-Computacional-1076191.html](https://www.trabalhosgratuitos.com/Exatas/Engenharia/Custo-Computacional-1076191.html)  –  em: 26/12/2018

SONG, Siang Wu – Complexidade de Algoritmos – 2008 – [https://www.ime.usp.br/~song/mac5710/slides/01complex.pdf](https://www.ime.usp.br/~song/mac5710/slides/01complex.pdf) – em: 27/12/2018

PRESTES, Edson – Complexidade de Algoritmos – 2013 – [http://www.inf.ufrgs.br/~prestes/Courses/Complexity/aula1.pdf](http://www.inf.ufrgs.br/~prestes/Courses/Complexity/aula1.pdf) – em: 05/01/2019



























**APÊNDICE A – Gráficos de custo computacional dos algoritmos de busca ingênua e binaria, dado pelo tamanho da entra e o número de iterações**



Gráfico 1 –Número de iterações por tamanho de entrada no caso ingênuo

https://github.com/Juniorcbrj/Algoritmos-JCFOJ/blob/b9840244b2c5fb0c0cbe40c1988b102345dcd274/buscas\_e\_custo/graficos/ingenuo.png

Fonte: O Autor, 2019



Gráfico 2 –Número de iterações por tamanho de entrada no caso binário

https://github.com/Juniorcbrj/Algoritmos-JCFOJ/blob/b9840244b2c5fb0c0cbe40c1988b102345dcd274/buscas\_e\_custo/graficos/binario.png

Fonte: O Autor, 2019

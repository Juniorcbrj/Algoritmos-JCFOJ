:**RESUMO**:



JUNIOR, Jos� Carlos Fernandes de O.; _Custo Computacional,_ 2019. 5 f. Trabalho de Algoritmo e Estrutura de Dados (Gradua��o em Engenharia Mec�nica) - Instituto Polit�cnico, Universidade do Estado do Rio de Janeiro, Nova Friburgo, 2019.



Com o avan�o da tecnologia, cada dia mais, necessitamos de mais capacidade de processamento para que seja poss�vel que essa tecnologia seja utilizada. Desempenho, capacidade de armazenamento, dentre outros, s�o fatores que, juntos aos demais, s�o de total import�ncia no desenvolvimento tecnol�gico. Dito isso, a busca por pela otimiza��o de programas computacionais � de grande import�ncia para que todo este processo ocorra da melhor forma poss�vel. Ao tratarmos de otimiza��o computacional, devemos analisar a efici�ncia dos algoritmos usados,  nos aspectos espacial e temporal, onde, no temporal, temos o qu�o r�pido um algoritmo � executado e, no espacial, o espa�o extra que o algoritmo necessita, sendo esta an�lise feita de acordo com o tamanho da entrada que � dada na fun��o e o tempo de execu��o que o computador gera, para executar toda essa fun��o. Estas, podem ser medidas, contando o n�mero de vezes que a opera��o b�sica do algoritmo � executada, no caso temporal, e medida contando o n�mero de unidade de mem�ria consumidas pelo algoritmo, no caso da espacial. Destes dois, hoje, o tempo de execu��o ainda continua sendo o mais significativo. O importante a ser tratado na otimiza��o computacional, vale ressaltar, n�o se resume simplesmente a reduzir o tamanho de um algoritmo, mas sim retirar partes indesejadas, que est�o apenas ocupando um espa�o indesejado sem resultar grande valor ao resultado final. Neste trabalho, tem-se como objetivo analisar e comparar o custo de dois tipos de buscas, a &quot;ing�nua&quot; e a bin�ria, com o intuito de observar como diferentes algoritmos, utilizados com a mesma finalidade, podem representar uma diferen�a de custo computacional entre o pior caso e o melhor caso.  Para isso, ser� analisado o n�mero de itera��es necess�rias para realizar ambas as buscas e tamanho da entrada. De maneira a resolver o problema proposto, foi-se utilizado as ferramentas computacionais como o Microsoft Visual Studio 2017� e o Gnuplot. Para a realiza��o do teste do algoritmo, utilizou-se um computador Intel� Core� i5, com 8 gb de mem�ria ram. No trabalho, implementou-se um c�digo para realiza��o de dois tipos de busca: bin�ria e &quot;ing�nua&quot;. Junto a estas buscas, foram realizados testes, cinco para cada tipo de busca, pegando elementos do in�cio do vetor, do meio do vetor, do final do vetor e 2 testes onde os elementos n�o se encontravam no vetor, onde estes que n�o se encontravam, falharam, como deveria ocorrer. Feito isso, utilizou-se o Gnuplot para a realiza��o da plotagem dos gr�ficos relacionados �s buscas, onde no Gr�fico 1, que demostra a busca ing�nua, tem-se um gr�fico de n�mero de itera��es por tamanho de entrada que mostra um resultado linear, como esperado, visto que em uma busca ing�nua a complexidade � da ordem O(n). J� no Gr�fico 2, que demonstra a busca bin�ria, tem-se um gr�fico de n�mero de itera��es por tamanho de entrada no caso bin�rio, que mostra um resultado logar�tmico, visto que na busca bin�ria a complexidade � da ordem O(log2n). Por seguir o paradigma da divis�o e conquista, a busca bin�ria se mostra mais eficiente, principalmente em casos onde s�o utilizadas entradas maiores, pois faz a busca muito mais rapidamente (menor custo computacional) se utilizando de muito menos itera��es, se comparada � busca &quot;ing�nua&quot;. Se tratando da gera��o de gr�ficos na ferramenta Gnuplot, foi-se utilizado os comandos: p&#39;dadosingenuo.dat&#39; using 1:2, x para busca ing�nua e p&#39;dados.dat&#39; using 1:2 , &#39;logdois.dat&#39; using 1:2 para a busca bin�ria.

Palavras-chave: Busca. Ing�nua. Bin�ria. Custo computacional. Otimiza��o.

:**LISTA DE ILUSTRA��ES**:



Gr�fico 1 - N�mero de itera��es por tamanho de entrada no caso ing�nuo.................................05

Gr�fico 2 - N�mero de itera��es por tamanho de entrada no caso bin�rio ..................................................................................................................................05







































:**SUM�RIO**:

**       **

**        REFER�NCIAS**.....................................................................................................04

**       **

        **AP�NDICE A �** Gr�ficos de custo computacional dos algoritmos de busca ing�nua e binaria, dado pelo tamanho da entra e o n�mero de itera��es....................................................................................................05

**               **



:**REFER�NCIAS**:



KOERICH, Alessandro L. � Fundamentos da An�lise da Eficiencia de Algoritmos � 2006 � [https://www.ic.unicamp.br/~ripolito/peds/mc102z/aula2/notacaoAssintotica.pdf](https://www.ic.unicamp.br/~ripolito/peds/mc102z/aula2/notacaoAssintotica.pdf) � em: 26/12/2018.

BOTELHO, Amanda � Custo Computacional � 2016 � [https://www.trabalhosgratuitos.com/Exatas/Engenharia/Custo-Computacional-1076191.html](https://www.trabalhosgratuitos.com/Exatas/Engenharia/Custo-Computacional-1076191.html)  �  em: 26/12/2018

SONG, Siang Wu � Complexidade de Algoritmos � 2008 � [https://www.ime.usp.br/~song/mac5710/slides/01complex.pdf](https://www.ime.usp.br/~song/mac5710/slides/01complex.pdf) � em: 27/12/2018

PRESTES, Edson � Complexidade de Algoritmos � 2013 � [http://www.inf.ufrgs.br/~prestes/Courses/Complexity/aula1.pdf](http://www.inf.ufrgs.br/~prestes/Courses/Complexity/aula1.pdf) � em: 05/01/2019



























**AP�NDICE A � Gr�ficos de custo computacional dos algoritmos de busca ing�nua e binaria, dado pelo tamanho da entra e o n�mero de itera��es**



Gr�fico 1 �N�mero de itera��es por tamanho de entrada no caso ing�nuo

https://github.com/Juniorcbrj/Algoritmos-JCFOJ/blob/b9840244b2c5fb0c0cbe40c1988b102345dcd274/buscas\_e\_custo/graficos/ingenuo.png

Fonte: O Autor, 2019



Gr�fico 2 �N�mero de itera��es por tamanho de entrada no caso bin�rio

https://github.com/Juniorcbrj/Algoritmos-JCFOJ/blob/b9840244b2c5fb0c0cbe40c1988b102345dcd274/buscas\_e\_custo/graficos/binario.png

Fonte: O Autor, 2019
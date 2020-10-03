# Arquitetura e Organização de Computadores > Conteúdo > Concorrência e Paralelismo
<br>

Prof. Eduardo Ono

<br>

## Conceitos
<br>

* [Código Fonte TV] [Thread (entenda como sua aplicação funciona) // Dicionário do Programador](https://youtu.be/xNBMNKjpJzM) (YouTube, 11:55)

<br>

### Vídeos
<br>

* [Fabio Akita] [Concorrência e Paralelismo (Parte 1)](https://youtu.be/cx1ULv4wYxM) (YouTube, 42:33)
* [Fabio Akita] [Concorrência e Paralelismo (Parte 2)](https://youtu.be/gYJSWs-gp1g) (YouTube, 1:01:05)

<br>

## Lei de Amdahl
<br>

Lei de Amdahl:

```
          1
s = ――――――――――――――
     (1 - p) + p
              ―――
               N
```

onde:<br>
s - "_speedup_"<br>
p - Fração do código paralelizável<br>
N - Número de unidades de processamento<br>

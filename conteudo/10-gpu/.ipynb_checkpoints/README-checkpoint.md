### Arquitetura e Organização de Computadores

# GPU (Graphics Processing Unit)

Prof. Eduardo Ono

Versão HTML: https://eduardo-ono.github.io/arquitetura-e-organizacao-de-computadores/conteudo/10-gpu/

<br>

## Overview

* [Ahoy] Uma Breve História dos Gráficos | [YouTube](https://youtu.be/QyjyWUrHsFc) (44:26)
* [Techquickie] [History of GPUs As Fast As Possible](https://www.youtube.com/watch?v=jznazEHJKiY) (YouTube, 8:16)
* [Prax Presents] [A Brief History of the GPU - Part 1 (Prax)](https://www.youtube.com/watch?v=3kv0-S_bHig) (YouTube, 20:44, Out/2015)
* [Walt Disney Animation Studios] [Disney's Practical Guide to Path Tracing](https://www.youtube.com/watch?v=frLwRLS_ZR0) (YouTube, 9:31, Ago/2016)
* [BRKsEDU] [MINECRAFT Como Você NUNCA Viu! | Gameplay com Ray Tracing RTX... Impressionante!!!](https://www.youtube.com/watch?v=43jDNZEHJ5g) (YouTube, 9:22)

<br>

## Conceitos

***Vertex*** é uma estrutura de dados (de Computação Gráfica) que descreve atributos, tais como, coordenadas de um ponto no espaço 2D ou 3D ou múltiplas coordenadas em uma superfície.

***Vertex shaders*** são o tipo mais comum de _3D shader_ e são aplicados um vez para cada _vertex_ fornecido à GPU. Podem manipular propriedades como as coordenadas da posição, cor e textura, porém, não não podem criar novos _vertices_ (plural de _vertex_). A saída do _vertex shader_ é direcionada para o próximo estágio do _pipeline_, que pode ser o _geometry shader_, caso presente, ou o _rasterizer_. 

<br>

## Fundamentos

<img src="./figuras/fluxo-renderizacao.svg" width="250">

### Computação Gráfica

* [CrashCourse] [Screens & 2D Graphics: Crash Course Computer Science #23](https://www.youtube.com/watch?v=7Jr0SFMQ4Rs) (YouTube, 11:31, Ago/2017)
* [CrashCourse] [3D Graphics: Crash Course Computer Science #27](https://www.youtube.com/watch?v=TEAtmCYYKZA) (YouTube, 12:40, Set/2017)
* [TheHappieCat] [How Rendering Graphics Works in Games!](https://www.youtube.com/watch?v=cvcAjgMUPUA) (YouTube, 6:24, Jul/2015)
* [UC Davis Academics] [Introduction to Computer Graphics](https://www.youtube.com/watch?v=01YSK5gIEYQ) (YouTube, 49:44)
* [AdoredTV] [Beyond Turing - Ray Tracing and the Future of Computer Graphics](https://www.youtube.com/watch?v=SrF4k6wJ-do) (YouTube, 24:37, Set/2018)

### GPU

* [IBM Cloud] [GPUs: Explained](https://www.youtube.com/watch?v=LfdK-v0SbGI) (YouTube, 7:28, Mar/2019)
* [gameranx] [How Do GRAPHICS CARDS Work?](https://www.youtube.com/watch?v=ZfnPFNnXqC0) (YouTube, 6:46)

<br>

## CODECS para Windows 10
<br>

> ### HEVC
> * https://www.microsoft.com/pt-br/p/av1-video-extension/9mvzqvxjbq9v

> ### AV1
> * [ms-windows-store://pdp/?ProductId=9n4wgh0z6vhq](ms-windows-store://pdp/?ProductId=9n4wgh0z6vhq)

<br>

## Tecnologias

### Ray Tracing

* [NVIDIA GeForce Brasil [Ray Tracing: O que é e como funciona](https://www.youtube.com/watch?v=k48rfJt55-k) (YouTube, 2:40, Ago/2019)
* [NVIDIA Developer] [Ray Tracing Essentials, Part 1: Basics of Ray Tracing](https://www.youtube.com/watch?v=gBPNO6ruevk) (YouTube, 8:57, Dez/2019)
* [NVIDIA Developer] [Ray Tracing Essentials Part 2: Rasterization versus Ray Tracing](https://www.youtube.com/watch?v=ynCxnR1i0QY) (YouTube, 6:38, Fev/2020)
* [NVIDIA Developer] [Ray Tracing Essentials Part 3: Ray Tracing Hardware](https://www.youtube.com/watch?v=EoQfX1q-VNE) (YouTube, 6:53, Mar/2020)
* [NVIDIA Developer] [Ray Tracing Essentials Part 4: The Ray Tracing Pipeline](https://www.youtube.com/watch?v=LoKUmbvbcRY) (YouTube, 5:23, Mar/2020)
* [NVIDIA Developer] [Ray Tracing Essentials Part 6: The Rendering Equation](https://www.youtube.com/watch?v=AODo_RjJoUA) (YouTube, 9:23, Abr/2020)
* [NVIDIA Developer] [Ray Tracing Essentials Part 7: Denoising for Ray Tracing](https://www.youtube.com/watch?v=6O2B9BZiZjQ) (YouTube, 8:20, Mai/2020)
* [UC Davis Academics] [Ray Tracing](https://www.youtube.com/watch?v=Ahp6LDQnK4Y) (YouTube, 48:38)

<br>

### Nvidia DLSS (Deep Learning Super Sampling)

* [NVIDIA GeForce Brasil] [DLSS nos jogos: O que é e como funciona?](https://www.youtube.com/watch?v=q35pUyWvQ1o) (YouTube, 2:04, Ago/2019)
* [NVIDIA GeForce Brasil] [NVIDIA DLSS 2.0 | Um grande salto em render com Inteligência Artificial](https://www.youtube.com/watch?v=YsLTzGvUU5Y) (YouTube, 3:46, Mar/2020)
* [2kliksphilip] [Gaming at Ultra Low Resolutions with DLSS - 240p and beyond](https://www.youtube.com/watch?v=_gQ202CFKzA) (YouTube, 10:30, Out/2020)

<br>

## Nvidia CUDA

* [Greg Salazar] [What Are CUDA Cores?](https://www.youtube.com/watch?v=JFhG9UntZs4) (YouTube, 7:39, Ago/2016)

<br>

## Comparativo Nvidia RTX x AMD Radeon RX (Relativo ao Desempenho)

<details>
    <summary>Tabela comparativa em relação ao desempenho</summary>

Target      | nVIDIA RTX 2000 (2018) | AMD Radeon RX        | nVIDIA RTX 3000 (2020) | AMD Radeon RX 6000 (2020) |
---         | ---                    | ---                  | ---                    |  ---                 |
xxx         | 12 nm                  | 7 nm (TSMC)          | 8 nm (Samsung)         | 7 nm (TSMC)          |
---         | ---                    | ---                  | ---                    | ---                  |
---         | GTX 1650 (4 GB)        | ---                  | ---                    | ---                  |
---         | GTX 1650 Super         | RX 5500XT (4 GB)     | ---                    | ---                  |
---         | GTX 1650 Ti            | ---                  | ---                    | ---                  |
FullHD 60Hz | GTX 1660               | ---                  | ---                    | ---                  |
---         | GTX 1660 Super         | ---                  | ---                    | ---                  |
---         | GTX 1660 Ti            | ---                  | ---                    | ---                  |
---         | RTX 2060 (6 GB)        | RX 5600XT (6 GB)     | 3050     (4 GB)        | ---                  |
---         | RTX 2060 Super         | RX 5700   (8 GB)     | 3050 Ti  (6 GB)        | ---                  |
2.5k 60Hz   | RTX 2070 (8 GB)        | RX 5700XT (8 GB)     | 3060    (12 GB)   $329 | ---                  |
---         | RTX 2070 Super         | ---                  | ---                    | ---                  |
---         | RTX 2080               | ---                  | ---                    |                      |
---         | RTX 2080 Super         | ---                  | 3060 Ti  (8 GB)   $399 | 6700   (12 GB)       |
4k 60Hz     | RTX 2080 Ti (11 GB)    | ---                  | 3070     (8 GB)   $499 | 6700XT (12 GB)       |
---         | ---                    | ---                  | 3070 Ti     (?)        | 6800   (16 GB)  $579 |
---         | ---                    | ---                  | 3080    (10 GB)   $699 | 6800XT (16 GB)  $649 |
---         | ---                    | ---                  | 3080 Ti     (?)        |                      |
---         | ---                    | ---                  | 3090    (24 GB) $1,500 | 6900XT (16 GB)  $999 |

</details>

## Testes de GPUs (Placas de Vídeo de Referência)

### nVIDIA GeForce

<details>
    <summary>RTX 3090 (24 GB)</summary>

* [Adrenaline] []()

</details>

<details>
    <summary>RTX 3080 (10 GB)</summary>

* [Adrenaline] []()

</details>

<details>
    <summary>RTX 3070 (8 GB)</summary>

* [Adrenaline] [Gameplay Com RTX 3070! Mandamos Ver em 4k, Ray Tracing, Ultra](https://www.youtube.com/watch?v=vN0-g0eJDv8) (YouTube, 45:45, Out/2020)
* [Chipart] [Adeus RTX 2080ti!! Bem Vinda RTX 3070!!](https://www.youtube.com/watch?v=MXWF_XHTfhM) (YouTube, 16:53, Out/2020)

</details>

<details>
    <summary>RTX 3060 Ti (8 GB)</summary>

* [Peperaio Hardware] [RTX 3060 Ti chegou, mais rápida que RTX 2080 Super, por menos! Review, construção e comparativos!](https://www.youtube.com/watch?v=fOT1SfdWvlY) (YouTube, 14:49, Dez/2020)
* [Adrenaline] [RTX 3060 Ti em ação! Testamos a placa que promete ficar na frente da RTX 2080 Super!](https://www.youtube.com/watch?v=-klOeuoZMIw&feature=emb_logo) (YouTube, 24:51, Dez/2020)

</details>

### AMD Radeon

<details>
    <summary>RX 6900XT (16 GB)</summary>

* [Adrenaline] []()

</details>

<details>
    <summary>RX 6800XT (16 GB)</summary>

* [Adrenaline] []()
* [Peperaio Hardware] [Review AMD RX 6800 XT 16GB – A concorrente da RTX 3080 chegou na disputa, com RayTracing, por menos!](https://www.youtube.com/watch?v=C_1skZq-W-o) (YouTube, 18:45, Nov/2020)

</details>

<details>
    <summary>RX 6800 (16 GB)</summary>

* [Adrenaline] []()

</details>

<details>
    <summary>RX 5700XT (8 GB)</summary>

* [Peperaio Hardware] [Impressões e Opiniões sobre a AMD Navi RX 5700XT - Valeu a pena?](https://www.youtube.com/watch?v=C4bntNTKmQg) (YouYube, 21:32, Set/2019)
* [Lock Gamer Hardware] [RX 5700XT vs RTX 2070 Super: Qual a MELHOR escolha? CONSUMO, PREÇO, TEMPERATURA e GAMES lado a lado](https://www.youtube.com/watch?v=d5w_1TbhcyM) (YouTube, 14:46, Out/2019)

</details>

<details>
    <summary>RX 5700 (8 GB)</summary>

* [Adrenaline] [Gameplay com Radeon RX 5700! Jogamos em 2,5K e 4K e testamos 5 games!](https://www.youtube.com/watch?v=g27JA9jGaWA) (YouTube, 27:19, Jul/2019)

</details>

<details>
    <summary>RX 5600XT (6 GB)</summary>

* [Peperaio Hardware] [Impressões e Opiniões sobre a RX 5600 XT - Vale a pena? Comparativo em 11 jogos (1080p & 1440p)](https://www.youtube.com/watch?v=ACqr-rXgcCM) (YouTube, 19:40, Abr/2020)

</details>

<details>
    <summary>RX 5500XT (8 GB)</summary>

* [Adrenaline] [Radeon RX 5500 XT em gameplay! Vamos testar a versão mais modesta do chip Navi da AMD!](https://www.youtube.com/watch?v=kIZadUTqWfM) (YouTube, 23:35, Dez/2019)
* [Peperaio Hardware] [GTX 1650 Super vs RX 5500XT (+ 11 placas) / Teste em 16 jogos 1080p / Qual a melhor opção em 2020?](https://www.youtube.com/watch?v=Dgt0fS7GDJo) (YouTube, 34:01, Jan/2020)

</details>

<br>

{"filter":false,"title":"E5.cpp","tooltip":"/ejerciciosClase/S7/E5.cpp","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":4,"column":7},"end":{"row":4,"column":8},"action":"insert","lines":[" "],"id":58}],[{"start":{"row":6,"column":0},"end":{"row":6,"column":1},"action":"insert","lines":["P"],"id":59},{"start":{"row":6,"column":1},"end":{"row":6,"column":2},"action":"insert","lines":["a"]},{"start":{"row":6,"column":2},"end":{"row":6,"column":3},"action":"insert","lines":["s"]},{"start":{"row":6,"column":3},"end":{"row":6,"column":4},"action":"insert","lines":["o"]}],[{"start":{"row":6,"column":4},"end":{"row":6,"column":5},"action":"insert","lines":[" "],"id":60},{"start":{"row":6,"column":5},"end":{"row":6,"column":6},"action":"insert","lines":["3"]},{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"insert","lines":[":"]}],[{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"insert","lines":[" "],"id":61},{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"insert","lines":["Q"]},{"start":{"row":6,"column":9},"end":{"row":6,"column":10},"action":"insert","lines":["u"]},{"start":{"row":6,"column":10},"end":{"row":6,"column":11},"action":"insert","lines":["i"]},{"start":{"row":6,"column":11},"end":{"row":6,"column":12},"action":"insert","lines":["e"]},{"start":{"row":6,"column":12},"end":{"row":6,"column":13},"action":"insert","lines":["r"]}],[{"start":{"row":6,"column":12},"end":{"row":6,"column":13},"action":"remove","lines":["r"],"id":62}],[{"start":{"row":6,"column":12},"end":{"row":6,"column":13},"action":"insert","lines":["r"],"id":63},{"start":{"row":6,"column":13},"end":{"row":6,"column":14},"action":"insert","lines":["o"]}],[{"start":{"row":6,"column":14},"end":{"row":6,"column":15},"action":"insert","lines":[" "],"id":64},{"start":{"row":6,"column":15},"end":{"row":6,"column":16},"action":"insert","lines":["q"]},{"start":{"row":6,"column":16},"end":{"row":6,"column":17},"action":"insert","lines":["u"]},{"start":{"row":6,"column":17},"end":{"row":6,"column":18},"action":"insert","lines":["e"]}],[{"start":{"row":6,"column":18},"end":{"row":6,"column":19},"action":"insert","lines":[" "],"id":65},{"start":{"row":6,"column":19},"end":{"row":6,"column":20},"action":"insert","lines":["b"]},{"start":{"row":6,"column":20},"end":{"row":6,"column":21},"action":"insert","lines":["u"]},{"start":{"row":6,"column":21},"end":{"row":6,"column":22},"action":"insert","lines":["s"]},{"start":{"row":6,"column":22},"end":{"row":6,"column":23},"action":"insert","lines":["c"]}],[{"start":{"row":6,"column":22},"end":{"row":6,"column":23},"action":"remove","lines":["c"],"id":66}],[{"start":{"row":6,"column":22},"end":{"row":6,"column":23},"action":"insert","lines":["q"],"id":67},{"start":{"row":6,"column":23},"end":{"row":6,"column":24},"action":"insert","lines":["u"]},{"start":{"row":6,"column":24},"end":{"row":6,"column":25},"action":"insert","lines":["e"]},{"start":{"row":6,"column":25},"end":{"row":6,"column":26},"action":"insert","lines":["n"]}],[{"start":{"row":6,"column":26},"end":{"row":6,"column":27},"action":"insert","lines":[" "],"id":68},{"start":{"row":6,"column":27},"end":{"row":6,"column":28},"action":"insert","lines":["e"]},{"start":{"row":6,"column":28},"end":{"row":6,"column":29},"action":"insert","lines":["l"]}],[{"start":{"row":6,"column":29},"end":{"row":6,"column":30},"action":"insert","lines":[" "],"id":69},{"start":{"row":6,"column":30},"end":{"row":6,"column":31},"action":"insert","lines":["v"]},{"start":{"row":6,"column":31},"end":{"row":6,"column":32},"action":"insert","lines":["a"]},{"start":{"row":6,"column":32},"end":{"row":6,"column":33},"action":"insert","lines":["l"]},{"start":{"row":6,"column":33},"end":{"row":6,"column":34},"action":"insert","lines":["o"]},{"start":{"row":6,"column":34},"end":{"row":6,"column":35},"action":"insert","lines":["r"]}],[{"start":{"row":6,"column":35},"end":{"row":6,"column":36},"action":"insert","lines":[" "],"id":70},{"start":{"row":6,"column":36},"end":{"row":6,"column":37},"action":"insert","lines":["m"]},{"start":{"row":6,"column":37},"end":{"row":6,"column":38},"action":"insert","lines":["e"]},{"start":{"row":6,"column":38},"end":{"row":6,"column":39},"action":"insert","lines":["n"]},{"start":{"row":6,"column":39},"end":{"row":6,"column":40},"action":"insert","lines":["o"]},{"start":{"row":6,"column":40},"end":{"row":6,"column":41},"action":"insert","lines":["r"]},{"start":{"row":6,"column":41},"end":{"row":6,"column":42},"action":"insert","lines":["."]}],[{"start":{"row":8,"column":0},"end":{"row":35,"column":0},"action":"insert","lines":["#include<iostream>","using namespace std;","","int main(){","\tint nElementos,numeros[100],*dir_numeros,menor=999999;","\t","\tcout<<\"Digite el numero de elementos del arreglo: \";","\tcin>>nElementos;","\t","\tfor(int i=0;i<nElementos;i++){","\t\tcout<<i+1<<\". Digite un numero: \";","\t\tcin>>numeros[i]; //Guardamos los elementos en el arreglo","\t}","\t","\tdir_numeros = numeros;","\t","\tfor(int i=0;i<nElementos;i++){//Determinamos el menor elemento en cada","\t\tif(*dir_numeros < menor){//iteracion del bucle","\t\t\tmenor = *dir_numeros;","\t\t}","\t\tdir_numeros++;","\t}","\t","\tcout<<\"\\nEl menor elemento es: \"<<menor<<endl;","\t","\treturn 0;","}",""],"id":71}],[{"start":{"row":12,"column":16},"end":{"row":12,"column":42},"action":"remove","lines":["numeros[100],*dir_numeros,"],"id":73}],[{"start":{"row":12,"column":29},"end":{"row":12,"column":30},"action":"insert","lines":["/"],"id":74},{"start":{"row":12,"column":30},"end":{"row":12,"column":31},"action":"insert","lines":["/"]}],[{"start":{"row":12,"column":31},"end":{"row":12,"column":57},"action":"insert","lines":["numeros[100],*dir_numeros,"],"id":75}],[{"start":{"row":22,"column":1},"end":{"row":22,"column":2},"action":"insert","lines":["/"],"id":76},{"start":{"row":22,"column":2},"end":{"row":22,"column":3},"action":"insert","lines":["/"]}],[{"start":{"row":16,"column":1},"end":{"row":16,"column":2},"action":"insert","lines":["i"],"id":77},{"start":{"row":16,"column":2},"end":{"row":16,"column":3},"action":"insert","lines":["n"]},{"start":{"row":16,"column":3},"end":{"row":16,"column":4},"action":"insert","lines":["t"]}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":5},"action":"insert","lines":[" "],"id":78}],[{"start":{"row":16,"column":5},"end":{"row":16,"column":16},"action":"insert","lines":["dir_numeros"],"id":79}],[{"start":{"row":16,"column":5},"end":{"row":16,"column":6},"action":"insert","lines":["*"],"id":80}],[{"start":{"row":16,"column":17},"end":{"row":16,"column":18},"action":"insert","lines":[" "],"id":81},{"start":{"row":16,"column":18},"end":{"row":16,"column":19},"action":"insert","lines":["="]}],[{"start":{"row":16,"column":19},"end":{"row":16,"column":20},"action":"insert","lines":[" "],"id":82},{"start":{"row":16,"column":20},"end":{"row":16,"column":21},"action":"insert","lines":["e"]}],[{"start":{"row":16,"column":20},"end":{"row":16,"column":21},"action":"remove","lines":["e"],"id":83}],[{"start":{"row":16,"column":20},"end":{"row":16,"column":21},"action":"insert","lines":["n"],"id":84},{"start":{"row":16,"column":21},"end":{"row":16,"column":22},"action":"insert","lines":["e"]},{"start":{"row":16,"column":22},"end":{"row":16,"column":23},"action":"insert","lines":["w"]}],[{"start":{"row":16,"column":23},"end":{"row":16,"column":24},"action":"insert","lines":[" "],"id":85},{"start":{"row":16,"column":24},"end":{"row":16,"column":25},"action":"insert","lines":["i"]},{"start":{"row":16,"column":25},"end":{"row":16,"column":26},"action":"insert","lines":["n"]},{"start":{"row":16,"column":26},"end":{"row":16,"column":27},"action":"insert","lines":["t"]}],[{"start":{"row":16,"column":27},"end":{"row":16,"column":29},"action":"insert","lines":["[]"],"id":86}],[{"start":{"row":16,"column":29},"end":{"row":16,"column":30},"action":"insert","lines":[";"],"id":87}],[{"start":{"row":16,"column":28},"end":{"row":16,"column":29},"action":"insert","lines":["n"],"id":88},{"start":{"row":16,"column":29},"end":{"row":16,"column":30},"action":"insert","lines":["E"]},{"start":{"row":16,"column":30},"end":{"row":16,"column":31},"action":"insert","lines":["l"]}],[{"start":{"row":16,"column":28},"end":{"row":16,"column":31},"action":"remove","lines":["nEl"],"id":89},{"start":{"row":16,"column":28},"end":{"row":16,"column":31},"action":"insert","lines":["nEl"]}],[{"start":{"row":16,"column":31},"end":{"row":16,"column":32},"action":"insert","lines":["e"],"id":90}],[{"start":{"row":16,"column":28},"end":{"row":16,"column":32},"action":"remove","lines":["nEle"],"id":91},{"start":{"row":16,"column":28},"end":{"row":16,"column":38},"action":"insert","lines":["nElementos"]}],[{"start":{"row":16,"column":40},"end":{"row":17,"column":0},"action":"insert","lines":["",""],"id":92},{"start":{"row":17,"column":0},"end":{"row":17,"column":1},"action":"insert","lines":["\t"]}],[{"start":{"row":20,"column":7},"end":{"row":20,"column":14},"action":"remove","lines":["numeros"],"id":93},{"start":{"row":20,"column":7},"end":{"row":20,"column":18},"action":"insert","lines":["dir_numeros"]}],[{"start":{"row":20,"column":7},"end":{"row":20,"column":8},"action":"insert","lines":["*"],"id":94}],[{"start":{"row":20,"column":7},"end":{"row":20,"column":8},"action":"remove","lines":["*"],"id":95}],[{"start":{"row":33,"column":1},"end":{"row":33,"column":2},"action":"insert","lines":["d"],"id":96},{"start":{"row":33,"column":2},"end":{"row":33,"column":3},"action":"insert","lines":["e"]},{"start":{"row":33,"column":3},"end":{"row":33,"column":4},"action":"insert","lines":["l"]},{"start":{"row":33,"column":4},"end":{"row":33,"column":5},"action":"insert","lines":["e"]},{"start":{"row":33,"column":5},"end":{"row":33,"column":6},"action":"insert","lines":["t"]},{"start":{"row":33,"column":6},"end":{"row":33,"column":7},"action":"insert","lines":["e"]}],[{"start":{"row":33,"column":7},"end":{"row":33,"column":8},"action":"insert","lines":[" "],"id":97}],[{"start":{"row":33,"column":8},"end":{"row":33,"column":10},"action":"insert","lines":["[]"],"id":98}],[{"start":{"row":33,"column":10},"end":{"row":33,"column":11},"action":"insert","lines":[" "],"id":99},{"start":{"row":33,"column":11},"end":{"row":33,"column":12},"action":"insert","lines":["d"]},{"start":{"row":33,"column":12},"end":{"row":33,"column":13},"action":"insert","lines":["i"]},{"start":{"row":33,"column":13},"end":{"row":33,"column":14},"action":"insert","lines":["r"]},{"start":{"row":33,"column":14},"end":{"row":33,"column":15},"action":"insert","lines":["n"]}],[{"start":{"row":33,"column":15},"end":{"row":33,"column":17},"action":"insert","lines":["  "],"id":100}],[{"start":{"row":33,"column":16},"end":{"row":33,"column":17},"action":"remove","lines":[" "],"id":101},{"start":{"row":33,"column":15},"end":{"row":33,"column":16},"action":"remove","lines":[" "]},{"start":{"row":33,"column":14},"end":{"row":33,"column":15},"action":"remove","lines":["n"]}],[{"start":{"row":33,"column":14},"end":{"row":33,"column":15},"action":"insert","lines":["_"],"id":102}],[{"start":{"row":33,"column":11},"end":{"row":33,"column":15},"action":"remove","lines":["dir_"],"id":103},{"start":{"row":33,"column":11},"end":{"row":33,"column":22},"action":"insert","lines":["dir_numeros"]}],[{"start":{"row":33,"column":22},"end":{"row":33,"column":23},"action":"insert","lines":[";"],"id":104}],[{"start":{"row":6,"column":41},"end":{"row":6,"column":42},"action":"insert","lines":[","],"id":105}],[{"start":{"row":6,"column":42},"end":{"row":6,"column":43},"action":"insert","lines":[" "],"id":106},{"start":{"row":6,"column":43},"end":{"row":6,"column":44},"action":"insert","lines":["e"]}],[{"start":{"row":6,"column":43},"end":{"row":6,"column":44},"action":"remove","lines":["e"],"id":107}],[{"start":{"row":6,"column":43},"end":{"row":6,"column":44},"action":"insert","lines":["n"],"id":108},{"start":{"row":6,"column":44},"end":{"row":6,"column":45},"action":"insert","lines":["e"]},{"start":{"row":6,"column":45},"end":{"row":6,"column":46},"action":"insert","lines":["c"]},{"start":{"row":6,"column":46},"end":{"row":6,"column":47},"action":"insert","lines":["e"]},{"start":{"row":6,"column":47},"end":{"row":6,"column":48},"action":"insert","lines":["s"]},{"start":{"row":6,"column":48},"end":{"row":6,"column":49},"action":"insert","lines":["i"]},{"start":{"row":6,"column":49},"end":{"row":6,"column":50},"action":"insert","lines":["t"]},{"start":{"row":6,"column":50},"end":{"row":6,"column":51},"action":"insert","lines":["o"]}],[{"start":{"row":6,"column":51},"end":{"row":6,"column":52},"action":"insert","lines":[" "],"id":109},{"start":{"row":6,"column":52},"end":{"row":6,"column":53},"action":"insert","lines":["m"]},{"start":{"row":6,"column":53},"end":{"row":6,"column":54},"action":"insert","lines":["a"]},{"start":{"row":6,"column":54},"end":{"row":6,"column":55},"action":"insert","lines":["t"]},{"start":{"row":6,"column":55},"end":{"row":6,"column":56},"action":"insert","lines":["y"]}],[{"start":{"row":6,"column":55},"end":{"row":6,"column":56},"action":"remove","lines":["y"],"id":110},{"start":{"row":6,"column":54},"end":{"row":6,"column":55},"action":"remove","lines":["t"]}],[{"start":{"row":6,"column":54},"end":{"row":6,"column":55},"action":"insert","lines":["y"],"id":111},{"start":{"row":6,"column":55},"end":{"row":6,"column":56},"action":"insert","lines":["o"]},{"start":{"row":6,"column":56},"end":{"row":6,"column":57},"action":"insert","lines":["r"]}],[{"start":{"row":6,"column":52},"end":{"row":6,"column":53},"action":"insert","lines":["e"],"id":112},{"start":{"row":6,"column":53},"end":{"row":6,"column":54},"action":"insert","lines":["l"]}],[{"start":{"row":6,"column":54},"end":{"row":6,"column":55},"action":"insert","lines":[" "],"id":113},{"start":{"row":6,"column":55},"end":{"row":6,"column":56},"action":"insert","lines":["v"]},{"start":{"row":6,"column":56},"end":{"row":6,"column":57},"action":"insert","lines":["a"]},{"start":{"row":6,"column":57},"end":{"row":6,"column":58},"action":"insert","lines":["l"]},{"start":{"row":6,"column":58},"end":{"row":6,"column":59},"action":"insert","lines":["r"]}],[{"start":{"row":6,"column":58},"end":{"row":6,"column":59},"action":"remove","lines":["r"],"id":114}],[{"start":{"row":6,"column":58},"end":{"row":6,"column":59},"action":"insert","lines":["o"],"id":115},{"start":{"row":6,"column":59},"end":{"row":6,"column":60},"action":"insert","lines":["r"]}],[{"start":{"row":6,"column":60},"end":{"row":6,"column":61},"action":"insert","lines":[" "],"id":116}],[{"start":{"row":32,"column":47},"end":{"row":33,"column":0},"action":"insert","lines":["",""],"id":117},{"start":{"row":33,"column":0},"end":{"row":33,"column":1},"action":"insert","lines":["\t"]},{"start":{"row":33,"column":1},"end":{"row":33,"column":2},"action":"insert","lines":["/"]},{"start":{"row":33,"column":2},"end":{"row":33,"column":3},"action":"insert","lines":["/"]}],[{"start":{"row":33,"column":3},"end":{"row":33,"column":4},"action":"insert","lines":["V"],"id":118}],[{"start":{"row":33,"column":3},"end":{"row":33,"column":4},"action":"remove","lines":["V"],"id":119}],[{"start":{"row":33,"column":3},"end":{"row":33,"column":4},"action":"insert","lines":["E"],"id":120},{"start":{"row":33,"column":4},"end":{"row":33,"column":5},"action":"insert","lines":["l"]}],[{"start":{"row":33,"column":5},"end":{"row":33,"column":6},"action":"insert","lines":[" "],"id":121},{"start":{"row":33,"column":6},"end":{"row":33,"column":7},"action":"insert","lines":["m"]},{"start":{"row":33,"column":7},"end":{"row":33,"column":8},"action":"insert","lines":["a"]},{"start":{"row":33,"column":8},"end":{"row":33,"column":9},"action":"insert","lines":["y"]},{"start":{"row":33,"column":9},"end":{"row":33,"column":10},"action":"insert","lines":["o"]},{"start":{"row":33,"column":10},"end":{"row":33,"column":11},"action":"insert","lines":["r"]}],[{"start":{"row":33,"column":10},"end":{"row":33,"column":11},"action":"remove","lines":["r"],"id":122},{"start":{"row":33,"column":9},"end":{"row":33,"column":10},"action":"remove","lines":["o"]},{"start":{"row":33,"column":8},"end":{"row":33,"column":9},"action":"remove","lines":["y"]},{"start":{"row":33,"column":7},"end":{"row":33,"column":8},"action":"remove","lines":["a"]},{"start":{"row":33,"column":6},"end":{"row":33,"column":7},"action":"remove","lines":["m"]}],[{"start":{"row":33,"column":6},"end":{"row":33,"column":7},"action":"insert","lines":["e"],"id":123},{"start":{"row":33,"column":7},"end":{"row":33,"column":8},"action":"insert","lines":["l"]},{"start":{"row":33,"column":8},"end":{"row":33,"column":9},"action":"insert","lines":["e"]},{"start":{"row":33,"column":9},"end":{"row":33,"column":10},"action":"insert","lines":["m"]},{"start":{"row":33,"column":10},"end":{"row":33,"column":11},"action":"insert","lines":["n"]},{"start":{"row":33,"column":11},"end":{"row":33,"column":12},"action":"insert","lines":["e"]},{"start":{"row":33,"column":12},"end":{"row":33,"column":13},"action":"insert","lines":["n"]}],[{"start":{"row":33,"column":12},"end":{"row":33,"column":13},"action":"remove","lines":["n"],"id":124},{"start":{"row":33,"column":11},"end":{"row":33,"column":12},"action":"remove","lines":["e"]},{"start":{"row":33,"column":10},"end":{"row":33,"column":11},"action":"remove","lines":["n"]}],[{"start":{"row":33,"column":10},"end":{"row":33,"column":11},"action":"insert","lines":["e"],"id":125},{"start":{"row":33,"column":11},"end":{"row":33,"column":12},"action":"insert","lines":["n"]},{"start":{"row":33,"column":12},"end":{"row":33,"column":13},"action":"insert","lines":["t"]},{"start":{"row":33,"column":13},"end":{"row":33,"column":14},"action":"insert","lines":["o"]}],[{"start":{"row":33,"column":14},"end":{"row":33,"column":15},"action":"insert","lines":[" "],"id":126},{"start":{"row":33,"column":15},"end":{"row":33,"column":16},"action":"insert","lines":["m"]},{"start":{"row":33,"column":16},"end":{"row":33,"column":17},"action":"insert","lines":["a"]},{"start":{"row":33,"column":17},"end":{"row":33,"column":18},"action":"insert","lines":["y"]},{"start":{"row":33,"column":18},"end":{"row":33,"column":19},"action":"insert","lines":["o"]}],[{"start":{"row":33,"column":19},"end":{"row":33,"column":20},"action":"insert","lines":[" "],"id":127},{"start":{"row":33,"column":20},"end":{"row":33,"column":21},"action":"insert","lines":["e"]},{"start":{"row":33,"column":21},"end":{"row":33,"column":22},"action":"insert","lines":["s"]},{"start":{"row":33,"column":22},"end":{"row":33,"column":23},"action":"insert","lines":[":"]}],[{"start":{"row":12,"column":28},"end":{"row":12,"column":29},"action":"insert","lines":[","],"id":128},{"start":{"row":12,"column":29},"end":{"row":12,"column":30},"action":"insert","lines":["m"]},{"start":{"row":12,"column":30},"end":{"row":12,"column":31},"action":"insert","lines":["a"]},{"start":{"row":12,"column":31},"end":{"row":12,"column":32},"action":"insert","lines":["y"]},{"start":{"row":12,"column":32},"end":{"row":12,"column":33},"action":"insert","lines":["o"]}],[{"start":{"row":12,"column":33},"end":{"row":12,"column":34},"action":"insert","lines":["r"],"id":129},{"start":{"row":12,"column":34},"end":{"row":12,"column":35},"action":"insert","lines":["="]}],[{"start":{"row":12,"column":35},"end":{"row":12,"column":36},"action":"insert","lines":["0"],"id":130}],[{"start":{"row":28,"column":3},"end":{"row":29,"column":0},"action":"insert","lines":["",""],"id":131},{"start":{"row":29,"column":0},"end":{"row":29,"column":2},"action":"insert","lines":["\t\t"]},{"start":{"row":29,"column":2},"end":{"row":29,"column":3},"action":"insert","lines":["i"]},{"start":{"row":29,"column":3},"end":{"row":29,"column":4},"action":"insert","lines":["f"]}],[{"start":{"row":29,"column":4},"end":{"row":29,"column":6},"action":"insert","lines":["()"],"id":132}],[{"start":{"row":29,"column":5},"end":{"row":29,"column":6},"action":"insert","lines":["*"],"id":133},{"start":{"row":29,"column":6},"end":{"row":29,"column":7},"action":"insert","lines":["d"]},{"start":{"row":29,"column":7},"end":{"row":29,"column":8},"action":"insert","lines":["i"]},{"start":{"row":29,"column":8},"end":{"row":29,"column":9},"action":"insert","lines":["r"]}],[{"start":{"row":29,"column":6},"end":{"row":29,"column":9},"action":"remove","lines":["dir"],"id":134},{"start":{"row":29,"column":6},"end":{"row":29,"column":17},"action":"insert","lines":["dir_numeros"]}],[{"start":{"row":29,"column":17},"end":{"row":29,"column":18},"action":"insert","lines":[" "],"id":135},{"start":{"row":29,"column":18},"end":{"row":29,"column":19},"action":"insert","lines":[":"]}],[{"start":{"row":29,"column":18},"end":{"row":29,"column":19},"action":"remove","lines":[":"],"id":136}],[{"start":{"row":29,"column":18},"end":{"row":29,"column":19},"action":"insert","lines":[">"],"id":137}],[{"start":{"row":29,"column":19},"end":{"row":29,"column":20},"action":"insert","lines":[" "],"id":138},{"start":{"row":29,"column":20},"end":{"row":29,"column":21},"action":"insert","lines":["m"]},{"start":{"row":29,"column":21},"end":{"row":29,"column":22},"action":"insert","lines":["a"]},{"start":{"row":29,"column":22},"end":{"row":29,"column":23},"action":"insert","lines":["y"]}],[{"start":{"row":29,"column":23},"end":{"row":29,"column":24},"action":"insert","lines":["o"],"id":139},{"start":{"row":29,"column":24},"end":{"row":29,"column":25},"action":"insert","lines":["r"]}],[{"start":{"row":29,"column":26},"end":{"row":29,"column":27},"action":"insert","lines":["{"],"id":140},{"start":{"row":29,"column":27},"end":{"row":29,"column":28},"action":"insert","lines":["}"]}],[{"start":{"row":29,"column":27},"end":{"row":31,"column":2},"action":"insert","lines":["","\t\t    ","\t\t"],"id":141}],[{"start":{"row":30,"column":6},"end":{"row":30,"column":7},"action":"insert","lines":["m"],"id":142},{"start":{"row":30,"column":7},"end":{"row":30,"column":8},"action":"insert","lines":["a"]},{"start":{"row":30,"column":8},"end":{"row":30,"column":9},"action":"insert","lines":["y"]},{"start":{"row":30,"column":9},"end":{"row":30,"column":10},"action":"insert","lines":["o"]},{"start":{"row":30,"column":10},"end":{"row":30,"column":11},"action":"insert","lines":["r"]}],[{"start":{"row":30,"column":11},"end":{"row":30,"column":14},"action":"insert","lines":["   "],"id":143}],[{"start":{"row":30,"column":13},"end":{"row":30,"column":14},"action":"remove","lines":[" "],"id":144}],[{"start":{"row":30,"column":13},"end":{"row":30,"column":14},"action":"insert","lines":[" "],"id":145},{"start":{"row":30,"column":14},"end":{"row":30,"column":15},"action":"insert","lines":["="]}],[{"start":{"row":30,"column":15},"end":{"row":30,"column":16},"action":"insert","lines":[" "],"id":146}],[{"start":{"row":30,"column":16},"end":{"row":30,"column":29},"action":"insert","lines":["*dir_numeros;"],"id":147}],[{"start":{"row":30,"column":13},"end":{"row":30,"column":14},"action":"remove","lines":[" "],"id":148},{"start":{"row":30,"column":12},"end":{"row":30,"column":13},"action":"remove","lines":[" "]}],[{"start":{"row":36,"column":1},"end":{"row":36,"column":23},"action":"remove","lines":["//El elemento mayo es:"],"id":149},{"start":{"row":36,"column":1},"end":{"row":36,"column":48},"action":"insert","lines":["\tcout<<\"\\nEl menor elemento es: \"<<menor<<endl;"]}],[{"start":{"row":36,"column":1},"end":{"row":36,"column":2},"action":"remove","lines":["\t"],"id":150}],[{"start":{"row":36,"column":13},"end":{"row":36,"column":19},"action":"remove","lines":["menor "],"id":151}],[{"start":{"row":36,"column":21},"end":{"row":36,"column":22},"action":"insert","lines":[" "],"id":152},{"start":{"row":36,"column":22},"end":{"row":36,"column":23},"action":"insert","lines":["m"]},{"start":{"row":36,"column":23},"end":{"row":36,"column":24},"action":"insert","lines":["a"]},{"start":{"row":36,"column":24},"end":{"row":36,"column":25},"action":"insert","lines":["y"]},{"start":{"row":36,"column":25},"end":{"row":36,"column":26},"action":"insert","lines":["o"]},{"start":{"row":36,"column":26},"end":{"row":36,"column":27},"action":"insert","lines":["r"]}],[{"start":{"row":36,"column":36},"end":{"row":36,"column":40},"action":"remove","lines":["enor"],"id":153},{"start":{"row":36,"column":36},"end":{"row":36,"column":37},"action":"insert","lines":["a"]},{"start":{"row":36,"column":37},"end":{"row":36,"column":38},"action":"insert","lines":["y"]},{"start":{"row":36,"column":38},"end":{"row":36,"column":39},"action":"insert","lines":["o"]},{"start":{"row":36,"column":39},"end":{"row":36,"column":40},"action":"insert","lines":["r"]}],[{"start":{"row":36,"column":9},"end":{"row":36,"column":10},"action":"remove","lines":["n"],"id":154},{"start":{"row":36,"column":8},"end":{"row":36,"column":9},"action":"remove","lines":["\\"]}],[{"start":{"row":32,"column":2},"end":{"row":32,"column":15},"action":"remove","lines":["dir_numeros++"],"id":156}],[{"start":{"row":25,"column":29},"end":{"row":25,"column":30},"action":"insert","lines":[","],"id":157}],[{"start":{"row":25,"column":30},"end":{"row":25,"column":31},"action":"insert","lines":[" "],"id":158}],[{"start":{"row":25,"column":31},"end":{"row":25,"column":44},"action":"insert","lines":["dir_numeros++"],"id":159}],[{"start":{"row":32,"column":2},"end":{"row":32,"column":3},"action":"remove","lines":[";"],"id":160},{"start":{"row":32,"column":1},"end":{"row":32,"column":2},"action":"remove","lines":["\t"]},{"start":{"row":32,"column":0},"end":{"row":32,"column":1},"action":"remove","lines":["\t"]},{"start":{"row":31,"column":3},"end":{"row":32,"column":0},"action":"remove","lines":["",""]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":9,"column":20},"end":{"row":9,"column":20},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1622931381845,"hash":"7cbd83e432aa3865888f7d089e54cfdfccd1480a"}
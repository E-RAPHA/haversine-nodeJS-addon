const cpp = require('./build/Release/compararDistancias.node')
const js = require("./distancia.js")
const latNY = 40.7128; // latitude de nova york
const lonNY = -74.0060; // longitude de nova york
const latLA = 34.0522; // latitude de los angeles
const lonLA = -118.2437; // longitude de los angeles


let distanciaCppKm = cpp.calcularDistancia(latNY, lonNY, latLA, lonLA) / 1000;
let distanciaJsKm = js.calcularDistancia(latNY, lonNY, latLA, lonLA) / 1000;


console.log(`distancia entre nova york e los angeles:`);    
console.log(`calculo em C++: ${distanciaCppKm.toFixed(2)} km`);
console.log(`calculo em JavaScript: ${distanciaJsKm.toFixed(2)} km`);
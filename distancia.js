function calcularDistancia(lat1, lon1, lat2, lon2) {
    const R = 6371000; // raio da terra em metros
    const dLat = toRad(lat2 - lat1);
    const dLon = toRad(lon2 - lon1);
    const a =
        Math.sin(dLat / 2) * Math.sin(dLat / 2) +
        Math.cos(toRad(lat1)) * Math.cos(toRad(lat2)) *
        Math.sin(dLon / 2) * Math.sin(dLon / 2);
    const c = 2 * Math.atan2(Math.sqrt(a), Math.sqrt(1 - a));
    const distancia = R * c;
    return distancia;
}

function toRad(valor) {
    return valor * 3.14 / 180;
}




module.exports = {
    calcularDistancia: calcularDistancia
};
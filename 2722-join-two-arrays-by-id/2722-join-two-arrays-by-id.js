/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(...arrs) {
    let map = new Map();
    for (const arr of arrs) {
        for (const obj of arr) {
            map.set(obj.id, {...map.get(obj.id), ...obj});
        }
    }
    return [...map.values()].sort((lhs, rhs) => lhs.id - rhs.id);
};
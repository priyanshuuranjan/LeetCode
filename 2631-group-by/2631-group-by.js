Array.prototype.groupBy = function(fn) {
    var arr = this;
    var ans = {};

    for(let i =0;i<arr.length;i++){
        var key = fn(arr[i]);

        if(ans[key]){
            ans[key].push(arr[i]);
        }
        else{
            ans[key] = [];
            ans[key].push(arr[i]);
        }
    }
    return ans;
};
function strStr(haystack: string, needle: string): number {

    let n = haystack.length;
    let m = needle.length;

    for (let i = 0; i <= n - m; i++) {

        let j = 0;

        while (j < m && haystack[i + j] === needle[j]) {
            j++;
        }

        if (j === m) {
            return i;
        }
    }

    return -1;
};
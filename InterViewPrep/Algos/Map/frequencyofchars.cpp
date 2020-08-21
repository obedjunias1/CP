/*
https://leetcode.com/articles/hash-table/
17-08-2020 12:24:32
*/
private static void printFreq(char[] str) {
    int[] freq = new int[256];
    for (int i = 0; i < str.length; i++) {
        freq[str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            System.out.println("[" + (char)(i) + "] = " + freq[i]);
        }
    }
}

public static void main(String[] args) {
    char[] str = "Hello world".toCharArray();
    printFreq(str);
}
//Why do we choose size 256? Why not 128 or 26? The reason is because there are a total of 256 possible ASCII characters, from 0 to 255. If you are sure that the input characters are all lowercase letters (a - z), then you can save some space by using an array of size 26:
//0 based indexing for lowercase
private static void printFreq(char[] str) {
    int[] freq = new int[26];
    for (int i = 0; i < str.length; i++) {
        // 'a' has an ascii value of 97, so there is an offset in accessing the index.
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            System.out.println("[" + (char)(i + 'a') + "] = " + freq[i]);
        }
    }
}

public static void main(String[] args) {
    char[] str = "helloworld".toCharArray();
    printFreq(str);
}

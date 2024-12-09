class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index = 1; // Word indices are 1-based
        string word = "";
        
        for (char c : sentence) {
            if (c == ' ') { // End of a word
                if (isPrefix(word, searchWord)) {
                    return index;
                }
                word = ""; // Reset the word
                index++; // Move to the next word
            } else {
                word += c; // Build the current word
            }
        }
        
        // Check the last word in the sentence
        if (isPrefix(word, searchWord)) {
            return index;
        }
        
        return -1; // No match found
    }

private:
    // Helper function to check if searchWord is a prefix of word
    bool isPrefix(const string& word, const string& searchWord) {
        if (word.size() < searchWord.size()) {
            return false;
        }
        for (size_t i = 0; i < searchWord.size(); ++i) {
            if (word[i] != searchWord[i]) {
                return false;
            } 
        }
        return true;
    }
};

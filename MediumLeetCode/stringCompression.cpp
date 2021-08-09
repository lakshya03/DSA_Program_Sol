class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() < 2)
			return chars.size();

		int  i = 0;
		int  j = 0;

		while(i < chars.size()) {
			chars[j] = chars[i];
			int count = 0;
			while(i < chars.size() && chars[i] == chars[j]) {
				count++;
				i++;
			}

			if(count == 1) {
				j++;
			} else {
				string str = to_string(count);
				for(auto ch: str)
					chars[++j] = ch;
				j++;
			}
		}

		return j;
    }
};
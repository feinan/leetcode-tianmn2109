/* �㷨˼��
 *  ɨ��n/2�Σ� ��һ�� ����Ϊ0 �ļ��룬 �ڶ��� ����Ϊ1 �� n -1 �ļ��� ���һ������Ϊn/2�ļ���
 *  �㷨Ч�ʿ��Լ�����ߣ�ͨ���������� ������Ծʽ ɨ��
 */
class Solution {
public:
    string convert(string s, int nRows) {
        if (nRows == 1) return s;
        
        int num = nRows * 2 - 2;
        string ret = "";
        for (int i = 0; i < s.size(); ++i) {
            if (i % num == 0)
                ret += s[i];
        }
        
        int pre = 1;
        int next = num - 1;
        
        while (pre < next) {
            for (int i = 0; i < s.size(); ++i) {
                if (i % num == pre || i % num == next)
                    ret += s[i];
            }
            pre ++;
            next --;
        }
        
        for (int i = 0; i < s.size(); ++i) {
            if (i % num == pre)
                ret += s[i];
        }
        return ret;
    }
};

/*�㷨˼��
 *��ת������ֵת����64λ������ת�����ж��������
 *����ʱ�ٽ���ֵת����32λ��int
 */
class Solution {
public:
    int reverse(int x) {
        bool isNegative = true;
        if (x >= 0) isNegative = false;
        
        long long temp = x > 0 ? (long long)x : (long long)(-x); 
        long long ret = 0;
        while (temp > 0) {
            ret = ret * 10 + temp%10;
            temp = temp/10;
        }
        
        if (ret > 0x7fffffffL)
            return 0;
        return isNegative ? (int)(-ret) : (int)ret;
    }
};
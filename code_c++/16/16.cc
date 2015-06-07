/*
 * 1�� ѭ������������ʣ�µ����У��������������м�ɨ�� �����������ĺ�
 * 2�� �ȽϾ���ֵ�Ĵ�С������ʱ���������
 */
class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int closest = 0x7fffffff;
        int ret;
        sort(num.begin(), num.end());
        for (int i = 0; i < num.size() - 2; i ++) {
            int left = i + 1;
            int right = num.size() - 1;
            while (left < right) {
                int temp = num[i] + num[left] + num[right] - target;
                if (abs(temp) < closest) {
                    closest = abs(temp);
                    ret = num[i] + num[left] + num[right];
                }
                if (temp > 0)
                    right --;
                else
                    left ++;
            }
        }
        return ret;
    }
};
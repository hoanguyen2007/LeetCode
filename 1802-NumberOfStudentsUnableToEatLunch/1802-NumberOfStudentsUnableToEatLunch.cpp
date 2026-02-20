// Last updated: 2/20/2026, 8:33:56 PM
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // Bước 1: Đếm số lượng sinh viên thích mỗi loại bánh
        int count[2] = {0, 0};
        for (int s : students) {
            count[s]++;
        }

        // Bước 2: Duyệt qua từng cái bánh sandwich trong stack
        for (int sandwich : sandwiches) {
            // Nếu loại bánh này vẫn còn sinh viên thích, họ sẽ lấy nó
            if (count[sandwich] > 0) {
                count[sandwich]--;
            } 
            // Nếu không còn sinh viên nào thích loại bánh này nữa, dừng lại
            else {
                break;
            }
        }

        // Bước 3: Số sinh viên không ăn được là tổng số sinh viên còn lại
        return count[0] + count[1];
    }
};
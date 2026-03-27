// โครงสร้างข้อมูลสำหรับกิจกรรม 
struct Activity {
    int id;    // ชื่อหรือลำดับกิจกรรม
    int start; // เวลาเริ่มต้น (s)
    int finish;// เวลาสิ้นสุด (f)
};

// ฟังก์ชันสำหรับเปรียบเทียบเพื่อเรียงลำดับตามเวลาสิ้นสุด (f) จากน้อยไปมาก 
bool compareActivity(Activity a, Activity b) {
    return a.finish < b.finish;
}

void greedyActivitySelect(vector<Activity>& activities, int n) {
    // 1. เรียงลำดับกิจกรรมตามเวลาสิ้นสุด (Finish Time) 
    sort(activities.begin(), activities.end(), compareActivity);

    // 2. เลือกกิจกรรมแรกเสมอ (เพราะจบเร็วที่สุด) 
    cout << "Selected activities: ";
    int lastFinishTime = activities[0].finish;
    cout << activities[0].id << " ";

    // 3. วนลูปพิจารณากิจกรรมที่เหลือ [
    for (int i = 1; i < n; i++) {
        // เงื่อนไข: เวลาเริ่มของกิจกรรมใหม่ต้องไม่เหลื่อมกับเวลาจบของกิจกรรมล่าสุด 
        if (activities[i].start >= lastFinishTime) {
            cout << activities[i].id << " ";
            lastFinishTime = activities[i].finish; // อัปเดตเวลาจบล่าสุด
        }
    }
}
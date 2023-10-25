/*
 * THƯ VIỆN KHAI BÁO KIỂU DANH SÁCH SV VÀ CLASS SV
 */
#pragma once

#include <bits/stdc++.h>
using namespace std;

int ID = 0;

struct Ngay
{
    int ngay, thang, nam;
};

struct Diem
{
    float diemOOP, diemDSA, diemTRR, DTB;
};

struct SV
{
    int id;          // ID sinh viên
    string MSSV;     // MSSV sinh viên
    string hoVaTen;  // Họ và Tên sinh viên
    string email;    // Email sinh viên
    Ngay ngaySinh;   // Ngày/tháng/năm sinh của sinh viên
    string gioiTinh; // Giới tính sinh viên
    string nganhHoc; // Nghành học sinh viên
    Diem diem;       // Điểm 3 môn: Lập trình hướng đối tượng, Cấu trúc dữ liệu & Giải thuật, Toán rời rạc
};

// Node lưu thông tin sinh viên
struct Node
{
    SV sv;
    Node *next;
    Node *prev;
};

// Danh sách sinh viên
class DSSV
{
private:
    Node *dssv;
    Node* tail;

public:
    DSSV()
    {
        dssv = NULL;
        tail = NULL;
    }
    ~DSSV()
    {
        delete[] this->dssv;
    }

    /*THÊM THÔNG TIN SINH VIÊN*/
    Node *taoSV(SV);
    void nhapThongTin(SV &);
    void themSV(SV);
    void themDanhSachSV(int);

    /*XUẤT THÔNG TIN SINH VIÊN*/
    void inThongTinSV(SV);
    void inDanhSachSV();

    /*CẬP NHẬT THÔNG TIN SINH VIÊN*/
    void capNhatSvTheoTen(Node *nodeFound);
    void capNhatSvTheoEmail(Node *nodeFound);
    void capNhatSvTheoNgaySinh(Node *nodeFound);
    void capNhatSvTheoGioiTinh(Node *nodeFound);
    void capNhatSvTheoNganh(Node *nodeFound);
    void capNhatSvTheoDiem(Node *nodeFound);
    void capNhatSVBangID();
    void capNhatSVBangMSSV();

    /*XÓA SINH VIÊN*/
    void xoaSV(int id[], int n);
    void xoaSV(string mssv);

    /*SẮP XẾP SINH VIÊN*/
    // (ID: 1) (MSSV: 2) (DTB: 3)
    void sxSVTangDanID();
    void sxSVTangDanTen();
    void sxSVTangDanDTB();
    void sxSVTangDan();

    void sxSVGiamDanID();
    void sxSVGiamDanTen();
    void sxSVGiamDanDTB();
    void sxSVGiamDan();

    /*TÌM KIẾM SINH VIÊN*/
    void timKiemSV(int id);
    void timKiemSV(string ten);

    /*THỐNG KÊ SINH VIÊN*/
    // (DTB: 1) (NGANH: 2) (GIOI TINH: 3)
    void thongKeDTB();
    void thongKeNganh();
    void thongKeGioiTinh();
    void thongKe(int);

    /*SỐ LƯỢNG SINH VIÊN TRONG DANH SÁCH*/
    int soLuong();

    /*XỬ LÝ ĐỌC GHI FILE*/
    void docFile();
    void ghiFile();
};
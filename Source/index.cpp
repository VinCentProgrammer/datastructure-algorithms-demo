/**
 * FILE CHÍNH XỬ LÝ CHƯƠNG TRÌNH
 */

#include <bits/stdc++.h>
#include "setting.h"
#include "lib.h"
#include "validation.h"
#include "implement_Validation.h"
#include "ortherFunctions.h"
#include "implement_ortherFuntions.h"

using namespace std;

int main()
{
    DSSV dssv;
   
    dssv.docFile();
    dssv.inDanhSachSV();
    // cout << "Nhap so luong sinh vien can xoa: ";
    // int n; cin >> n;
    // int* ID = new int[n];
    // dssv.xoaSV(ID, n);
    string mssv;
    cout << "Nhap danh sach MSSV ca xoa: ";
    cin >> mssv;
    dssv.xoaSV(mssv);
    dssv.inDanhSachSV();
    return 0;
}
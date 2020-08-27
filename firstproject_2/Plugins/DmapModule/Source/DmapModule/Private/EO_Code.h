//
//#pragma once
//#include "CoreMinimal.h"
//#include "Math/Vector.h"
//
//struct EO_CODE
//{
//    uint64 X, Y, Z;
//    uint64& operator[](int p_index)
//    {
//        if (p_index == 0) { return X; }
//        if (p_index == 1) { return Y; }
//        if (p_index == 2) { return Z; }
//        else throw std::runtime_error("wrong index");
//    }
//
//    EO_CODE(uint64 p_x, uint64 p_y, uint64 p_z) : X(p_x), Y(p_y), Z(p_z) {}
//    explicit EO_CODE(FIntVector p_v) : X(p_v.X), Y(p_v.Y), Z(p_v.Z) {}
//    EO_CODE() {}
//
//
//    EO_CODE& operator=(FIntVector p_vec)
//    {
//        X = p_vec.X;
//        Y = p_vec.Y;
//        Z = p_vec.Z;
//    }
//    EO_CODE& operator=(FVector p_vec)
//    {
//        X = p_vec.X;
//        Y = p_vec.Y;
//        Z = p_vec.Z;
//    }
//
//    FIntVector toIntVector()
//    {
//        return { (int)X,(int)Y,(int)Z };
//    }
//
//    static EO_CODE convertToEO_Code(FVector p_voxel);
//
//};

// Fill out your copyright notice in the Description page of Project Settings.

#include "DmapAsset.h"
#include <iostream>
#include <sstream>
#include <cassert>

#include "EngineUtils.h"

UDmapAsset::UDmapAsset()
{
}

UDmapAsset::~UDmapAsset()
{
}

FVector UDmapAsset::readLine(std::string p_input)
{
	// extract string into stream
	std::stringstream stream;
	stream << p_input;

	

	// read numbers from stream
	FVector result;
	stream >> result.X;
	stream >> result.Y;
	stream >> result.Z;

	return result;
}

void UDmapAsset::ParseData(FString p_file_data)
{
	std::string file_str = (TCHAR_TO_UTF8(*p_file_data));

	std::istringstream iss(file_str);

	std::string file_dimensions_str;
	std::getline(iss, file_dimensions_str);

	auto pos = file_dimensions_str.find("voxel");

	if (pos != std::string::npos)
	{
		file_dimensions_str.erase(pos, strlen("voxel"));
	}

	FVector dimensions = readLine(file_dimensions_str);

	std::string line_read;
	while (std::getline(iss, line_read))
	{
		m_data.Add(readLine(line_read));
	}

}

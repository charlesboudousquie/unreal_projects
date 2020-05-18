  
  
#include "DmapFactoryMenu.h"

UDmapFactory::UDmapFactory()
{
	
	SupportedClass = UDMAP_Asset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;

}

UObject* UDmapFactory::FactoryCreateNew(UClass* InClass, UObject* InParent,
	FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	
	return new UDMAP_Asset; // ??
	
}

bool UDmapFactory::ShouldShowInNewMenu() const
{
	return true;
}
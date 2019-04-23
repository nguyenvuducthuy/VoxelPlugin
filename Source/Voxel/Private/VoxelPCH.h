// Copyright 2019 Phyronnaz

#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PrimitiveSceneProxy.h"
#include "StaticMeshResources.h"
#include "Components/MeshComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "EngineUtils.h"
#include "Engine/Engine.h"
#include "Engine/EngineTypes.h"
#include "Engine/StaticMesh.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "UObject/WeakObjectPtr.h"
#include "UObject/GCObject.h"
#include "UObject/TextProperty.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "Misc/Guid.h"
#include "Misc/Compression.h"
#include "Misc/MessageDialog.h"
#include "Misc/UObjectToken.h"
#include "Curves/RichCurve.h"
#include "Runtime/Launch/Resources/Version.h"
#include "TimerManager.h"
#include "Logging/TokenizedMessage.h"

#include "VoxelGlobals.h"
#include "VoxelValue.h"
#include "VoxelMaterial.h"
#include "IntBox.h"
#include "VoxelPlaceableItems/VoxelPlaceableItem.h"
#include "VoxelConfigEnums.h"
#include "VoxelMathUtilities.h"
#include "VoxelIntVectorUtilities.h"
#include "VoxelQueryZone.h"
#include "VoxelWorldGenerator.h"
#include "VoxelData/VoxelSave.h"
#include "VoxelData/VoxelDataCell.h"
#include "IVoxelPool.h"
#include "VoxelWorldGeneratorPicker.h"
#include "VoxelData/VoxelSharedMutex.h"
#include "VoxelThreadPool.h"
#include "VoxelBlueprintErrors.h"
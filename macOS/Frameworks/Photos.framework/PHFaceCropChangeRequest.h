//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSData, NSManagedObjectID, NSString, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHFaceCropChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    NSString *_originatingFaceUUID;
    PHRelationshipChangeRequestHelper *_faceHelper;
    PHRelationshipChangeRequestHelper *_personHelper;
}

+ (BOOL)canGenerateUUIDWithoutEntitlements;
+ (void)deleteFaceCrops:(id)arg1;
+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3;
+ (id)changeRequestForFaceCrop:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *personHelper; // @synthesize personHelper=_personHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *faceHelper; // @synthesize faceHelper=_faceHelper;
@property(copy, nonatomic) NSString *originatingFaceUUID; // @synthesize originatingFaceUUID=_originatingFaceUUID;
- (BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *managedEntityName;
- (BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
@property(nonatomic) short state;
@property(retain, nonatomic) NSData *resourceData;
- (void)setFace:(id)arg1;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (void)_preparePersonHelperIfNeeded;
- (void)_prepareFaceHelperIfNeeded;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic) CDUnknownBlockType concurrentWorkBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL isNewRequest;
@property(readonly, getter=isMutated) BOOL mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly) Class superclass;

@end


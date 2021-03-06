//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDBackingStoreModelObject, NSArray, NSUUID;

@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
- (NSArray *)modelBackedObjects;
- (NSArray *)backingStoreObjectsWithChangeType:(unsigned int)arg1 version:(int)arg2;
- (HMDBackingStoreModelObject *)modelObjectWithChangeType:(unsigned int)arg1 version:(int)arg2;

@optional
- (_Bool)isBackingStorageEqual:(id)arg1;
- (id)initWithModelObject:(HMDBackingStoreModelObject *)arg1 parent:(id)arg2 error:(id *)arg3;
@end


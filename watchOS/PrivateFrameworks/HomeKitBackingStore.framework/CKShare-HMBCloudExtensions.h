//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKShare.h>

#import <HomeKitBackingStore/HMBModelObjectStorage-Protocol.h>

@class NSString;

@interface CKShare (HMBCloudExtensions) <HMBModelObjectStorage>
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned int)arg2 error:(id *)arg3;
- (id)hmbEncodeForStorageLocation:(unsigned int)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPMediaDownload : NSObject
{
    int _downloadReason;
    unsigned int _downloadPausedReason;
    long long _deviceLibraryID;
    long long _storeItemID;
    double _downloadProgress;
    long long _libraryID;
    long long _storeSagaID;
}

+ (int)_downloadReasonFromStoreDownload:(id)arg1;
+ (unsigned int)MPMediaDownloadPauseReasonForATAsset:(id)arg1;
+ (id)MPMediaDownloadsFromATAssets:(id)arg1;
+ (id)MPMediaDownloadsFromMPStoreDownloads:(id)arg1;
@property long long storeSagaID; // @synthesize storeSagaID=_storeSagaID;
@property long long libraryID; // @synthesize libraryID=_libraryID;
@property(nonatomic) unsigned int downloadPausedReason; // @synthesize downloadPausedReason=_downloadPausedReason;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) int downloadReason; // @synthesize downloadReason=_downloadReason;
@property(readonly, nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(readonly, nonatomic) long long deviceLibraryID; // @synthesize deviceLibraryID=_deviceLibraryID;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithMPStoreDownload:(id)arg1;

@end


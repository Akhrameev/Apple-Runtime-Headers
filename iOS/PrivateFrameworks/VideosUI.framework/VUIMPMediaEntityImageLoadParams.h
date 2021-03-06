//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIImageLoadParams-Protocol.h>

@class MPArtworkCatalog, MPMediaItem, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>
{
    _Bool _calculatedIdentifier;
    NSString *_imageIdentifier;
    unsigned long long _imageType;
    MPMediaItem *_mediaItem;
    MPArtworkCatalog *_artworkCatalog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(nonatomic) _Bool calculatedIdentifier; // @synthesize calculatedIdentifier=_calculatedIdentifier;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
- (id)init;
- (id)initWithMediaItem:(id)arg1 andImageType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


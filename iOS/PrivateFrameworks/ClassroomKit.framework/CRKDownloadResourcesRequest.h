//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray, NSData, NSString;

@interface CRKDownloadResourcesRequest : CATTaskRequest
{
    _Bool _openAfterDownloadCompletes;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSArray *_resources;
    NSString *_resourcesDescription;
    NSData *_previewImageData;
    NSString *_sourceBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(nonatomic) _Bool openAfterDownloadCompletes; // @synthesize openAfterDownloadCompletes=_openAfterDownloadCompletes;
@property(retain, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(copy, nonatomic) NSString *resourcesDescription; // @synthesize resourcesDescription=_resourcesDescription;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


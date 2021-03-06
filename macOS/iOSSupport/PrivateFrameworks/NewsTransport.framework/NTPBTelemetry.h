//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTelemetry : PBCodable <NSCopying>
{
    long long _appBuild;
    NSString *_appBuildNumber;
    NSString *_appVersion;
    NSString *_carrier;
    int _contentEnvironment;
    NSString *_countryCode;
    NSString *_deviceModel;
    NSString *_devicePlatform;
    NSString *_languageCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSMutableArray *_networkEventGroups;
    NSString *_osCountryCode;
    int _osInstallVariant;
    NSString *_osVersion;
    NSString *_userId;
    NSString *_userStorefrontId;
    struct {
        unsigned int appBuild:1;
        unsigned int contentEnvironment:1;
        unsigned int osInstallVariant:1;
    } _has;
}

+ (Class)networkEventGroupsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appBuildNumber; // @synthesize appBuildNumber=_appBuildNumber;
@property(retain, nonatomic) NSMutableArray *networkEventGroups; // @synthesize networkEventGroups=_networkEventGroups;
@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *osCountryCode; // @synthesize osCountryCode=_osCountryCode;
@property(retain, nonatomic) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(retain, nonatomic) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) long long appBuild; // @synthesize appBuild=_appBuild;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAppBuildNumber;
- (id)networkEventGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkEventGroupsCount;
- (void)addNetworkEventGroups:(id)arg1;
- (void)clearNetworkEventGroups;
@property(readonly, nonatomic) BOOL hasUserStorefrontId;
@property(readonly, nonatomic) BOOL hasUserId;
@property(nonatomic) BOOL hasContentEnvironment;
@property(nonatomic) int contentEnvironment; // @synthesize contentEnvironment=_contentEnvironment;
- (int)StringAsOsInstallVariant:(id)arg1;
- (id)osInstallVariantAsString:(int)arg1;
@property(nonatomic) BOOL hasOsInstallVariant;
@property(nonatomic) int osInstallVariant; // @synthesize osInstallVariant=_osInstallVariant;
@property(readonly, nonatomic) BOOL hasOsCountryCode;
@property(readonly, nonatomic) BOOL hasMobileNetworkCode;
@property(readonly, nonatomic) BOOL hasMobileCountryCode;
@property(readonly, nonatomic) BOOL hasCarrier;
@property(readonly, nonatomic) BOOL hasLanguageCode;
@property(readonly, nonatomic) BOOL hasCountryCode;
@property(nonatomic) BOOL hasAppBuild;
@property(readonly, nonatomic) BOOL hasAppVersion;
@property(readonly, nonatomic) BOOL hasOsVersion;
@property(readonly, nonatomic) BOOL hasDevicePlatform;
@property(readonly, nonatomic) BOOL hasDeviceModel;

@end


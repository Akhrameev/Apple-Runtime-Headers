//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBEndpointConfig : PBCodable <NSCopying>
{
    NSString *_analyticsEndpointUrlsJson;
    NSString *_analyticsEnvelopeContentTypePropJson;
    NSString *_clientApiBaseUrl;
    int _environment;
    NSString *_eventRelayBaseUrl;
    NSString *_eventRelayBatchBaseUrl;
    NSString *_newsNotificationsBaseUrl;
    NSString *_remoteDataSourceBaseUrl;
    NSString *_staticAssetBaseUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *remoteDataSourceBaseUrl; // @synthesize remoteDataSourceBaseUrl=_remoteDataSourceBaseUrl;
@property(retain, nonatomic) NSString *staticAssetBaseUrl; // @synthesize staticAssetBaseUrl=_staticAssetBaseUrl;
@property(retain, nonatomic) NSString *analyticsEnvelopeContentTypePropJson; // @synthesize analyticsEnvelopeContentTypePropJson=_analyticsEnvelopeContentTypePropJson;
@property(retain, nonatomic) NSString *analyticsEndpointUrlsJson; // @synthesize analyticsEndpointUrlsJson=_analyticsEndpointUrlsJson;
@property(retain, nonatomic) NSString *newsNotificationsBaseUrl; // @synthesize newsNotificationsBaseUrl=_newsNotificationsBaseUrl;
@property(retain, nonatomic) NSString *eventRelayBatchBaseUrl; // @synthesize eventRelayBatchBaseUrl=_eventRelayBatchBaseUrl;
@property(retain, nonatomic) NSString *eventRelayBaseUrl; // @synthesize eventRelayBaseUrl=_eventRelayBaseUrl;
@property(retain, nonatomic) NSString *clientApiBaseUrl; // @synthesize clientApiBaseUrl=_clientApiBaseUrl;
@property(nonatomic) int environment; // @synthesize environment=_environment;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRemoteDataSourceBaseUrl;
@property(readonly, nonatomic) _Bool hasStaticAssetBaseUrl;
@property(readonly, nonatomic) _Bool hasAnalyticsEnvelopeContentTypePropJson;
@property(readonly, nonatomic) _Bool hasAnalyticsEndpointUrlsJson;
@property(readonly, nonatomic) _Bool hasNewsNotificationsBaseUrl;
@property(readonly, nonatomic) _Bool hasEventRelayBatchBaseUrl;
@property(readonly, nonatomic) _Bool hasEventRelayBaseUrl;
@property(readonly, nonatomic) _Bool hasClientApiBaseUrl;

@end


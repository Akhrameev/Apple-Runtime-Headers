//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSString;

@interface PBBProtoCompanionTermsResponse : PBCodable <NSCopying>
{
    NSString *_responseData;
    NSString *_userAgent;
    _Bool _isExistingAccountTerms;
    _Bool _termsAccepted;
    struct {
        unsigned int isExistingAccountTerms:1;
        unsigned int termsAccepted:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) _Bool isExistingAccountTerms; // @synthesize isExistingAccountTerms=_isExistingAccountTerms;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) _Bool termsAccepted; // @synthesize termsAccepted=_termsAccepted;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasResponseData;
@property(nonatomic) _Bool hasIsExistingAccountTerms;
@property(readonly, nonatomic) _Bool hasUserAgent;
@property(nonatomic) _Bool hasTermsAccepted;

@end


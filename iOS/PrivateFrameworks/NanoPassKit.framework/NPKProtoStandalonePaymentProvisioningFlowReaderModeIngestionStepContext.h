//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable <NSCopying>
{
    float _ingestionProgress;
    int _ingestionState;
    NSString *_physicalCardImageURL;
    NSString *_subtitle;
    NSString *_title;
    struct {
        unsigned int ingestionProgress:1;
        unsigned int ingestionState:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) float ingestionProgress; // @synthesize ingestionProgress=_ingestionProgress;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *physicalCardImageURL; // @synthesize physicalCardImageURL=_physicalCardImageURL;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIngestionProgress;
- (int)StringAsIngestionState:(id)arg1;
- (id)ingestionStateAsString:(int)arg1;
@property(nonatomic) _Bool hasIngestionState;
@property(nonatomic) int ingestionState; // @synthesize ingestionState=_ingestionState;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasPhysicalCardImageURL;

@end


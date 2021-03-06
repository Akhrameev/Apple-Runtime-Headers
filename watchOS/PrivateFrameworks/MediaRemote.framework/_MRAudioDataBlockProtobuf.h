//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRAudioBufferProtobuf, _MRAudioTimeProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying>
{
    double _gain;
    _MRAudioBufferProtobuf *_buffer;
    _MRAudioTimeProtobuf *_time;
    struct {
        unsigned int gain:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double gain; // @synthesize gain=_gain;
@property(retain, nonatomic) _MRAudioTimeProtobuf *time; // @synthesize time=_time;
@property(retain, nonatomic) _MRAudioBufferProtobuf *buffer; // @synthesize buffer=_buffer;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasGain;
@property(readonly, nonatomic) _Bool hasTime;
@property(readonly, nonatomic) _Bool hasBuffer;

@end


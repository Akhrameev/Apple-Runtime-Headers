//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMStandardStreamFormat.h>

@interface AVB17221AEMCVFStreamFormat : AVB17221AEMStandardStreamFormat
{
}

+ (id)keyPathsForValuesAffectingFormatSubtype;
+ (id)keyPathsForValuesAffectingFormat;
- (BOOL)isSupportedVideoFormat;
- (BOOL)isVideoFormat;
@property(readonly) unsigned char formatSubtype; // @dynamic formatSubtype;
- (void)setFormatSubtype:(unsigned char)arg1;
@property(readonly) unsigned char format; // @dynamic format;
- (void)setFormat:(unsigned char)arg1;
- (id)init;

@end


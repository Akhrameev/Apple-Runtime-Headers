//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXAnswerCallAction : CXCallAction
{
    _Bool _downgradeToAudio;
    NSDate *_dateConnected;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

+ (_Bool)supportsSecureCoding;
+ (double)timeout;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic) _Bool downgradeToAudio; // @synthesize downgradeToAudio=_downgradeToAudio;
- (void)setLocalLandscapeAspectRatio:(struct CGSize)arg1;
- (struct CGSize)localLandscapeAspectRatio;
- (void)setLocalPortraitAspectRatio:(struct CGSize)arg1;
- (struct CGSize)localPortraitAspectRatio;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateAsFulfilledWithDateConnected:(id)arg1;
- (void)fulfillWithDateConnected:(id)arg1;
- (void)fulfill;
- (id)customDescription;

@end


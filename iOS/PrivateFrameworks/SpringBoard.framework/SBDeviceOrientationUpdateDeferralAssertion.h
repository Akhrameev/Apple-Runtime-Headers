//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSString, SBDeviceOrientationUpdateManager;

@interface SBDeviceOrientationUpdateDeferralAssertion : NSObject <BSInvalidatable>
{
    _Bool _invalidated;
    NSString *_reason;
    SBDeviceOrientationUpdateManager *_hackyBackReference;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic, setter=_setHackyBackReference:) __weak SBDeviceOrientationUpdateManager *hackyBackReference; // @synthesize hackyBackReference=_hackyBackReference;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReason:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


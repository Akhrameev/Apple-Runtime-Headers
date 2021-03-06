//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTService.h>

@class RTInvocationDispatcher, RTPlatform, RTUserSessionMonitor;

@interface RTAuthorizationManager : RTService
{
    _Bool _supported;
    _Bool _enabled;
    _Bool _ready;
    RTInvocationDispatcher *_dispatcher;
    RTPlatform *_platform;
    RTUserSessionMonitor *_userSessionMonitor;
}

+ (_Bool)supportsNotificationName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(retain) RTUserSessionMonitor *userSessionMonitor; // @synthesize userSessionMonitor=_userSessionMonitor;
@property(retain, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void)onUserSessionChangeNotification:(id)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)handleAppResetChangeNotification;
- (void)updateRoutineEnabled:(_Bool)arg1;
- (void)setRoutineEnabled:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldPersistLocations;
- (void)fetchRoutineSupportedWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRoutineEnabledWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isCoreRoutineLocationClientEnabled;
- (_Bool)isLocationServicesEnabled;
- (void)dealloc;
- (void)_shutdown;
- (void)_setup;
- (void)setup;
- (id)initWithPlatform:(id)arg1 userSessionMonitor:(id)arg2;
- (id)init;

@end


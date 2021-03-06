//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLApplicationUpgradeMonitorDelegate-Protocol.h>

@class CSLApplicationUpgradeMonitor, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSLForegroundMonitorService : NSObject <CSLApplicationUpgradeMonitorDelegate>
{
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_inForegroundByBundleID;
    NSMutableDictionary *_lastForegroundDateByBundleID;
    NSMutableDictionary *_deactivatedByBundleID;
    NSObject<OS_dispatch_queue> *_queue;
    CSLApplicationUpgradeMonitor *_upgradeMonitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CSLApplicationUpgradeMonitor *upgradeMonitor; // @synthesize upgradeMonitor=_upgradeMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *deactivatedByBundleID; // @synthesize deactivatedByBundleID=_deactivatedByBundleID;
@property(retain, nonatomic) NSMutableDictionary *lastForegroundDateByBundleID; // @synthesize lastForegroundDateByBundleID=_lastForegroundDateByBundleID;
@property(retain, nonatomic) NSMutableDictionary *inForegroundByBundleID; // @synthesize inForegroundByBundleID=_inForegroundByBundleID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)applicationUpgradeMonitor:(id)arg1 removed:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
- (void)_queue_removeApplicationEntry:(id)arg1;
- (void)_queue_notifyAppChangedState:(id)arg1 inForeground:(_Bool)arg2;
- (void)_queue_setDeactivated:(id)arg1 deactivated:(_Bool)arg2;
- (_Bool)_queue_isAppDeactivated:(id)arg1;
- (_Bool)_queue_isAppInForeground:(id)arg1;
- (void)_queue_stateChange:(id)arg1 inForeground:(_Bool)arg2;
- (id)lastForegroundDateForApplicationBundleID:(id)arg1;
- (void)_queue_setDeactivated:(_Bool)arg1 forApplicationBundleID:(id)arg2;
- (void)setDeactivated:(_Bool)arg1 forApplicationBundleID:(id)arg2;
- (_Bool)isAppWithBundleIDDeactivated:(id)arg1;
- (void)setForeground:(_Bool)arg1 forApplicationBundleID:(id)arg2;
- (_Bool)isAppWithBundleIDInForeground:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


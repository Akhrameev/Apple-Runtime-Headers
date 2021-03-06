//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ButtonResolver/BRInterface.h>

@class HAButtonHapticsLoader, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;

@interface BRInterfaceAOP : BRInterface
{
    struct IONotificationPort *_notificationPort;
    unsigned int _arrivalNotification;
    CDUnknownBlockType _notificationBlock;
    NSString *_notificationName;
    HAButtonHapticsLoader *_loader;
    NSMutableIndexSet *_freeSlots;
    NSMutableArray *_slotArray;
    NSMutableDictionary *_stateDict;
    _Bool _isReady;
    _Bool _fastHaptics;
    unsigned int _service;
    unsigned int _connect;
    unsigned long long _maxAssetSlots;
}

+ (int)_convertClickState:(unsigned long long)arg1;
+ (int)_convertForceFeel:(unsigned long long)arg1;
+ (id)interface;
@property(readonly, nonatomic) _Bool fastHaptics; // @synthesize fastHaptics=_fastHaptics;
@property(nonatomic) unsigned int connect; // @synthesize connect=_connect;
@property(nonatomic) unsigned int service; // @synthesize service=_service;
- (unsigned long long)maxAssetSlots;
- (_Bool)isReady;
- (_Bool)_setStateAOPConfigsFromStateData:(id)arg1 andSlotData:(id)arg2;
- (_Bool)_setGlobalAOPConfigsFromBRFConfigs:(id)arg1;
- (_Bool)_setDefaultAOPConfigs;
- (_Bool)_serviceSetProperty:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)_receiveLoaderAvailableNotification:(id)arg1;
- (void)_findService;
- (_Bool)updateReadyState;
- (void)scheduleReadyNotificationWithBlock:(CDUnknownBlockType)arg1;
- (void)mergeStateChanges:(id)arg1 into:(id)arg2;
- (id)dataForSlot:(id)arg1 fromArray:(id)arg2;
- (_Bool)disableStates:(id)arg1 clearAsset:(_Bool)arg2 error:(id *)arg3;
- (_Bool)enableStates:(id)arg1 error:(id *)arg2;
- (_Bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id *)arg4;
- (_Bool)setGlobalConfigs:(id)arg1 error:(id *)arg2;
- (unsigned long long)unusedAssetSlots;
- (id)propertyList;
- (id)description;
- (void)dealloc;
- (id)initWithFastHaptics:(_Bool)arg1;
- (id)init;

@end


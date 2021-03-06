//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/CSLSUITriggerRemoteClientServiceDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol CSLSUITriggerRemoteClientServiceProtocol, OS_dispatch_queue;

@interface CSLSUITriggerRemoteClient : NSObject <CSLSUITriggerRemoteClientServiceDelegate>
{
    NSMutableDictionary *_providersByName;
    NSMutableDictionary *_usagesByName;
    id <CSLSUITriggerRemoteClientServiceProtocol> _service;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)handleUITriggerWithName:(id)arg1 dictionary:(id)arg2 reason:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)usagesByTriggerName;
- (void)removeUITriggerRemoteProvider:(id)arg1 forUITriggerName:(id)arg2;
- (void)addUITriggerRemoteProvider:(id)arg1 forUITriggerName:(id)arg2 englishUsage:(id)arg3;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


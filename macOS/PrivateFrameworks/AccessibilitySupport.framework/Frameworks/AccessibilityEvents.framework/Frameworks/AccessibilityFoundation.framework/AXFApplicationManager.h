//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityFoundation/_AXFEventProviderDelegate-Protocol.h>
#import <AccessibilityFoundation/_AXFLaunchServicesProviderDelegate-Protocol.h>

@class AXFDispatchQueue, AXFUIElement, NSArray, NSMutableArray, NSOperationQueue, NSString, _AXFEventProvider, _AXFLaunchServicesProvider;
@protocol AXFApplicationManagerDelegate;

@interface AXFApplicationManager : NSObject <_AXFLaunchServicesProviderDelegate, _AXFEventProviderDelegate>
{
    int __updateGen;
    AXFUIElement *__focusedApplication;
    id <AXFApplicationManagerDelegate> _delegate;
    _AXFLaunchServicesProvider *__launchServicesProvider;
    CDUnknownBlockType __launchServicesProviderProvider;
    _AXFEventProvider *__eventProvider;
    CDUnknownBlockType __eventProviderProvider;
    AXFUIElement *__frontmostApplication;
    NSMutableArray *__runningApplications;
    AXFDispatchQueue *__applicationManagerQueue;
    AXFDispatchQueue *__delegateQueue;
    NSOperationQueue *__updateQueue;
}

+ (id)shared;
+ (id)sharedManager;
+ (BOOL)automaticallyNotifiesObserversOfApplicationWithMenubar;
+ (BOOL)automaticallyNotifiesObserversOfFrontmostApplication;
+ (BOOL)automaticallyNotifiesObserversOfRunningApplications;
- (void).cxx_destruct;
@property(nonatomic) int _updateGen; // @synthesize _updateGen=__updateGen;
@property(readonly, nonatomic) NSOperationQueue *_updateQueue; // @synthesize _updateQueue=__updateQueue;
@property(readonly, nonatomic) AXFDispatchQueue *_delegateQueue; // @synthesize _delegateQueue=__delegateQueue;
@property(readonly, nonatomic) AXFDispatchQueue *_applicationManagerQueue; // @synthesize _applicationManagerQueue=__applicationManagerQueue;
@property(retain, nonatomic, setter=_setRunningApplications:) NSMutableArray *_runningApplications; // @synthesize _runningApplications=__runningApplications;
@property(retain, nonatomic, setter=_setFrontmostApplication:) AXFUIElement *_frontmostApplication; // @synthesize _frontmostApplication=__frontmostApplication;
@property(copy, nonatomic, setter=_setEventProviderProvider:) CDUnknownBlockType _eventProviderProvider; // @synthesize _eventProviderProvider=__eventProviderProvider;
@property(retain, nonatomic, setter=_setEventProvider:) _AXFEventProvider *_eventProvider; // @synthesize _eventProvider=__eventProvider;
@property(copy, nonatomic, setter=_setLaunchServicesProviderProvider:) CDUnknownBlockType _launchServicesProviderProvider; // @synthesize _launchServicesProviderProvider=__launchServicesProviderProvider;
@property(retain, nonatomic, setter=_setLaunchServicesProvider:) _AXFLaunchServicesProvider *_launchServicesProvider; // @synthesize _launchServicesProvider=__launchServicesProvider;
@property __weak id <AXFApplicationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setFocusedApplication:) AXFUIElement *_focusedApplication; // @synthesize _focusedApplication=__focusedApplication;
- (void)_assertNotApplicationManagerQueue;
- (void)_assertApplicationManagerQueue;
- (id)_applicationWithProcessIdentifier:(int)arg1 applicationIdentifier:(id)arg2;
- (id)applicationWithProcessIdentifier:(int)arg1 applicationIdentifier:(id)arg2;
- (id)_applicationWithProcessSerialNumber:(struct ProcessSerialNumber)arg1 applicationIdentifier:(id)arg2;
- (id)applicationWithProcessSerialNumber:(struct ProcessSerialNumber)arg1 applicationIdentifier:(id)arg2;
@property(readonly) AXFUIElement *applicationWithMenubar;
- (void)_notifyRunningApplicationsDidChangeHandler;
@property(readonly, copy) NSArray *runningApplications;
- (void)_registerCurrentlyRunningApplications;
- (void)_notifyFocusedApplicationDidChangeHandler;
@property(readonly) AXFUIElement *focusedApplication;
- (void)_notifyFrontmostApplicationDidChangeHandler;
- (void)_setFrontmostApplication:(id)arg1 preflight:(BOOL)arg2;
@property(readonly) AXFUIElement *frontmostApplication;
- (void)_updateFrontmostAndFocusedApplications;
- (void)_stopObservingApplications;
- (void)stopObservingApplications;
- (void)_startObservingApplications;
- (id)_newEventProvider;
- (id)_newLaunchServicesProvider;
- (void)startObservingApplications;
- (void)_appendApplication:(id)arg1;
- (void)_removeApplicationWithPSN:(struct ProcessSerialNumber)arg1;
- (void)_createApplicationWithPSNIfNeeded:(struct ProcessSerialNumber)arg1;
- (id)_knownApplicationWithElement:(id)arg1;
- (id)_knownApplicationWithPSN:(struct ProcessSerialNumber)arg1;
- (void)_performBlockOnApplicationManagerQueueAndWait:(CDUnknownBlockType)arg1;
- (void)_performBlockOnApplicationManagerQueue:(CDUnknownBlockType)arg1;
- (void)eventProviderNewFront:(id)arg1;
- (void)eventProviderKeyFocusChanged:(id)arg1;
- (void)launchServicesProvider:(id)arg1 applicationWithProcessSerialNumberBecameFrontMost:(struct ProcessSerialNumber)arg2;
- (void)launchServicesProvider:(id)arg1 applicationWithProcessSerialNumberDied:(struct ProcessSerialNumber)arg2;
- (void)launchServicesProvider:(id)arg1 applicationWithProcessSerialNumberReady:(struct ProcessSerialNumber)arg2;
- (id)initWithLaunchServicesProvider:(CDUnknownBlockType)arg1 eventProvider:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


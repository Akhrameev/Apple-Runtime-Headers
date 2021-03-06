//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICActionSheetController.h>

#import <NanoMediaUI/NACRoutingControllerDelegate-Protocol.h>
#import <NanoMediaUI/NACVolumeControllerDelegate-Protocol.h>
#import <NanoMediaUI/NMCConnectivityObserver-Protocol.h>
#import <NanoMediaUI/PUICActionSheetControllerDelegate-Protocol.h>
#import <NanoMediaUI/PUICTableViewDelegate-Protocol.h>
#import <NanoMediaUI/UITableViewDataSource-Protocol.h>

@class NACAudioRoute, NMCAudioRoutingManager, NMCVirtualAudioRoute, NMROrigin, NMUAirPlayActionCell, NSObject, NSString, PUICActionSheetGroup;
@protocol NACRoutingController, NACVolumeController, OS_dispatch_source, PUICActionSheetControllerDelegate;

@interface NMUAirPlayActionController : PUICActionSheetController <NACRoutingControllerDelegate, PUICActionSheetControllerDelegate, PUICTableViewDelegate, UITableViewDataSource, NMCConnectivityObserver, NACVolumeControllerDelegate>
{
    unsigned int _mode;
    id <NACRoutingController> _companionRoutingController;
    _Bool _shouldObserveRoutes;
    NMCAudioRoutingManager *_audioRoutingManager;
    id <NACVolumeController> _volumeController;
    _Bool _shouldObserveListeningModes;
    _Bool _hasReceivedAvailableListeningModes;
    NMCVirtualAudioRoute *_currentlySelectingLocalRoute;
    NACAudioRoute *_currentlySelectingCompanionRoute;
    id <PUICActionSheetControllerDelegate> _externalDelegate;
    NSObject<OS_dispatch_source> *_pickRouteTimer;
    NSObject<OS_dispatch_source> *_findRoutesTimer;
    _Bool _didAutomaticallyAttemptLocalRoute;
    int _loadingIndicatorState;
    NMUAirPlayActionCell *_sampleAirPlayActionCell;
    PUICActionSheetGroup *_listeningModesGroup;
    PUICActionSheetGroup *_routesGroup;
    PUICActionSheetGroup *_connectDeviceGroup;
    NMROrigin *_origin;
}

+ (id)controllerWithAudioRoutingManager:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NMROrigin *origin; // @synthesize origin=_origin;
- (void)_stopObservingNotifications;
- (void)_systemAudioRouteFailedToConnectNotification:(id)arg1;
- (void)_bluetoothDeviceFailedToConnectNotification:(id)arg1;
- (void)_virtualAudioRoutesDidChangeNotification:(id)arg1;
- (int)_nacRouteFromNMCRoute:(int)arg1;
- (id)_sortedAudioRoutes;
- (void)_pickLoneAvailableLocalRouteIfDesired;
- (void)_cancelPickRouteTimeout;
- (void)_beginPickRouteTimeout;
- (id)_volumeController;
- (void)_openSettings;
- (id)_connectDeviceGroup;
- (float)_defaultStatusBarHeight;
- (id)_headerViewWithLoadingIndicator;
- (id)_fullScreenHeaderViewWithText:(id)arg1 andImage:(id)arg2;
- (id)_chooseWhereToPlayHeaderView;
- (void)_updateHeaderForNoConnectivity;
- (void)_updateHeaderForNoLocalRoutes;
- (void)_updateHeaderForNoCompanionRoutes;
- (void)_showConnectionFailedMessage;
- (void)_connectionFailed;
- (void)_updateCurrentListeningMode;
- (void)_updateListeningModesGroupIfNeeded;
- (id)_availableListeningModeActionItems;
- (void)_finishPickingRouteForItem:(id)arg1 alreadyPicked:(_Bool)arg2;
- (id)_sampleAirPlayActionCell;
- (void)_cancelFindRoutesTimer;
- (void)_updateGroupsWithRouteActionItems:(id)arg1 timeoutDuration:(double)arg2 timeoutCompletion:(CDUnknownBlockType)arg3;
- (void)_updateGroupsForCompanionOrigin;
- (void)_updateGroupsForLocalOrigin;
- (void)_companionAudioRouteItemSelected:(id)arg1;
- (void)_localAudioRouteItemSelected:(id)arg1;
- (void)_updateSelectingIndicatorForActionItem:(id)arg1 inGroup:(id)arg2;
- (void)_updateGroupsForCurrentOrigin;
- (void)_updateForCurrentOrigin;
- (void)volumeController:(id)arg1 didFailToSetCurrentListeningModeWithError:(id)arg2;
- (void)volumeControllerDidUpdateCurrentListeningMode:(id)arg1;
- (void)volumeControllerDidUpdateAvailableListeningModes:(id)arg1;
- (void)manager:(id)arg1 connectivityDidChange:(_Bool)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)routingControllerFailedToPickRoute:(id)arg1;
- (void)routingControllerDidUpdateAvailableRoutes:(id)arg1;
- (void)actionContentControllerCancel:(id)arg1;
- (void)actionSheetController:(id)arg1 didDismissWithActionAtIndexPath:(id)arg2;
- (void)actionSheetController:(id)arg1 willDismissWithActionAtIndexPath:(id)arg2;
- (void)actionSheetController:(id)arg1 willTapActionAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)dismiss;
- (void)setDelegate:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMode:(unsigned int)arg1 origin:(id)arg2 audioRoutingManager:(id)arg3;
- (id)initWithOrigin:(id)arg1 audioRoutingManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


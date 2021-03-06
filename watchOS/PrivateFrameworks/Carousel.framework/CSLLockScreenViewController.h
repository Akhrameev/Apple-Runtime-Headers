//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarouselUIServices/CUISAlertViewController.h>

#import <Carousel/CSLLockStateObserver-Protocol.h>
#import <Carousel/CSLPIButtonHandlerProtocol-Protocol.h>
#import <Carousel/CSLUILockScreenStateTransitionDelegate-Protocol.h>
#import <Carousel/CSLWaterLockObserver-Protocol.h>
#import <Carousel/CUISAlertAnimatedTransitioning-Protocol.h>

@class CSLClockAssertion, CSLWaterLock, NSArray, NSObject, NSString, NSTimer, UIImageView, UIView, UIViewController;
@protocol BSInvalidatable, CSLClockHosting, CSLLockScreenViewControllerDelegate, CSLUILockScreenState;

@interface CSLLockScreenViewController : CUISAlertViewController <CSLPIButtonHandlerProtocol, CUISAlertAnimatedTransitioning, CSLWaterLockObserver, CSLUILockScreenStateTransitionDelegate, CSLLockStateObserver>
{
    UIView *_contentView;
    UIImageView *_blurView;
    UIView<CSLClockHosting> *_clockView;
    UIViewController *_activeViewController;
    NSTimer *_longLookTimer;
    CSLClockAssertion *_parentContainerAssertion;
    CSLClockAssertion *_activeAssertion;
    CSLClockAssertion *_appearanceStateAssertion;
    id <BSInvalidatable> _screenWakeProviderAssertion;
    _Bool _justUnlocked;
    _Bool _active;
    id <CSLLockScreenViewControllerDelegate> _delegate;
    NSObject<CSLUILockScreenState> *_currentState;
    NSArray *_states;
    CSLWaterLock *_waterLock;
}

+ (_Bool)shouldAppear;
- (void).cxx_destruct;
@property(retain, nonatomic) CSLWaterLock *waterLock; // @synthesize waterLock=_waterLock;
@property(retain, nonatomic) NSArray *states; // @synthesize states=_states;
@property(retain, nonatomic) NSObject<CSLUILockScreenState> *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool justUnlocked; // @synthesize justUnlocked=_justUnlocked;
@property(nonatomic) __weak id <CSLLockScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCurrentStateIfNecessary;
- (void)animateAlertTransition:(id)arg1;
- (double)alertTransitionDuration:(id)arg1;
- (id)animationControllerForDismissal;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (void)lockScreenStateDidComplete:(id)arg1;
- (void)waterLockDidChange:(id)arg1;
- (void)blockedStateDidChange:(_Bool)arg1;
@property(readonly, nonatomic, getter=isShowingPasscodeComplianceAlert) _Bool showingPasscodeComplianceAlert;
- (void)_clearLongLookTimer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_setActive:(_Bool)arg1;
- (void)_notifyActiveViewControllerDidChangeAppearance:(_Bool)arg1;
- (void)_notifyActiveViewControllerWillChangeAppearance:(_Bool)arg1;
- (void)_returnClockFaceToHomeScreen;
- (void)_takeClockFaceFromHomeScreen;
- (void)_updateContentsForCurrentState;
- (void)_updateCurrentState;
- (_Bool)occludesBackgroundDuringPresentation;
- (_Bool)optsOutOfOverlayOverride;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)longLookTimerFired;
- (void)deactivate;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateStateAndContentsIfNecessary;
- (void)_updateBlurImage;
- (void)loadView;
- (void)_startLongLookTimer;
- (void)_noteBatteryStateChanged;
- (void)_noteBacklightDidTurnOff:(id)arg1;
- (void)_noteBacklightDidTurnOn:(id)arg1;
@property(readonly, nonatomic, getter=isClockVisible) _Bool clockVisible;
- (_Bool)allowsCrownButtonDismissal;
- (_Bool)allowAutoDismissAfterBacklightOff;
- (void)dealloc;
- (id)initWithWaterLock:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


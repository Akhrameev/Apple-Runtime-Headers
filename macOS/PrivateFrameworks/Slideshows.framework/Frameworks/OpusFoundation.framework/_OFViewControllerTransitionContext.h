//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusFoundation/OFViewControllerTransitioningContext-Protocol.h>

@class NSString, OFNSView, OFNSViewController;
@protocol OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning;

@interface _OFViewControllerTransitionContext : NSObject <OFViewControllerTransitioningContext>
{
    OFNSViewController *_fromViewController;
    OFNSViewController *_toViewController;
    OFNSView *_containerView;
    double _progress;
    double _progressSpeed;
    double _lastUpdateTimestamp;
    long long _state;
    struct {
        unsigned int interactorImplementsCompletionSpeed:1;
        unsigned int interactorImplementsCompletionCurve:1;
        unsigned int isCurrentlyInteractive;
        unsigned int transitionWasCancelled:1;
        unsigned int transitionIsCompleting:1;
    } _flags;
    id <OFViewControllerAnimatedTransitioning> _animator;
    id <OFViewControllerInteractiveTransitioning> _interactor;
    CDUnknownBlockType _interactiveUpdateHandler;
    CDUnknownBlockType _willCompleteHandler;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType willCompleteHandler; // @synthesize willCompleteHandler=_willCompleteHandler;
@property(copy, nonatomic) CDUnknownBlockType interactiveUpdateHandler; // @synthesize interactiveUpdateHandler=_interactiveUpdateHandler;
@property(readonly) id <OFViewControllerInteractiveTransitioning> interactor; // @synthesize interactor=_interactor;
@property(readonly) id <OFViewControllerAnimatedTransitioning> animator; // @synthesize animator=_animator;
@property(nonatomic) BOOL isInFlight;
- (BOOL)wasCancelled;
- (void)setIsCompleting:(BOOL)arg1;
- (BOOL)isCompleting;
- (void)completeTransition:(BOOL)arg1;
- (void)updateNonInteractiveTransitionWithProgress:(double)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (double)progressSpeed;
- (double)progress;
- (id)toViewController;
- (id)fromViewController;
- (id)containerView;
- (BOOL)isInteractive;
- (BOOL)initiallyInteractive;
- (void)dealloc;
- (id)initWithContainerView:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animator:(id)arg4 interactor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class CKActionMenuGestureVelocitySample;

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer
{
    CKActionMenuGestureVelocitySample *_velocitySample;
    CKActionMenuGestureVelocitySample *_previousVelocitySample;
    double _lastTouchTime;
    struct CGPoint _lastScreenLocation;
}

+ (id)actionMenuGestureRecognizer;
- (void).cxx_destruct;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;
- (struct CGPoint)velocityInView:(id)arg1;
- (void)setAllowableMovement:(double)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end


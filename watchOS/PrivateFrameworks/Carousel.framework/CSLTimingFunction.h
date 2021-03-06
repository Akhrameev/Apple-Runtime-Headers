//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, CASpringAnimation;

@interface CSLTimingFunction : NSObject
{
    CASpringAnimation *_spring;
    CAMediaTimingFunction *_mediaTimingFn;
}

- (void).cxx_destruct;
- (float)valueForPercentComplete:(float)arg1;
- (id)init;
- (id)initWithLinearFunction;
- (id)initWithMediaTimingFunction:(id)arg1;
- (id)initWithSpringStiffness:(float)arg1 damping:(float)arg2 mass:(float)arg3 epsilon:(float)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKMapViewLabelMarkerState : NSObject
{
    BOOL _visible;
    unsigned char _balloonBehavior;
}

+ (id)stateForLabelMarker:(id)arg1;
@property(nonatomic) unsigned char balloonBehavior; // @synthesize balloonBehavior=_balloonBehavior;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

@end


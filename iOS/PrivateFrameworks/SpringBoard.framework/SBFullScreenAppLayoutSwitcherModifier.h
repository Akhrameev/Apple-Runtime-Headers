//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBCoplanarSwitcherModifier, _SBFullScreenAppFloorSwitcherModifier;

@interface SBFullScreenAppLayoutSwitcherModifier : SBSwitcherModifier
{
    SBCoplanarSwitcherModifier *_coplanarModifier;
    _SBFullScreenAppFloorSwitcherModifier *_floorModifier;
}

- (void).cxx_destruct;
- (id)initWithActiveAppLayout:(id)arg1;

@end


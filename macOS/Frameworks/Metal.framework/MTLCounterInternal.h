//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLCounter-Protocol.h>

@class NSString;

@interface MTLCounterInternal : NSObject <MTLCounter>
{
    NSString *_name;
    NSString *_description;
}

@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(id)arg1 description:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


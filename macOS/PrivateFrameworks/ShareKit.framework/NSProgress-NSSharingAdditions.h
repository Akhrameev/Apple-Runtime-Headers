//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSImage, NSString;

@interface NSProgress (NSSharingAdditions)
+ (id)keyPathsForValuesAffectingHasSomethingToReveal;
+ (id)keyPathsForValuesAffectingHasSomethingToCancel;
+ (id)keyPathsForValuesAffectingIsInProgress;
@property double progressValue;
@property(copy) CDUnknownBlockType revealBlock;
@property(retain) NSString *subtitle;
@property(retain) NSString *title;
@property(retain) NSImage *icon;
- (BOOL)hasSomethingToReveal;
- (BOOL)hasSomethingToCancel;
- (BOOL)isInProgress;
@end


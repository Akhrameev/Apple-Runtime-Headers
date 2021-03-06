//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>

@class NSArray, NSString;

@interface CRTuple : NSObject <CRDataType, CRCoding>
{
    NSArray *_contents;
}

+ (id)tupleWithArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long count;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


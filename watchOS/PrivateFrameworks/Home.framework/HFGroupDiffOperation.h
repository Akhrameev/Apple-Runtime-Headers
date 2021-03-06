//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFDiffOperation-Protocol.h>

@class NSNumber, NSString;
@protocol HFDiffableItemGroup;

@interface HFGroupDiffOperation : NSObject <HFDiffOperation>
{
    unsigned int _type;
    id <HFDiffableItemGroup> _group;
    NSNumber *_fromIndex;
    NSNumber *_toIndex;
}

+ (id)moveOperationWithGroup:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
+ (id)deleteOperationWithGroup:(id)arg1 atIndex:(unsigned int)arg2;
+ (id)insertOperationWithGroup:(id)arg1 atIndex:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, copy, nonatomic) NSNumber *fromIndex; // @synthesize fromIndex=_fromIndex;
@property(readonly, nonatomic) id <HFDiffableItemGroup> group; // @synthesize group=_group;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (id)_operationDescriptionWithVerboseType:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *operationDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOperationType:(unsigned int)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


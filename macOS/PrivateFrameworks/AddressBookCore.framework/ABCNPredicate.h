//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSPredicate.h>

#import <AddressBookCore/NSCopying-Protocol.h>

@interface ABCNPredicate : NSPredicate <NSCopying>
{
    NSPredicate *_abcn_predicate;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cn_predicate;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)evaluateWithObject:(id)arg1;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1;
- (id)init;
- (id)cn_coreDataPredicate;

@end


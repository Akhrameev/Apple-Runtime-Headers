//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCUserVectorManager-Protocol.h>

@class FCAsyncSerialQueue, FCUserVector, NSDate;
@protocol FCContentContext;

@interface FCUserVectorManager : NSObject <FCUserVectorManager>
{
    FCAsyncSerialQueue *_queue;
    FCUserVector *_userVector;
    id <FCContentContext> _contentContext;
    NSDate *_lastUpdated;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) FCUserVector *userVector; // @synthesize userVector=_userVector;
@property(retain, nonatomic) FCAsyncSerialQueue *queue; // @synthesize queue=_queue;
- (void)fetchUserVectorProvider:(CDUnknownBlockType)arg1;
- (id)initWithContentContext:(id)arg1;

@end


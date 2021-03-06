//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSAuditToken, VSDevice, VSOptional;

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation
{
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSOperationQueue *_subqueue;
    VSDevice *_currentDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) NSOperationQueue *subqueue; // @synthesize subqueue=_subqueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void)executionDidBegin;
- (id)init;

@end


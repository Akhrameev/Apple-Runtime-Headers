//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSEmailAddressType, NSDateComponents, NSString;

@interface EWSAttendeeType : NSObject <XSDefinitionProvider>
{
    EWSEmailAddressType *_Mailbox;
    long long _ResponseType;
    NSDateComponents *_LastResponseTime;
    NSDateComponents *_ProposedStart;
    NSDateComponents *_ProposedEnd;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateComponents *ProposedEnd; // @synthesize ProposedEnd=_ProposedEnd;
@property(retain, nonatomic) NSDateComponents *ProposedStart; // @synthesize ProposedStart=_ProposedStart;
@property(retain, nonatomic) NSDateComponents *LastResponseTime; // @synthesize LastResponseTime=_LastResponseTime;
@property(nonatomic) long long ResponseType; // @synthesize ResponseType=_ResponseType;
@property(retain, nonatomic) EWSEmailAddressType *Mailbox; // @synthesize Mailbox=_Mailbox;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


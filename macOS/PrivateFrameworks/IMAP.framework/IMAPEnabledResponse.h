//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSString;

@interface IMAPEnabledResponse : IMAPResponse
{
    NSString *_capability;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *capability; // @synthesize capability=_capability;
- (id)description;

@end


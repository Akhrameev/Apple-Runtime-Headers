//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGXPCResponse.h>

@protocol NSSecureCoding;

@interface SGXPCResponse1 : SGXPCResponse
{
    id <NSSecureCoding> _response1;
}

+ (id)responseWithError:(id)arg1;
+ (id)responseWith:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSSecureCoding> response1; // @synthesize response1=_response1;
- (void)setResponse1:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


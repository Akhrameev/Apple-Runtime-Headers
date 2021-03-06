//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrustedPeers/NSSecureCoding-Protocol.h>

@class NSString;

@interface TPPolicyVersion : NSObject <NSSecureCoding>
{
    NSString *_policyHash;
    unsigned long long _versionNumber;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, retain) NSString *policyHash; // @synthesize policyHash=_policyHash;
@property(readonly) unsigned long long versionNumber; // @synthesize versionNumber=_versionNumber;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithVersion:(unsigned long long)arg1 hash:(id)arg2;

@end


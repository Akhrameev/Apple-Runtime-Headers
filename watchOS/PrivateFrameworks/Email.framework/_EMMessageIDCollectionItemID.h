//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMMessageCollectionItemID.h>

#import <Email/EFCacheable-Protocol.h>

@class ECAngleBracketIDHash, NSString;

@interface _EMMessageIDCollectionItemID : EMMessageCollectionItemID <EFCacheable>
{
    // Error parsing type: Aq, name: _messageIDHeaderHashValue
    ECAngleBracketIDHash *_messageIDHeaderHash;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash; // @synthesize messageIDHeaderHash=_messageIDHeaderHash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMessageIDHeaderHash:(id)arg1;
- (id)cachedSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAClientSetupInfo : SABaseClientBoundCommand
{
}

+ (id)clientSetupInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientSetupInfo;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(nonatomic) double threshold;
@property(nonatomic) BOOL delay;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMUser-Protocol.h>

@class NSString;
@protocol CRKASMNameComponents, CRKASMOrganization, CRKClassKitPerson;

@interface CRKASMConcreteUser : NSObject <CRKASMUser>
{
    NSString *_identifier;
    NSString *_appleID;
    id <CRKASMOrganization> _organization;
    id <CRKASMNameComponents> _nameComponents;
    id <CRKClassKitPerson> _backingPerson;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKClassKitPerson> backingPerson; // @synthesize backingPerson=_backingPerson;
@property(readonly, nonatomic) id <CRKASMNameComponents> nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, nonatomic) id <CRKASMOrganization> organization; // @synthesize organization=_organization;
@property(readonly, copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToConcreteUser:(id)arg1;
- (id)initWithBackingPerson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


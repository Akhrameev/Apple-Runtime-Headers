//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKAttendee.h>

@interface EKAttendee (CalClassAdditions)
+ (id)attendeeForString:(id)arg1;
+ (id)attendeeFromDictionary:(id)arg1;
+ (id)calUI_attendeeFromCNAutoCompleteResult:(id)arg1;
+ (id)calUI_attendeeWithAddress:(id)arg1 name:(id)arg2;
+ (void)_checkAndSetAddressWithAttendee:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (id)_attendeeFromURI:(id)arg1 email:(id)arg2 phone:(id)arg3 name:(id)arg4;
+ (id)attendeeFromAttendeeRep:(id)arg1;
+ (id)_attendeeWithName:(id)arg1 email:(id)arg2 phoneNumber:(id)arg3 calURI:(id)arg4;
+ (id)_attendeeFromContact:(id)arg1 matchedFromValue:(id)arg2 withMatchType:(long long)arg3;
+ (id)attendeeFromContact:(id)arg1;
- (id)dictionaryRepresentation;
- (id)calUI_recentEvent;
@end


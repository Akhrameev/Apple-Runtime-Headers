//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject
{
    _Bool _supportsInApp;
    NSString *_cardType;
    NSNumber *_cardTypeCode;
    NSString *_currentStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool supportsInApp; // @synthesize supportsInApp=_supportsInApp;
@property(copy, nonatomic) NSString *currentStatus; // @synthesize currentStatus=_currentStatus;
@property(copy, nonatomic) NSNumber *cardTypeCode; // @synthesize cardTypeCode=_cardTypeCode;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (id)initWithDictionary:(id)arg1;

@end


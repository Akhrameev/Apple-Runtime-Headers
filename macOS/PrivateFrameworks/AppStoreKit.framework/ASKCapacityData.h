//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ASKCapacityData : NSObject
{
    NSNumber *_totalSystemCapacity;
    NSNumber *_totalSystemAvailable;
    NSNumber *_totalDataCapacity;
    NSNumber *_totalDataAvailable;
    NSNumber *_totalDiskCapacity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *totalDiskCapacity; // @synthesize totalDiskCapacity=_totalDiskCapacity;
@property(retain, nonatomic) NSNumber *totalDataAvailable; // @synthesize totalDataAvailable=_totalDataAvailable;
@property(retain, nonatomic) NSNumber *totalDataCapacity; // @synthesize totalDataCapacity=_totalDataCapacity;
@property(retain, nonatomic) NSNumber *totalSystemAvailable; // @synthesize totalSystemAvailable=_totalSystemAvailable;
@property(retain, nonatomic) NSNumber *totalSystemCapacity; // @synthesize totalSystemCapacity=_totalSystemCapacity;
- (id)init;

@end


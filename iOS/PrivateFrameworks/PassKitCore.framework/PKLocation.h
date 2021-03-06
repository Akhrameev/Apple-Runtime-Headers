//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface PKLocation : NSObject <NSSecureCoding>
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_maxDistance;
    NSNumber *_altitude;
    NSString *_name;
    NSString *_relevantText;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *relevantText; // @synthesize relevantText=_relevantText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CLLocation;
- (unsigned long long)hash;
- (_Bool)hasEqualCoordinatesToLocation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)hasAltitude;
- (double)altitude;
- (double)maxDistance;
- (double)longitude;
- (double)latitude;
- (void)setAltitude:(id)arg1;
- (void)setMaxDistance:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)setLongitude:(id)arg1;
- (void)setLatitude:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


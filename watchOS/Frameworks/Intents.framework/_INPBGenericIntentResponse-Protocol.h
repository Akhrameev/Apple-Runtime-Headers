//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBProperty;

@protocol _INPBGenericIntentResponse <NSObject>
+ (Class)propertiesType;
@property(readonly, nonatomic) unsigned int propertiesCount;
@property(copy, nonatomic) NSArray *properties;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *metadata;
- (_INPBProperty *)propertiesAtIndex:(unsigned int)arg1;
- (void)addProperties:(_INPBProperty *)arg1;
- (void)clearProperties;
@end


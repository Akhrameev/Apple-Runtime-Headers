//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSPropertyMetadata : NSObject
{
    BOOL _type;
    NSString *_typeString;
    Class _classType;
    NSString *_getterName;
    NSString *_setterName;
    NSString *_name;
    NSString *_defaultKey;
    id _defaultValue;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *defaultKey; // @synthesize defaultKey=_defaultKey;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *setterName; // @synthesize setterName=_setterName;
@property(copy, nonatomic) NSString *getterName; // @synthesize getterName=_getterName;
@property(retain, nonatomic) Class classType; // @synthesize classType=_classType;
@property(copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(nonatomic) BOOL type; // @synthesize type=_type;
- (id)description;
@property(readonly, nonatomic) BOOL removeIfCollectionSetEmpty;
@property(readonly, nonatomic) BOOL removeIfSettingDefaultValue;
@property(readonly, nonatomic) BOOL synchronizeOnSet;
@property(readonly, nonatomic, getter=isNumber) BOOL number;

@end


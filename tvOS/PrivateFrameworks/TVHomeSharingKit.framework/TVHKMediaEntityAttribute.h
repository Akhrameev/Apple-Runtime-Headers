//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/NSCopying-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityAttribute : NSObject <NSCopying>
{
    _Bool _allowsDefaultValue;
    _Bool _supportsDMAPQueryTerm;
    unsigned int _DMAPQueryMinimumSharingVersion;
    NSString *_name;
    NSString *_sortAsName;
    unsigned long long _attributeType;
    NSString *_attributeValueClassName;
    id _defaultValue;
    NSSet *_DMAPCodeNames;
    CDUnknownBlockType _DMAPCodeNamesBlock;
    NSString *_DMAPSortArgumentValue;
    NSString *_DMAPQueryTermCodeName;
    unsigned long long _DMAPQueryTermValueType;
    NSString *_DMAPQueryTermValueClassName;
    CDUnknownBlockType _DMAPQueryTermValueBlock;
    CDUnknownBlockType _DMAPQueryTermBlock;
}

+ (id)_classNameFromAttributeType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType DMAPQueryTermBlock; // @synthesize DMAPQueryTermBlock=_DMAPQueryTermBlock;
@property(copy, nonatomic) CDUnknownBlockType DMAPQueryTermValueBlock; // @synthesize DMAPQueryTermValueBlock=_DMAPQueryTermValueBlock;
@property(copy, nonatomic) NSString *DMAPQueryTermValueClassName; // @synthesize DMAPQueryTermValueClassName=_DMAPQueryTermValueClassName;
@property(nonatomic) unsigned long long DMAPQueryTermValueType; // @synthesize DMAPQueryTermValueType=_DMAPQueryTermValueType;
@property(copy, nonatomic) NSString *DMAPQueryTermCodeName; // @synthesize DMAPQueryTermCodeName=_DMAPQueryTermCodeName;
@property(nonatomic) unsigned int DMAPQueryMinimumSharingVersion; // @synthesize DMAPQueryMinimumSharingVersion=_DMAPQueryMinimumSharingVersion;
@property(nonatomic) _Bool supportsDMAPQueryTerm; // @synthesize supportsDMAPQueryTerm=_supportsDMAPQueryTerm;
@property(copy, nonatomic) NSString *DMAPSortArgumentValue; // @synthesize DMAPSortArgumentValue=_DMAPSortArgumentValue;
@property(copy, nonatomic) CDUnknownBlockType DMAPCodeNamesBlock; // @synthesize DMAPCodeNamesBlock=_DMAPCodeNamesBlock;
@property(copy, nonatomic) NSSet *DMAPCodeNames; // @synthesize DMAPCodeNames=_DMAPCodeNames;
@property(nonatomic) _Bool allowsDefaultValue; // @synthesize allowsDefaultValue=_allowsDefaultValue;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *attributeValueClassName; // @synthesize attributeValueClassName=_attributeValueClassName;
@property(nonatomic) unsigned long long attributeType; // @synthesize attributeType=_attributeType;
@property(copy, nonatomic) NSString *sortAsName; // @synthesize sortAsName=_sortAsName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


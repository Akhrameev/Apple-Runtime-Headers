//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AVTStickerPresetOverride : NSObject
{
    long long _category;
    NSString *_presetIdentifier;
    NSArray *_unlessIdentifiers;
}

+ (id)presetOverrideFromDictionary:(id)arg1 forCategoryName:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *unlessIdentifiers; // @synthesize unlessIdentifiers=_unlessIdentifiers;
@property(readonly, copy, nonatomic) NSString *presetIdentifier; // @synthesize presetIdentifier=_presetIdentifier;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (id)overridenPresetForAvatar:(id)arg1;
- (void)applyToAvatar:(id)arg1;
- (id)initWithCategory:(long long)arg1 presetIdentifier:(id)arg2 unless:(id)arg3;

@end


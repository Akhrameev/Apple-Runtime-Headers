//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureSet.h>

@interface REMutableFeatureSet : REFeatureSet
{
}

- (void)removeFeature:(id)arg1;
- (void)addFeature:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (id)init;
- (void)removeAllFeatures;
- (void)unionFeatureSet:(id)arg1;
- (void)minusFeatureSet:(id)arg1;
- (void)intersetFeatureSet:(id)arg1;

@end


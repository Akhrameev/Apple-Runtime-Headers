//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

@interface CRTextRecognizerModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_img_input;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *img_input; // @synthesize img_input=_img_input;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithImg_input:(id)arg1;

@end


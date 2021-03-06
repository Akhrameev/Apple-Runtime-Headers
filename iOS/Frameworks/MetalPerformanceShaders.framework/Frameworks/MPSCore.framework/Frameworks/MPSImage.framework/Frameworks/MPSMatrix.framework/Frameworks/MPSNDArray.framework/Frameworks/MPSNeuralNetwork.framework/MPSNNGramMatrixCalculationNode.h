//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNGramMatrixCallback;

@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode
{
    float _alpha;
    id <MPSNNGramMatrixCallback> _propertyCallBack;
}

+ (id)nodeWithSource:(id)arg1 alpha:(float)arg2;
+ (id)nodeWithSource:(id)arg1;
@property(retain, nonatomic) id <MPSNNGramMatrixCallback> propertyCallBack; // @synthesize propertyCallBack=_propertyCallBack;
@property(readonly, nonatomic) float alpha; // @synthesize alpha=_alpha;
- (void)dealloc;
- (Class)gradientClass;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1;
- (id)initWithSource:(id)arg1 alpha:(float)arg2;

@end


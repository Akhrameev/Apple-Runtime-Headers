//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface ICSearchTextCheckingResult : NSTextCheckingResult
{
    NSString *_csEvaluatorMatchString;
    struct _NSRange _ic_range;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange ic_range; // @synthesize ic_range=_ic_range;
@property(retain, nonatomic) NSString *csEvaluatorMatchString; // @synthesize csEvaluatorMatchString=_csEvaluatorMatchString;
- (struct _NSRange)range;
- (id)initWithRange:(struct _NSRange)arg1 csEvaluatorMatchString:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1;

@end


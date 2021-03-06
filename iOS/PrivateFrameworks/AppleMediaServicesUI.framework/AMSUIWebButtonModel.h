//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUIWebModel.h>

@class NSDictionary, NSString;
@protocol AMSUIWebActionRunnable;

__attribute__((visibility("hidden")))
@interface AMSUIWebButtonModel : AMSUIWebModel
{
    _Bool _bold;
    _Bool _enabled;
    id <AMSUIWebActionRunnable> _action;
    NSString *_title;
    NSDictionary *_underlyingJSObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *underlyingJSObject; // @synthesize underlyingJSObject=_underlyingJSObject;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(retain, nonatomic) id <AMSUIWebActionRunnable> action; // @synthesize action=_action;
- (id)createDialogAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface ToolbarDownloadsButtonProgressBar : NSView
{
    BOOL _indeterminate;
    float _progress;
}

@property(nonatomic, getter=isIndeterminate) BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end


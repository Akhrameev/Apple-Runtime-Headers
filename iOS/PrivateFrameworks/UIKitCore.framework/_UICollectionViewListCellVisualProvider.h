//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, _UICollectionViewListCell;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListCellVisualProvider : NSObject
{
    _UICollectionViewListCell *_cell;
}

- (void)configureFocusedFloatingContentView:(id)arg1;
@property(readonly, nonatomic) UIView *accessoryManagerContainerView;
@property(readonly, nonatomic) _Bool canFocusProgrammatically;
@property(readonly, nonatomic) long long defaultFocusStyle;
- (id)initWithListCell:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPhotosUI/NSObject-Protocol.h>

@class NPTO1UpGridCell;
@protocol NPTOPhoto1UpModel;

@protocol NPTO1UpGridCellDelegate <NSObject>
- (_Bool)gridCellIsInitialModeFit:(NPTO1UpGridCell *)arg1;
- (_Bool)gridCellShouldSuppressIrisBadge:(NPTO1UpGridCell *)arg1;
- (void)gridCell:(NPTO1UpGridCell *)arg1 didLoadFully:(_Bool)arg2;
- (id <NPTOPhoto1UpModel>)gridCell:(NPTO1UpGridCell *)arg1 photoModelAtIndex:(unsigned int)arg2;

@optional
- (void)gridCellZoomScaleDidChange:(NPTO1UpGridCell *)arg1;
- (void)gridCellDidEndScrolling:(NPTO1UpGridCell *)arg1;
- (void)gridCellDidBeginScrolling:(NPTO1UpGridCell *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NUIContainerView;

@interface NUITableViewContainerCell : UITableViewCell
{
    NUIContainerView *_containerView;
}

+ (Class)containerViewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NUIContainerView *containerView; // @synthesize containerView=_containerView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


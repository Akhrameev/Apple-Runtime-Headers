//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXInboxAggregateDataSourceManager;

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver>
{
    PXInboxAggregateDataSourceManager *_dataSourceManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateLastSeenDateOfCurrentGadgets;
- (void)_updateDataSourceRangesOfCurrentGadgets;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateGadgets;
- (void)loadDataForGadgets;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


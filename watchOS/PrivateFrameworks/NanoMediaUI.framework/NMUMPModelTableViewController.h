//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMediaUI/NMUModelTableViewController.h>

#import <NanoMediaUI/NMUArtworkLoaderDataSource-Protocol.h>
#import <NanoMediaUI/NMUMPModelRequestContentLoaderDataSource-Protocol.h>
#import <NanoMediaUI/NMUMPModelRequestContentLoaderDelegate-Protocol.h>
#import <NanoMediaUI/NMUModelCollectionDataSource-Protocol.h>
#import <NanoMediaUI/NMUModelCollectionDelegate-Protocol.h>
#import <NanoMediaUI/NMUSnapshotCapableInterface-Protocol.h>
#import <NanoMediaUI/UITableViewDataSourcePrefetching-Protocol.h>

@class NMUArtworkLoader, NMUMPModelRequestContentLoader, NSString, PUICContentUnavailableView, UIView;

@interface NMUMPModelTableViewController : NMUModelTableViewController <UITableViewDataSourcePrefetching, NMUModelCollectionDataSource, NMUModelCollectionDelegate, NMUMPModelRequestContentLoaderDataSource, NMUMPModelRequestContentLoaderDelegate, NMUArtworkLoaderDataSource, NMUSnapshotCapableInterface>
{
    UIView *_activityIndicatorView;
    _Bool _automaticContentUpdatingEnabled;
    PUICContentUnavailableView *_contentUnavailableView;
    NMUMPModelRequestContentLoader *_contentLoader;
    NMUArtworkLoader *_artworkLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NMUArtworkLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
@property(retain, nonatomic) NMUMPModelRequestContentLoader *contentLoader; // @synthesize contentLoader=_contentLoader;
- (void)_updateContentUnavailableViewVisibility;
- (void)_hideContentUnavailableView;
- (void)_showContentUnavailableView;
- (void)_updateActivityIndicatorViewVisibility;
- (void)_hideActivityIndicatorView;
- (void)_showActivityIndicatorView;
- (void)prepareForSnapshot;
- (id)artworkLoader:(id)arg1 artworkCatalogForItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)didSelectModelObject:(id)arg1 atIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 withModelObject:(id)arg2 atIndexPath:(id)arg3;
- (id)modelObjectForItemAtIndexPath:(id)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (id)modelObjectForSection:(int)arg1;
- (int)numberOfSections;
- (void)contentLoader:(id)arg1 didUpdateModelResponseWithChangeDetails:(id)arg2;
- (void)contentLoaderDidFinishLoadingContent:(id)arg1;
- (void)contentLoaderWillBeginLoadingContent:(id)arg1;
- (id)modelRequestsForContentLoader:(id)arg1;
@property(readonly, nonatomic) PUICContentUnavailableView *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
- (void)setNeedsContentLoaderUpdate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


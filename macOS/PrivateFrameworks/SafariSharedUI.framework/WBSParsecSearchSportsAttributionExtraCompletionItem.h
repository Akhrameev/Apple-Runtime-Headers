//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

#import <SafariSharedUI/WBSCompletionListItem-Protocol.h>

@class NSString, NSURL, SFSearchResult, WBSParsecImageRepresentation, WBSQuerySuggestion;

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem>
{
    SFSearchResult *sfSearchResultValue;
    long long _parsecQueryID;
    NSString *_label;
    NSURL *_url;
    WBSParsecImageRepresentation *_imageRepresentation;
}

+ (id)schema;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)initWithRowCardSection:(id)arg1 forQueryID:(long long)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSBasicSceneAgent.h>

#import <FrontBoardServices/FBSSceneClientAgent-Protocol.h>

@class NSString;

@interface FBSBasicSceneClientAgent : FBSBasicSceneAgent <FBSSceneClientAgent>
{
}

- (void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


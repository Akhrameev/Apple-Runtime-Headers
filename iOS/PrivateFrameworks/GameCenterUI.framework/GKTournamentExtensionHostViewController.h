//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostViewController.h>

#import <GameCenterUI/GKTournamentExtensionInterface-Protocol.h>
#import <GameCenterUI/GKTournamentHostInterface-Protocol.h>

@class GKTournamentViewRequest, NSString;

@interface GKTournamentExtensionHostViewController : GKExtensionHostViewController <GKTournamentExtensionInterface, GKTournamentHostInterface>
{
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (oneway void)playTournament:(id)arg1 withTryToken:(id)arg2;
- (id)tournamentHostViewController;
- (oneway void)initializeWithLocalPlayer:(id)arg1 hostPID:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setupWithViewRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GKTournamentViewRequest *viewRequest; // @dynamic viewRequest;

@end


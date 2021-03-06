//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSubcredentialProvisioningFlowControllerContext.h>

#import <PassKitUI/NSCopying-Protocol.h>

@class PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying>
{
    _Bool _acceptLocalDeviceInvitation;
    _Bool _acceptRemoteDeviceInvitation;
    PKAppletSubcredentialSharingInvitation *_localDeviceInvitation;
    PKAppletSubcredentialSharingInvitation *_remoteDeviceInvitation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool acceptRemoteDeviceInvitation; // @synthesize acceptRemoteDeviceInvitation=_acceptRemoteDeviceInvitation;
@property(nonatomic) _Bool acceptLocalDeviceInvitation; // @synthesize acceptLocalDeviceInvitation=_acceptLocalDeviceInvitation;
@property(retain, nonatomic) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation; // @synthesize remoteDeviceInvitation=_remoteDeviceInvitation;
@property(retain, nonatomic) PKAppletSubcredentialSharingInvitation *localDeviceInvitation; // @synthesize localDeviceInvitation=_localDeviceInvitation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInvitation:(id)arg1 localDeviceWebService:(id)arg2 remoteDeviceWebService:(id)arg3;

@end


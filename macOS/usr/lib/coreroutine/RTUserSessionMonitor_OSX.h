//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTUserSessionMonitor.h>

@class RTDarwinNotificationHelper;

@interface RTUserSessionMonitor_OSX : RTUserSessionMonitor
{
    RTDarwinNotificationHelper *_notificationHelper;
}

- (void).cxx_destruct;
- (void)_handleUserSessionChange;
- (void)handleUserSessionChange;
- (BOOL)activeUser;
- (unsigned int)uid;
- (void)dealloc;
- (id)init;
- (id)initWithNotificationHelper:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BookUtility/BUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data;

@protocol BURandomWriteChannel <BUIOChannel>
- (void)truncateToLength:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)flushWithCompletion:(void (^)(NSError *))arg1;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 offset:(long long)arg2 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end


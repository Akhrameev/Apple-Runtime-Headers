//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (HomeKit)
+ (id)stringWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (id)generateSHA1;
- (id)serializeWithError:(id *)arg1;
@end


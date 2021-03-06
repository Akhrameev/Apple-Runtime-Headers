//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HPHistoryDecoder : NSObject
{
}

+ (id)_decodeShinkansenTrainDataWithBlock:(id)arg1 andBlock:(id)arg2;
+ (id)parseShinkansenBlocks:(id)arg1 fromServiceCode:(unsigned short)arg2;
+ (id)parseGreencarBlocks:(id)arg1;
+ (id)parseSuicaHistoryBlocks:(id)arg1 withIDm:(id)arg2;
+ (unsigned short)getHistoryNumber:(id)arg1;
+ (_Bool)getIsBlackListed:(id)arg1;
+ (CDStruct_5c52f79b)getInOutStation:(id)arg1;
+ (_Bool)getGreenCarTicketUsed:(id)arg1;
+ (CDStruct_1fdc8922)getSectorInformation:(id)arg1;
+ (int)getTransactionAmount:(id)arg1 withPreviousBlock:(id)arg2;
+ (unsigned short)getTypeOfUse:(id)arg1;
+ (CDStruct_95d471ab)getCommuterBalance:(id)arg1;
+ (CDStruct_95d471ab)getTransactionBalance:(id)arg1;
+ (id)getTransactionDate:(id)arg1;

@end


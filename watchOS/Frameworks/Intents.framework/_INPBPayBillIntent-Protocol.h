//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString;

@protocol _INPBPayBillIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTransactionScheduledDate;
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property(readonly, nonatomic) _Bool hasTransactionNote;
@property(retain, nonatomic) _INPBString *transactionNote;
@property(readonly, nonatomic) _Bool hasTransactionAmount;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasFromAccount;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property(readonly, nonatomic) _Bool hasDueDate;
@property(retain, nonatomic) _INPBDateTimeRange *dueDate;
@property(nonatomic) _Bool hasBillType;
@property(nonatomic) int billType;
@property(readonly, nonatomic) _Bool hasBillPayee;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee;
- (int)StringAsBillType:(NSString *)arg1;
- (NSString *)billTypeAsString:(int)arg1;
@end


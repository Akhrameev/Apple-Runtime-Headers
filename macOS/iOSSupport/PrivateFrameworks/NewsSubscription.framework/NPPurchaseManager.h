//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPPurchaseManager : NSObject
{
    // Error parsing type: , name: purchaseManager
    // Error parsing type: , name: transactionObservers
    // Error parsing type: , name: purchaseObservers
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)startBundlePurchaseWithPurchaseModel:(id)arg1 purchaseContext:(id)arg2 error:(id *)arg3;
- (BOOL)startPurchaseWithPurchaseModel:(id)arg1 purchaseContext:(id)arg2 error:(id *)arg3;
- (id)purchaseMetadataWithPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2;
- (void)removeTransactionObserver:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)removePurchaseObserver:(id)arg1;
- (void)addPurchaseObserver:(id)arg1;

@end


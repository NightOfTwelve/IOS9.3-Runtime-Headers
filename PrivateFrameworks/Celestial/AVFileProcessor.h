//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVFileProcessor : NSObject
{
    float _percentComplete;
}

+ (id)fileProcessor;
- (id)sinfInfoFromFilePath:(id)arg1;
- (id)sinfsFromFilePath:(id)arg1;
- (id)rentalInfo:(id)arg1;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2;

@end


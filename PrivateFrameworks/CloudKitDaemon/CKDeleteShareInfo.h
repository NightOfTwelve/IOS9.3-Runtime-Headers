//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDSharePCSData, CKShareID;

__attribute__((visibility("hidden")))
@interface CKDeleteShareInfo : NSObject
{
    CKShareID *_shareID;
    CKDSharePCSData *_pcsData;
}

@property(retain, nonatomic) CKDSharePCSData *pcsData; // @synthesize pcsData=_pcsData;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;

@end


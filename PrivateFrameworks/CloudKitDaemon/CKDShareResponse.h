//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKShare, CKShareID;

__attribute__((visibility("hidden")))
@interface CKDShareResponse : NSObject
{
    CKShareID *_shareID;
    CKShare *_share;
}

@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;

@end


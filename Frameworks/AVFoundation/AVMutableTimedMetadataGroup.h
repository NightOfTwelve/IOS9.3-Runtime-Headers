//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVTimedMetadataGroup.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup
{
    AVTimedMetadataGroupInternal *_mutablePriv;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *items;
@property(nonatomic) CDStruct_e83c9415 timeRange;
- (id)initWithItems:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUTilingScrollInfo : NSObject
{
    _Bool _shouldEnablePaging;
    long long _scrollDirections;
    double _pagingSpringPullAdjustment;
    double _pagingFrictionAdjustment;
    struct CGSize _interpageSpacing;
}

+ (id)scrollInfoWithScrollDirections:(long long)arg1 enabledPagingWithInterpageSpacing:(struct CGSize)arg2 pagingSpringPullAdjustment:(double)arg3 pagingFrictionAdjustment:(double)arg4;
+ (id)scrollInfoWithScrollDirections:(long long)arg1 enabledPagingWithInterpageSpacing:(struct CGSize)arg2;
+ (id)scrollInfoWithScrollDirections:(long long)arg1;
- (void)_setPagingFrictionAdjustment:(double)arg1;
@property(nonatomic) double pagingFrictionAdjustment; // @synthesize pagingFrictionAdjustment=_pagingFrictionAdjustment;
- (void)_setPagingSpringPullAdjustment:(double)arg1;
@property(nonatomic) double pagingSpringPullAdjustment; // @synthesize pagingSpringPullAdjustment=_pagingSpringPullAdjustment;
- (void)_setInterpageSpacing:(struct CGSize)arg1;
@property(nonatomic) struct CGSize interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
- (void)_setShouldEnablePaging:(_Bool)arg1;
@property(nonatomic) _Bool shouldEnablePaging; // @synthesize shouldEnablePaging=_shouldEnablePaging;
- (void)_setScrollDirections:(long long)arg1;
@property(nonatomic) long long scrollDirections; // @synthesize scrollDirections=_scrollDirections;

@end

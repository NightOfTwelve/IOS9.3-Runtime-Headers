//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UIKBSplitTraits : NSObject
{
    int _corners;
    struct CGRect _leftFrame;
    struct CGRect _rightFrame;
}

+ (id)traitsWithLeftFrame:(struct CGRect)arg1 rightFrame:(struct CGRect)arg2 corners:(int)arg3;
@property(readonly, nonatomic) int corners; // @synthesize corners=_corners;
@property(readonly, nonatomic) struct CGRect rightFrame; // @synthesize rightFrame=_rightFrame;
@property(readonly, nonatomic) struct CGRect leftFrame; // @synthesize leftFrame=_leftFrame;
- (id)initWithLeftFrame:(struct CGRect)arg1 rightFrame:(struct CGRect)arg2 corners:(unsigned long long)arg3;

@end


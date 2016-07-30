//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSISEngine, NSISVariable;
@protocol NSISConstraint;

@protocol NSISEngineDelegate <NSObject>
- (void)engine:(NSISEngine *)arg1 willBreakConstraint:(id <NSISConstraint>)arg2 dueToMutuallyExclusiveConstraints:(NSArray *)arg3;
- (NSISVariable *)engine:(NSISEngine *)arg1 markerForConstraintToBreakAmongConstraints:(NSArray *)arg2;
- (void)constraintsDidChangeInEngine:(NSISEngine *)arg1;
@end


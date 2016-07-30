//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/PDTimeNode.h>

@class NSMutableArray, NSString, PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDSequentialTimeNode : PDTimeNode
{
    _Bool mConcurrent;
    int mPreviousAction;
    int mNextAction;
    NSMutableArray *mPreviousConditions;
    NSMutableArray *mNextConditions;
}

+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1;
+ (id)newSequentialTimeNodeGroupForAnimationInfo;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 target:(id)arg2;
+ (unsigned long long)buildPartsFromTarget:(id)arg1;
+ (id)timeNodeUnion:(id)arg1 initWithClass:(Class)arg2;
@property(retain, nonatomic) NSMutableArray *nextConditions; // @synthesize nextConditions=mNextConditions;
@property(retain, nonatomic) NSMutableArray *previousConditions; // @synthesize previousConditions=mPreviousConditions;
@property(nonatomic) int nextAction; // @synthesize nextAction=mNextAction;
@property(nonatomic) int previousAction; // @synthesize previousAction=mPreviousAction;
@property(nonatomic) _Bool concurrent; // @synthesize concurrent=mConcurrent;
- (void)dealloc;
@property(retain, nonatomic) NSString *groupId;
@property(nonatomic) double direction;
@property(nonatomic) double delay;
@property(nonatomic) int iterateType;
@property(nonatomic) int triggerType;
@property(nonatomic) int presetId;
@property(nonatomic) int presetClass;
- (void)setLevel2ParallelAttribute:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PDAnimationTarget *target;
- (id)level3BehaviorAtNodeIndex:(unsigned long long)arg1 level2NodeIndex:(unsigned long long)arg2 level1NodeIndex:(unsigned long long)arg3;
- (id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 level1NodeIndex:(unsigned long long)arg2;
- (id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1;

@end


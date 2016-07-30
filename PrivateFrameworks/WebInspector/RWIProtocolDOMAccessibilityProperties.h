//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSArray *selectedChildNodeIds;
@property(nonatomic) _Bool selected;
@property(copy, nonatomic) NSString *role;
@property(nonatomic) _Bool required;
@property(nonatomic) _Bool readonly;
@property(nonatomic) _Bool pressed;
@property(nonatomic) int parentNodeId;
@property(copy, nonatomic) NSArray *ownedNodeIds;
@property(nonatomic) int nodeId;
@property(nonatomic) int mouseEventNodeId;
@property(nonatomic) long long liveRegionStatus;
@property(copy, nonatomic) NSArray *liveRegionRelevant;
@property(nonatomic) _Bool liveRegionAtomic;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) _Bool hidden;
@property(nonatomic) long long invalid;
@property(nonatomic) _Bool ignoredByDefault;
@property(nonatomic) _Bool ignored;
@property(nonatomic) _Bool focused;
@property(copy, nonatomic) NSArray *flowedNodeIds;
@property(nonatomic) _Bool expanded;
@property(nonatomic) _Bool exists;
@property(nonatomic) _Bool disabled;
@property(copy, nonatomic) NSArray *controlledNodeIds;
@property(copy, nonatomic) NSArray *childNodeIds;
@property(nonatomic) long long checked;
@property(nonatomic) _Bool busy;
@property(nonatomic) int activeDescendantNodeId;
- (id)initWithExists:(_Bool)arg1 label:(id)arg2 nodeId:(int)arg3 role:(id)arg4;

@end


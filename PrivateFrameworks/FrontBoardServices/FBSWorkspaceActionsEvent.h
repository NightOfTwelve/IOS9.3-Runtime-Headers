//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class NSSet;

@interface FBSWorkspaceActionsEvent : FBSWorkspaceEvent
{
    NSSet *_actions;
}

@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

@end


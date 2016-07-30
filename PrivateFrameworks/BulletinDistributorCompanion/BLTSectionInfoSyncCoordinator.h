//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BLTSectionInfoSyncCoordinator : NSObject
{
    CDUnknownBlockType _infoProvider;
    NSMutableArray *_alertingSectionIDs;
    NSMutableDictionary *_alertingSectionState;
    unsigned long long _mostRecentIndex;
}

@property(nonatomic) unsigned long long mostRecentIndex; // @synthesize mostRecentIndex=_mostRecentIndex;
@property(retain, nonatomic) NSMutableDictionary *alertingSectionState; // @synthesize alertingSectionState=_alertingSectionState;
@property(retain, nonatomic) NSMutableArray *alertingSectionIDs; // @synthesize alertingSectionIDs=_alertingSectionIDs;
@property(copy, nonatomic) CDUnknownBlockType infoProvider; // @synthesize infoProvider=_infoProvider;
- (void).cxx_destruct;
- (void)sectionInfoSendCompleted:(unsigned long long)arg1;
- (id)effectiveSectionInfoForSectionIDIndex:(unsigned long long)arg1;
- (void)performSyncForSectionID:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAlertingSectionIDs:(id)arg1 infoProvider:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>
#import <NotesShared/TTMergeableStringIDTracker-Protocol.h>

@class NSObject, TTMergeableString, TTMergeableUndoString;
@protocol TTMergeableStringUndoCommand;

@protocol TTMergeableStringUndoCommand <NSObject, TTMergeableStringIDTracker>
- (_Bool)coalesceWith:(NSObject<TTMergeableStringUndoCommand> *)arg1 inString:(TTMergeableString *)arg2;
- (void)applyToString:(TTMergeableUndoString *)arg1;
@end


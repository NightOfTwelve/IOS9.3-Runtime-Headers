//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMPreviewView, CAMSnapshotView;

@interface CAMViewfinderOpenAndCloseTransition : NSObject
{
    CAMPreviewView *__previewView;
    CAMSnapshotView *__snapshotView;
}

@property(retain, nonatomic, setter=_setSnapshotView:) CAMSnapshotView *_snapshotView; // @synthesize _snapshotView=__snapshotView;
@property(readonly, nonatomic) CAMPreviewView *_previewView; // @synthesize _previewView=__previewView;
- (void).cxx_destruct;
- (void)closeAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)openAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_closeViewfinder:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_existingSnapshotViewCreateIfNecessary:(_Bool)arg1 removedOnCompletion:(_Bool)arg2;
- (id)initWithPreviewView:(id)arg1;

@end


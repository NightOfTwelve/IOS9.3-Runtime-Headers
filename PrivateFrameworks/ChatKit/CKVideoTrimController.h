//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/UINavigationControllerDelegate-Protocol.h>
#import <ChatKit/UIVideoEditorControllerDelegatePrivate-Protocol.h>

@class CKMediaObject, NSString, UIVideoEditorController;
@protocol CKTrimControllerDelegate;

@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate>
{
    id <CKTrimControllerDelegate> _delegate;
    CKMediaObject *_originalMediaObject;
    CKMediaObject *_trimmedMediaObject;
    UIVideoEditorController *_editVideoVC;
}

@property(retain, nonatomic) UIVideoEditorController *editVideoVC; // @synthesize editVideoVC=_editVideoVC;
@property(nonatomic) id <CKTrimControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMediaObject *trimmedMediaObject; // @synthesize trimmedMediaObject=_trimmedMediaObject;
@property(retain, nonatomic) CKMediaObject *originalMediaObject; // @synthesize originalMediaObject=_originalMediaObject;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)dealloc;
- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, UIDocumentInteractionController;
@protocol SPUISearchResultsActionManagerDelegate;

@interface SPUISearchResultsActionManager : NSObject
{
    id <SPUISearchResultsActionManagerDelegate> _delegate;
    NSMutableSet *_currentActions;
    UIDocumentInteractionController *_docInteractionController;
}

@property(retain, nonatomic) UIDocumentInteractionController *docInteractionController; // @synthesize docInteractionController=_docInteractionController;
@property(readonly, nonatomic) NSMutableSet *currentActions; // @synthesize currentActions=_currentActions;
@property id <SPUISearchResultsActionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelCurrentActionAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)willReturnToResultsList;
@property(readonly) _Bool hasModalAction;
@property(readonly) _Bool hasCurrentAction;
- (id)_actionForResult:(id)arg1 inSection:(id)arg2;
- (id)_performAction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_performActionForResult:(id)arg1 inSection:(id)arg2 urls:(id)arg3 forceDefaultAction:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_performActionForResult:(id)arg1 inSection:(id)arg2 urls:(id)arg3 fromCardType:(id)arg4 sendFeedback:(_Bool)arg5 forceDefaultAction:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)performCustomActionWithViewController:(id)arg1;
- (id)performSecondaryActionForResult:(id)arg1 inSection:(id)arg2;
- (id)performActionForResult:(id)arg1 inSection:(id)arg2;
- (void)openURL:(id)arg1;

@end


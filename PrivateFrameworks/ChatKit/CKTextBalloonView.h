//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

#import <ChatKit/CKBalloonTextViewInteractionDelegate-Protocol.h>

@class CKBalloonTextView, NSAttributedString, NSString;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate>
{
    _Bool _centerTextWhenSkinny;
    CKBalloonTextView *_textView;
    NSAttributedString *_attributedText;
}

@property(nonatomic) _Bool centerTextWhenSkinny; // @synthesize centerTextWhenSkinny=_centerTextWhenSkinny;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) CKBalloonTextView *textView; // @synthesize textView=_textView;
- (double)textViewWidthForWidth:(double)arg1;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1;
- (void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)configureForMessagePart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


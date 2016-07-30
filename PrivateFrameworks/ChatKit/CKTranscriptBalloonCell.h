//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKPhoneTranscriptMessageCell.h>

@class CKBalloonView, NSAttributedString, UILabel;

@interface CKTranscriptBalloonCell : CKPhoneTranscriptMessageCell
{
    _Bool _drawerWasVisible;
    _Bool _drawerTextChanged;
    CKBalloonView *_balloonView;
    NSAttributedString *_drawerText;
    UILabel *_drawerLabel;
    struct CGSize _drawerTextSize;
}

@property(nonatomic) struct CGSize drawerTextSize; // @synthesize drawerTextSize=_drawerTextSize;
@property(nonatomic) _Bool drawerTextChanged; // @synthesize drawerTextChanged=_drawerTextChanged;
@property(nonatomic) _Bool drawerWasVisible; // @synthesize drawerWasVisible=_drawerWasVisible;
@property(retain, nonatomic) UILabel *drawerLabel; // @synthesize drawerLabel=_drawerLabel;
@property(copy, nonatomic) NSAttributedString *drawerText; // @synthesize drawerText=_drawerText;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;
- (void)configureForChatItem:(id)arg1;

@end

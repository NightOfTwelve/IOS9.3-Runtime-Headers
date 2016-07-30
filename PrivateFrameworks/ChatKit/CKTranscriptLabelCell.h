//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptCell.h>

@class NSAttributedString, UILabel;

@interface CKTranscriptLabelCell : CKTranscriptCell
{
    _Bool _wantsContactImageLayout;
    UILabel *_label;
}

+ (id)label;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool wantsContactImageLayout; // @synthesize wantsContactImageLayout=_wantsContactImageLayout;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)setOrientation:(BOOL)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)configureForChatItem:(id)arg1;

@end


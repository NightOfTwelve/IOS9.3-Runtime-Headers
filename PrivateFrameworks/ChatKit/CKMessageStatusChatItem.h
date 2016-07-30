//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@class NSAttributedString;

@interface CKMessageStatusChatItem : CKChatItem
{
    _Bool _buttonSizeLoaded;
    NSAttributedString *_transcriptButtonText;
    struct CGSize _buttonSize;
    struct UIEdgeInsets _buttonTextAlignmentInsets;
}

+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)todayDateFormatter;
@property(nonatomic, getter=isButtonSizeLoaded) _Bool buttonSizeLoaded; // @synthesize buttonSizeLoaded=_buttonSizeLoaded;
@property(copy, nonatomic) NSAttributedString *transcriptButtonText; // @synthesize transcriptButtonText=_transcriptButtonText;
- (struct CGSize)loadButtonSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)loadTranscriptButtonText;
- (unsigned long long)count;
- (id)time;
- (_Bool)isFromMe;
- (long long)expireStatusType;
- (long long)statusType;
- (id)now;
@property(readonly, nonatomic) long long buttonType;
@property(readonly, nonatomic) struct UIEdgeInsets buttonTextAlignmentInsets; // @synthesize buttonTextAlignmentInsets=_buttonTextAlignmentInsets;
@property(readonly, nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)loadTranscriptText;
- (_Bool)wantsDrawerLayout;
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;
- (void)unloadSize;
- (void)unloadTranscriptText;
- (Class)cellClass;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets)contentInsets;
- (void)dealloc;

@end


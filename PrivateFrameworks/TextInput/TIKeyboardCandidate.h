//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>
#import <TextInput/TIKeyboardCandidateCoding-Protocol.h>

@class NSString;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding>
{
    NSString *_alternativeText;
    NSString *_annotationText;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *annotationText; // @synthesize annotationText=_annotationText;
@property(copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
@property(readonly, nonatomic, getter=isFullwidthCandidate) _Bool fullwidthCandidate;
@property(readonly, nonatomic) unsigned int usageTrackingMask;
@property(readonly, nonatomic, getter=isInlineCompletionCandidate) _Bool inlineCompletionCandidate;
@property(readonly, nonatomic, getter=isCompletionCandidate) _Bool completionCandidate;
@property(readonly, nonatomic, getter=isEmojiCandidate) _Bool emojiCandidate;
@property(readonly, nonatomic, getter=isExtensionCandidate) _Bool extensionCandidate;
@property(readonly, nonatomic) _Bool isAutocorrection;
@property(readonly, nonatomic) _Bool isForShortcutConversion;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long cursorMovement;
@property(readonly, nonatomic) unsigned long long deleteCount;
@property(readonly, nonatomic) unsigned long long wordOriginFeedbackID;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSString *input;
@property(readonly, nonatomic) NSString *candidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


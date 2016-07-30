//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, TIDocumentState, TIKeyboardCandidate, TIKeyboardLayout, TIKeyboardLayoutState, TITextInputTraits;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding>
{
    union {
        long long integerValue;
        struct {
            unsigned int userSelectedCurrentCandidate:1;
            unsigned int shouldSkipCandidateSelection:1;
            unsigned int suppressingCandidateSelection:1;
            unsigned int needsCandidateMetadata:1;
            unsigned int keyboardEventsLagging:1;
            unsigned int hardwareKeyboardMode:1;
            unsigned int splitKeyboardMode:1;
            unsigned int wordLearningEnabled:1;
            unsigned int autocorrectionEnabled:1;
            unsigned int shortcutConversionEnabled:1;
            unsigned int candidateSelectionPredictionEnabled:1;
            unsigned int autocapitalizationEnabled:1;
        } fields;
    } _mask;
    union {
        long long integerValue;
        struct {
            unsigned int displayed:1;
            unsigned int autoDisplayMode:1;
        } fields;
    } _autocorrectionListUIState;
    int _shiftState;
    NSUUID *_documentIdentifier;
    NSString *_clientIdentifier;
    NSString *_inputMode;
    NSString *_recipientIdentifier;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIDocumentState *_documentState;
    NSString *_inputForMarkedText;
    NSString *_searchStringForMarkedText;
    TIKeyboardCandidate *_currentCandidate;
    TITextInputTraits *_textInputTraits;
    NSString *_responseContext;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *responseContext; // @synthesize responseContext=_responseContext;
@property(retain, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(retain, nonatomic) TIKeyboardCandidate *currentCandidate; // @synthesize currentCandidate=_currentCandidate;
@property(copy, nonatomic) NSString *searchStringForMarkedText; // @synthesize searchStringForMarkedText=_searchStringForMarkedText;
@property(copy, nonatomic) NSString *inputForMarkedText; // @synthesize inputForMarkedText=_inputForMarkedText;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(copy, nonatomic) TIKeyboardLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property(nonatomic) int shiftState; // @synthesize shiftState=_shiftState;
@property(retain, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSUUID *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) _Bool autocorrectionListUIAutoDisplayMode;
@property(nonatomic) _Bool autocorrectionListUIDisplayed;
@property(nonatomic) _Bool secureTextEntry;
@property(nonatomic) unsigned long long keyboardType;
@property(nonatomic) unsigned long long autocapitalizationType;
- (void)_createTextInputTraitsIfNecessary;
@property(nonatomic) _Bool autocapitalizationEnabled;
@property(nonatomic) _Bool candidateSelectionPredictionEnabled;
@property(nonatomic) _Bool shortcutConversionEnabled;
@property(nonatomic) _Bool autocorrectionEnabled;
@property(nonatomic) _Bool wordLearningEnabled;
@property(nonatomic) _Bool splitKeyboardMode;
@property(nonatomic) _Bool hardwareKeyboardMode;
@property(nonatomic) _Bool keyboardEventsLagging;
@property(nonatomic) _Bool needsCandidateMetadata;
@property(nonatomic) _Bool suppressingCandidateSelection;
@property(nonatomic) _Bool shouldSkipCandidateSelection;
@property(nonatomic) _Bool userSelectedCurrentCandidate;

@end


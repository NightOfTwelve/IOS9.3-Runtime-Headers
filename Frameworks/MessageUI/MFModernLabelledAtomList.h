//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MessageUI/MFModernAddressAtomDelegate-Protocol.h>
#import <MessageUI/MFPassthroughViewProvider-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, UIColor, UILabel;
@protocol MFModernLabelledAtomListDelegate;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate>
{
    UILabel *_label;
    void *_addressBook;
    id <MFModernLabelledAtomListDelegate> _delegate;
    NSMutableArray *_addressAtoms;
    NSString *_title;
    UIColor *_labelTextColor;
    NSDictionary *_recipients;
    double _firstLineWidth;
    _Bool _usePadDisplayStyle;
    _Bool _labelVisible;
    unsigned int _needsReflow:1;
    unsigned int _isChangingFrame:1;
    UIView *_baselineView;
    _Bool _primary;
    unsigned long long _numberOfRows;
    double _lineSpacing;
}

+ (double)spaceBetweenColonAndFirstAtomNaturalEdge;
+ (double)atomLineHeight;
+ (id)primaryLabelFont;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) _Bool primary; // @synthesize primary=_primary;
@property(readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) _Bool usePadDisplayStyle; // @synthesize usePadDisplayStyle=_usePadDisplayStyle;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGPoint)baselinePointForRow:(unsigned long long)arg1;
- (void)crossFadeLabelVisibility:(_Bool)arg1 atomSeparatorStyle:(int)arg2 animationDuration:(double)arg3;
- (id)passthroughViews;
- (void)setOpaque:(_Bool)arg1;
- (void)setAtomAlpha:(double)arg1;
- (id)addressAtoms;
- (id)atomDisplayStrings;
- (id)title;
- (void)updateAtomsForVIP;
@property(nonatomic, getter=isLabelVisible) _Bool labelVisible;
- (struct CGRect)labelFrame;
- (id)labelText;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (void)setAddressAtomScale:(double)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)_reflow;
- (void)_setNeedsReflow;
- (void)enumerateAddressAtomsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFirstLineWidth:(double)arg1 reflow:(_Bool)arg2;
- (void)setFirstLineWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)addressBookDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(double)arg3 firstLineWidth:(double)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6 atomPresentationOptions:(unsigned long long)arg7 addressBook:(void *)arg8 completionBlock:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


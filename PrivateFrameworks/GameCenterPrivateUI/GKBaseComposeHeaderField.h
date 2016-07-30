//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class GKHairlineView, GKLabel, NSString;

@interface GKBaseComposeHeaderField : UIImageView
{
    GKLabel *_nameLabel;
    GKHairlineView *_separatorView;
    unsigned long long _maxLineCount;
    SEL _actionWhenTouched;
}

@property(nonatomic) SEL actionWhenTouched; // @synthesize actionWhenTouched=_actionWhenTouched;
@property(nonatomic) unsigned long long maxLineCount; // @synthesize maxLineCount=_maxLineCount;
@property(retain, nonatomic) GKHairlineView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) GKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)viewForBaselineLayout;
@property(retain, nonatomic) NSString *valueText;
@property(readonly, nonatomic) struct CGRect valueFrame;
@property(retain, nonatomic) NSString *nameText;
- (void)addConstraintsForValueView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


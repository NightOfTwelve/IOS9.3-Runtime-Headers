//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIColor, UIFont, UILabel;
@protocol MTDateLabelObserver;

@interface MTDateLabel : UIView
{
    NSTimeZone *_timeZone;
    _Bool _hideTimeDesignator;
    _Bool _shouldAddLayoutConstraints;
    NSDate *_date;
    UILabel *_dateLabel;
    UIColor *_textColor;
    UIFont *_font;
    UIFont *_timeDesignatorFont;
    double _paddingFromTimeToDesignator;
    id <MTDateLabelObserver> _observer;
    NSArray *_currentConstraints;
    NSString *_timeDesignatorString;
}

@property(copy, nonatomic) NSString *timeDesignatorString; // @synthesize timeDesignatorString=_timeDesignatorString;
@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(nonatomic) _Bool shouldAddLayoutConstraints; // @synthesize shouldAddLayoutConstraints=_shouldAddLayoutConstraints;
@property(nonatomic) __weak id <MTDateLabelObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) double paddingFromTimeToDesignator; // @synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator;
@property(nonatomic) _Bool hideTimeDesignator; // @synthesize hideTimeDesignator=_hideTimeDesignator;
@property(retain, nonatomic) UIFont *timeDesignatorFont; // @synthesize timeDesignatorFont=_timeDesignatorFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)viewForBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (void)_noteLayoutChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasTimeDesignator;
- (void)_updateDateString;
- (void)updateConstraints;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (id)initWithFrame:(struct CGRect)arg1;

@end


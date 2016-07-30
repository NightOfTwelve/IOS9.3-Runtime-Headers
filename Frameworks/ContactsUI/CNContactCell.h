//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CNCardGroupItem, NSArray;

@interface CNContactCell : UITableViewCell
{
    NSArray *_constantConstraints;
    NSArray *_variableConstraints;
    _Bool _hasBeenDisplayed;
    _Bool _shouldUseExpandedContentStyle;
    CNCardGroupItem *_cardGroupItem;
    double _leftContentMargin;
    double _rightContentMargin;
}

@property(nonatomic) _Bool shouldUseExpandedContentStyle; // @synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle;
@property(nonatomic) _Bool hasBeenDisplayed; // @synthesize hasBeenDisplayed=_hasBeenDisplayed;
@property(nonatomic) double rightContentMargin; // @synthesize rightContentMargin=_rightContentMargin;
@property(nonatomic) double leftContentMargin; // @synthesize leftContentMargin=_leftContentMargin;
@property(retain, nonatomic) CNCardGroupItem *cardGroupItem; // @synthesize cardGroupItem=_cardGroupItem;
- (void).cxx_destruct;
- (double)minCellHeight;
- (void)updateConstraints;
- (id)variableConstraints;
- (id)constantConstraints;
@property(nonatomic) _Bool showSeparator;
- (void)performAccessoryAction;
- (_Bool)shouldPerformAccessoryAction;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNLinkedCardsCell : CNLabeledCell
{
    id <CNPropertyCellDelegate> _delegate;
    UILabel *_sourceLabel;
    UILabel *_nameLabel;
}

+ (_Bool)wantsChevron;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (id)valueView;
- (id)labelView;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSAttributedString, NSMutableArray, UILabel;
@protocol MKPlaceReviewsViewCheckInWriteCellDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewsViewCheckInWriteCell : UITableViewCell
{
    UILabel *_checkInLabel;
    UILabel *_writeReviewLabel;
    id <MKPlaceReviewsViewCheckInWriteCellDelegate> _delegate;
    NSMutableArray *_scaledConstraints;
    NSArray *_marginConstraints;
}

+ (id)reuseIdentifier;
+ (double)intrinsicContentHeight;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(retain, nonatomic) NSMutableArray *scaledConstraints; // @synthesize scaledConstraints=_scaledConstraints;
@property(nonatomic) __weak id <MKPlaceReviewsViewCheckInWriteCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)cellTapped:(id)arg1;
@property(retain, nonatomic) NSAttributedString *writeReviewTitle;
@property(retain, nonatomic) NSAttributedString *checkInTitle;
- (id)updatedAttributedString:(id)arg1 onlyUpdateColor:(_Bool)arg2;
- (id)newLabel;
- (void)refreshMarginConstraints;
- (void)layoutMarginsDidChange;
- (void)updateConstraints;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


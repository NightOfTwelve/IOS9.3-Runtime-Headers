//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@class NSArray, NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface _MKPlaceActionCell : MKTableViewCell
{
    UILabel *_titleLabel;
    NSMutableArray *_scaledConstraints;
    NSArray *_marginConstraints;
}

+ (double)intrinsicContentHeight;
+ (id)fontForLabel;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(retain, nonatomic) NSMutableArray *scaledConstraints; // @synthesize scaledConstraints=_scaledConstraints;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)refreshMarginConstraints;
- (void)layoutMarginsDidChange;
- (void)updateConstraints;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

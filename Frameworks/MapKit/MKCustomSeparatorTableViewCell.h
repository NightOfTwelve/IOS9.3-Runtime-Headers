//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

__attribute__((visibility("hidden")))
@interface MKCustomSeparatorTableViewCell : MKTableViewCell
{
    _Bool _separatorHidden;
    double _leftSeparatorInset;
    double _rightSeparatorInset;
}

@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic) double rightSeparatorInset; // @synthesize rightSeparatorInset=_rightSeparatorInset;
@property(nonatomic) double leftSeparatorInset; // @synthesize leftSeparatorInset=_leftSeparatorInset;
@property(nonatomic) double trailingSeparatorInset;
@property(nonatomic) double leadingSeparatorInset;
- (void)_updateSeparatorInset;
- (struct CGRect)_separatorFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


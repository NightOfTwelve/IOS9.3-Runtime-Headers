//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUI/SPUISearchTableViewCell.h>

#import <SpotlightUI/SPUISearchContactButtonsViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, _MKResultView;

@interface SPUISearchParsecMapsCell : SPUISearchTableViewCell <SPUISearchContactButtonsViewDelegate>
{
    _MKResultView *_resultView;
    NSLayoutConstraint *_heightConstraint;
}

+ (_Bool)supportsSection:(id)arg1 result:(id)arg2;
- (void).cxx_destruct;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
- (id)constantConstraints;
- (void)buttonPressedWithType:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CKTranscriptManagementView : UIView
{
    _Bool _suppressMapMovement;
    UIView *_mapView;
    UIView *_attachmentsCollectionView;
    UIView *_nameField;
    double _navigationBarTopInset;
    double _bottomPadding;
    double _scrollYOffset;
}

@property(nonatomic) double scrollYOffset; // @synthesize scrollYOffset=_scrollYOffset;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property(nonatomic) _Bool suppressMapMovement; // @synthesize suppressMapMovement=_suppressMapMovement;
@property(retain, nonatomic) UIView *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) UIView *attachmentsCollectionView; // @synthesize attachmentsCollectionView=_attachmentsCollectionView;
@property(retain, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutMarginsDidChange;
- (_Bool)layoutMarginsFollowReadableWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSObject;
@protocol BlockableScrollViewDelegate;

@interface BlockableScrollView : UIScrollView
{
    _Bool _isResizing;
    NSObject<BlockableScrollViewDelegate> *_blockableDelegate;
}

@property(nonatomic) _Bool isResizing; // @synthesize isResizing=_isResizing;
@property(nonatomic) __weak NSObject<BlockableScrollViewDelegate> *blockableDelegate; // @synthesize blockableDelegate=_blockableDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

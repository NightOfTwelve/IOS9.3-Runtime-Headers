//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UICompositeImageView : UIView
{
    NSMutableArray *m_images;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)removeAllImages;
- (void)addImage:(id)arg1 toRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3 operation:(int)arg4 fraction:(double)arg5;
- (void)addImage:(id)arg1 toRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3;
- (void)addImage:(id)arg1 operation:(int)arg2 fraction:(double)arg3;
- (void)addImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


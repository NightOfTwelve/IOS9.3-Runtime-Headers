//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

__attribute__((visibility("hidden")))
@interface UIKBContainerKeyView : UIKBKeyView
{
    UIKBKeyView *_keyView;
}

- (void)setFactory:(id)arg1;
- (id)factory;
- (void)setRenderConfig:(id)arg1;
- (id)renderConfig;
- (void)setDrawFrame:(struct CGRect)arg1;
- (struct CGRect)drawFrame;
- (id)contentsKeyView;
- (id)key;
- (id)keyplane;
- (long long)imageOrientationForLayer:(id)arg1;
- (id)layerForRenderFlags:(long long)arg1;
- (void)prepareForDisplay;
- (void)dimKeys:(id)arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)setNeedsDisplay;
- (void)displayLayer:(id)arg1;
- (_Bool)hasRendered;
- (_Bool)requiresSublayers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end


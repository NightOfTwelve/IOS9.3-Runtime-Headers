//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface MLUBlurryView : UIView
{
    _Bool _hasActivated;
    _Bool _shouldRasterizeForTransition;
}

@property(nonatomic) _Bool shouldRasterizeForTransition; // @synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition;
@property double blurRadius;
- (void)_activateBlurring;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end


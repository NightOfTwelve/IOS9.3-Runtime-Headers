//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpec.h>

@class PUSlideshowViewControllerSpecChange;

__attribute__((visibility("hidden")))
@interface PUSlideshowViewControllerSpec : PUViewControllerSpec
{
    _Bool _isChromeVisible;
    _Bool _isAirplayScreenAvailable;
    _Bool _isAirplayRouteAvailable;
    _Bool _shouldShowChromeBars;
    _Bool _shouldShowPlaceholder;
    _Bool _shouldObserveAirplayRoute;
    _Bool _shouldShowAirplayButton;
    unsigned long long _mode;
}

@property(nonatomic) _Bool shouldShowAirplayButton; // @synthesize shouldShowAirplayButton=_shouldShowAirplayButton;
@property(nonatomic) _Bool shouldObserveAirplayRoute; // @synthesize shouldObserveAirplayRoute=_shouldObserveAirplayRoute;
@property(nonatomic) _Bool shouldShowPlaceholder; // @synthesize shouldShowPlaceholder=_shouldShowPlaceholder;
@property(nonatomic) _Bool shouldShowChromeBars; // @synthesize shouldShowChromeBars=_shouldShowChromeBars;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic, setter=setAirplayRouteAvailable:) _Bool isAirplayRouteAvailable; // @synthesize isAirplayRouteAvailable=_isAirplayRouteAvailable;
@property(nonatomic, setter=setAirplayScreenAvailable:) _Bool isAirplayScreenAvailable; // @synthesize isAirplayScreenAvailable=_isAirplayScreenAvailable;
@property(nonatomic, setter=setChromeVisible:) _Bool isChromeVisible; // @synthesize isChromeVisible=_isChromeVisible;
- (void)_setShouldShowAirplayButton:(_Bool)arg1;
- (void)_setShouldObserveAirplayRoute:(_Bool)arg1;
- (void)_setShouldShowChromeBars:(_Bool)arg1;
- (void)_setShouldShowPlaceholder:(_Bool)arg1;
@property(readonly, nonatomic) _Bool shouldPauseWhenAppResignsActive;
@property(readonly, nonatomic) _Bool shouldRegisterToAirplay;
@property(readonly, nonatomic) _Bool shouldUseTapGesture;
@property(readonly, nonatomic) _Bool shouldUseChromeBars;
- (void)updateIfNeeded;
- (id)initWithMode:(unsigned long long)arg1;
- (id)init;
@property(readonly, nonatomic) PUSlideshowViewControllerSpecChange *currentChange;
- (id)newSpecChange;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext, UINavigationController, UIView, UIViewController, _UINavigationControllerPalette;
@protocol SKUIStatusOverlayProvider;

@interface SKUINavigationControllerAssistant : NSObject
{
    _Bool _hidesShadow;
    UINavigationController *_navigationController;
    SKUIClientContext *_clientContext;
    id <SKUIStatusOverlayProvider> _statusOverlayProvider;
    UIView *_childPaletteView;
    _UINavigationControllerPalette *_paletteBackgroundView;
    UIViewController *_statusOverlayViewController;
}

+ (id)existingAssistantForNavigationController:(id)arg1;
+ (id)assistantForNavigationController:(id)arg1 clientContext:(id)arg2;
@property(retain, nonatomic) UIViewController *statusOverlayViewController; // @synthesize statusOverlayViewController=_statusOverlayViewController;
@property(retain, nonatomic) _UINavigationControllerPalette *paletteBackgroundView; // @synthesize paletteBackgroundView=_paletteBackgroundView;
@property(retain, nonatomic) UIView *childPaletteView; // @synthesize childPaletteView=_childPaletteView;
@property(retain, nonatomic) id <SKUIStatusOverlayProvider> statusOverlayProvider; // @synthesize statusOverlayProvider=_statusOverlayProvider;
@property(nonatomic) _Bool hidesShadow; // @synthesize hidesShadow=_hidesShadow;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)_transitionToPaletteView:(id)arg1 animated:(_Bool)arg2 operation:(long long)arg3;
- (void)_showOverlayView:(id)arg1 previousOverlayView:(id)arg2 animated:(_Bool)arg3;
- (void)_setStatusOverlayProvider:(id)arg1 animated:(_Bool)arg2;
- (void)_hideOverlayView:(id)arg1 animated:(_Bool)arg2;
- (void)_hideChildPaletteView:(id)arg1 animated:(_Bool)arg2;
- (void)_previewDocumentChangeNotification:(id)arg1;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setStatusOverlayProvider:(id)arg1 animated:(_Bool)arg2;
- (void)setPaletteView:(id)arg1 animated:(_Bool)arg2;
- (void)setPalettePinningBarHidden:(_Bool)arg1;
- (void)dealloc;
- (id)_initWithNavigationController:(id)arg1 clientContext:(id)arg2;

@end


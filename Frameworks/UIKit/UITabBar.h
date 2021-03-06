//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate-Protocol.h>
#import <UIKit/_UIShadowedView-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIImage, UIMotionEffect, UIScrollView, UITabBarItem, _UIBackdropView, _UITabBarAppearanceStorage, _UITabBarBackgroundView;
@protocol UITabBarDelegate;

@interface UITabBar : UIView <_UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView>
{
    UIView *_customizeView;
    _UITabBarBackgroundView *_backgroundView;
    _UIBackdropView *_adaptiveBackdrop;
    UIView *_shadowView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
    id <UITabBarDelegate> _delegate;
    NSArray *_items;
    UITabBarItem *_selectedItem;
    NSArray *_customizationItems;
    long long _barOrientation;
    struct {
        unsigned int alertShown:1;
        unsigned int wasEnabled:1;
        unsigned int customized:1;
        unsigned int downButtonSentAction:1;
        unsigned int isLocked:1;
        unsigned int backgroundIsPattern:1;
        unsigned int hasCustomBackgroundView:1;
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int backgroundNeedsUpdate:1;
        unsigned int hiddenAwaitingFocus:1;
        unsigned int focusedItemHighlightShouldBeVisible:1;
        unsigned int hasVibrantLabels:1;
        unsigned int blurDisabled:1;
        unsigned int pendingFocusAction:1;
    } _tabBarFlags;
    NSArray *_buttonItems;
    struct __CFArray *_hiddenItems;
    _UITabBarAppearanceStorage *_appearanceStorage;
    _Bool _dividerImagesChangeWithSelection;
    _Bool _dividerImagesAreInvalid;
    _Bool _hidesShadow;
    _Bool _showsHighlightedState;
    _Bool _scrollsItems;
    double _nextSelectionSlideDuration;
    NSMutableArray *_dividerImageViews;
    long long _itemPositioning;
    double _itemDimension;
    double _itemSpacing;
    long long _barMetrics;
    long long _imageStyle;
    long long _tabBarSizing;
    UIView *_accessoryView;
    NSString *_backdropViewLayerGroupName;
    unsigned long long _preferredFocusHeading;
}

+ (void)_initializeForIdiom:(long long)arg1;
+ (id)_unselectedTabTintColorForView:(id)arg1;
+ (id)_tabBarForView:(id)arg1;
@property(nonatomic, getter=_preferredFocusHeading, setter=_setPreferredFocusHeading:) unsigned long long preferredFocusHeading; // @synthesize preferredFocusHeading=_preferredFocusHeading;
@property(retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName; // @synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName;
@property(nonatomic, setter=_setScrollsItems:) _Bool _scrollsItems; // @synthesize _scrollsItems;
@property(nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView;
@property(nonatomic, setter=_setTabBarSizing:) long long _tabBarSizing; // @synthesize _tabBarSizing;
@property(nonatomic, setter=_setShowsHighlightedState:) _Bool _showsHighlightedState; // @synthesize _showsHighlightedState;
@property(nonatomic, setter=_setHidesShadow:) _Bool _hidesShadow; // @synthesize _hidesShadow;
@property(nonatomic, setter=_setBarMetrics:) long long _barMetrics; // @synthesize _barMetrics;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemDimension;
@property(nonatomic) long long itemPositioning; // @synthesize itemPositioning=_itemPositioning;
@property(retain, nonatomic, setter=_setDividerImageViews:) NSMutableArray *_dividerImageViews; // @synthesize _dividerImageViews;
@property(nonatomic, setter=_setDividerImagesAreInvalid:) _Bool _dividerImagesAreInvalid; // @synthesize _dividerImagesAreInvalid;
@property(nonatomic, setter=_setDividerImagesChangeWithSelection:) _Bool _dividerImagesChangeWithSelection; // @synthesize _dividerImagesChangeWithSelection;
@property(nonatomic, setter=_setNextSelectionSlideDuration:) double _nextSelectionSlideDuration; // @synthesize _nextSelectionSlideDuration;
@property(nonatomic) id <UITabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=_focusedTabBarItem) UITabBarItem *focusedTabBarItem;
@property(nonatomic, getter=_pendingFocusAction, setter=_setPendingFocusAction:) _Bool pendingFocusAction;
@property(nonatomic, getter=_focusedItemHighlightShouldBeVisible, setter=_setFocusedItemHightlightShouldBeVisible:) _Bool focusedItemHighlightShouldBeVisible;
@property(nonatomic, getter=_isHiddenAwaitingFocus, setter=_setHiddenAwaitingFocus:) _Bool hiddenAwaitingFocus;
- (void)_setFocusedItemHightlightVisible:(_Bool)arg1;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateHighlightMotionEffect;
- (void)focusedViewDidChange;
- (_Bool)canBecomeFocused;
- (_Bool)_isEligibleForFocus;
@property(nonatomic, setter=_setImageStyle:) long long _imageStyle; // @synthesize _imageStyle;
- (id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3;
- (void)_invalidateDividerImages;
- (id)_shadowView;
@property(retain, nonatomic) UIColor *selectedImageTintColor;
@property(retain, nonatomic) UIColor *barTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)_effectiveBarTintColorDidChange;
- (id)_effectiveBarTintColor;
- (void)_updateTintedImages:(id)arg1 selected:(_Bool)arg2;
@property(retain, nonatomic) UIImage *selectionIndicatorImage;
@property(retain, nonatomic) UIImage *shadowImage;
@property(retain, nonatomic) UIImage *backgroundImage;
- (id)preferredFocusedItem;
- (void)_makeCurrentButtonFirstResponder;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (_Bool)isCustomizing;
- (_Bool)endCustomizingAnimated:(_Bool)arg1;
- (void)beginCustomizingItems:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_isTranslucent;
@property(nonatomic, setter=_setBarOrientation:) long long _barOrientation;
- (long long)_effectiveBarOrientation;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_showItemsAnimated:(_Bool)arg1;
- (void)_hideItemsAnimated:(_Bool)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) UITabBarItem *selectedItem;
- (void)_animateSelectionChangeFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3;
- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (id)_topmostDividerImageView;
@property(copy, nonatomic) NSArray *items;
@property(nonatomic, getter=isLocked) _Bool locked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_doCommonTabBarInit;
- (_Bool)_canDrawContent;
- (_Bool)_subclassImplementsDrawRect;
@property(nonatomic, setter=_setInterTabButtonSpacing:) double _interTabButtonSpacing;
@property(nonatomic, setter=_setTabButtonWidth:) double _tabButtonWidth;
- (void)_cleanupAdaptiveBackdrop;
- (id)_appearanceStorage;
@property(nonatomic) long long barStyle;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
- (_Bool)_wantsAdaptiveBackdrop;
@property(nonatomic, setter=_setBackgroundNeedsUpdate:) _Bool _backgroundNeedsUpdate;
- (void)_setShadowAlpha:(double)arg1;
- (double)_shadowAlpha;
- (id)_parentViewForItems;
@property(nonatomic, setter=_setBlurEnabled:) _Bool _blurEnabled;
@property(nonatomic, setter=_setVibrantLabels:) _Bool _vibrantLabels;
- (void)_setLabelShadowOffset:(struct CGSize)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setLabelFont:(id)arg1;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBadgeAnimated:(_Bool)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dismissCustomizeSheet:(_Bool)arg1;
- (void)_tabBarFinishedAnimating;
- (void)_alertDidHide;
- (void)_alertWillShow:(_Bool)arg1 duration:(float)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2;
- (double)_totalDimensionForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 scaleFactor:(double)arg4;
- (double)_scaleFactorForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 maxWidth:(double)arg4;
- (struct CGRect)_tabAreaLayoutRegion;
- (void)_configureItems:(id)arg1;
- (void)_updateDividerImagesIfNecessary;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(_Bool)arg3 swapping:(_Bool)arg4;
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (void)_finishCustomizeAnimation:(id)arg1;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_dismissCustomizeSheet:(_Bool)arg1;
- (void)_adjustButtonSelection:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (void)_updateBackgroundImage;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (_Bool)_isHidden:(id)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (_Bool)_hasCustomAutolayoutNeighborSpacing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AnnotationKit/AKTextAttributesUserInterfaceItem-Protocol.h>

@class AKColorPaletteView, AKController, NSArray, NSString, UIBarButtonItem, UIColor, UIToolbar, UIView;

@interface AKFloatingAttributePickerViewController : UIViewController <AKTextAttributesUserInterfaceItem>
{
    UIToolbar *_toolbar;
    UIColor *_color;
    long long _colorAttributeTag;
    AKController *_controller;
    AKColorPaletteView *_colorPalette;
    UIBarButtonItem *_colorPaletteButtonItem;
    UIView *_separatorView;
    NSArray *_staticItems;
    NSArray *_rightButtonItems;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSArray *rightButtonItems; // @synthesize rightButtonItems=_rightButtonItems;
@property(retain, nonatomic) NSArray *staticItems; // @synthesize staticItems=_staticItems;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIBarButtonItem *colorPaletteButtonItem; // @synthesize colorPaletteButtonItem=_colorPaletteButtonItem;
@property(retain, nonatomic) AKColorPaletteView *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long colorAttributeTag; // @synthesize colorAttributeTag=_colorAttributeTag;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (void)syncTextAttributesToUI:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setRightButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)valueChanged:(id)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


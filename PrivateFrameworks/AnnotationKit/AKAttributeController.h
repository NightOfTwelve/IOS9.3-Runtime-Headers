//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController, AKPageModelController, NSDictionary, UIColor, UIFont;

@interface AKAttributeController : NSObject
{
    _Bool _strokeIsDashed;
    _Bool _hasShadow;
    AKPageModelController *modelControllerToObserveForSelections;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    double _strokeWidth;
    long long _brushStyle;
    unsigned long long _arrowHeadStyle;
    UIFont *_font;
    NSDictionary *_textAttributes;
    AKController *_controller;
}

+ (void)initialize;
+ (id)_defaultTextAttributes;
+ (id)_defaultFont;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(retain) UIFont *font; // @synthesize font=_font;
@property unsigned long long arrowHeadStyle; // @synthesize arrowHeadStyle=_arrowHeadStyle;
@property long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property _Bool strokeIsDashed; // @synthesize strokeIsDashed=_strokeIsDashed;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) AKPageModelController *modelControllerToObserveForSelections; // @synthesize modelControllerToObserveForSelections;
- (void).cxx_destruct;
- (void)_updateStateOnSenderFromSelf:(id)arg1;
- (_Bool)_updateStateOnSender:(id)arg1 fromSelectedAnnotations:(id)arg2;
- (void)_updateStateOnSender:(id)arg1;
- (_Bool)_isEnabledForSender:(id)arg1 withSelectedAnnotations:(id)arg2;
- (void)_syncStrokeColorOnSelectionToUI;
- (void)_syncFillColorOnSelectionToUI;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1;
- (void)_restorePersistedAttributes;
- (void)_persistCurrentAttributes;
- (_Bool)validateAttributeSender:(id)arg1;
- (void)performAttributeActionForSender:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1;

@end

